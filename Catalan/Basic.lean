import Mathlib.Algebra.BigOperators.Fin
import Mathlib.Data.Finset.NatAntidiagonal
import Mathlib.Data.Nat.Choose.Central
import Mathlib.Data.Tree
import Mathlib.Data.Nat.Choose.Basic
import Mathlib.Tactic
import Mathlib.Logic.Equiv.Fin
import Mathlib.Logic.Equiv.Functor
import Mathlib.Logic.Equiv.Defs
import Mathlib.Tactic



open BigOperators
open Finset
open Finset.antidiagonal (fst_le snd_le)

/-small task 1-/
def catalan : ℕ → ℕ
  | 0 => 1
  | n + 1 =>
    ∑ i : Fin n.succ,
      catalan i * catalan (n - i)
#align catalan catalan

/-small task 2-/
inductive plane_tree : Type
| node : List plane_tree → plane_tree

@[simp] def plane_tree.join : plane_tree → plane_tree → plane_tree
  | tr, node trs => node (tr :: trs)

#check Nat.rec
#check plane_tree.rec

def plane_tree.rec' (P : plane_tree → Prop)
                  (leaf_case : P (plane_tree.node []))
                  (node_case : ∀ (ts : List plane_tree), (∀ t, t ∈ ts → P t) → P (plane_tree.node ts))
                  (t : plane_tree) : P t :=
                match t with
                | .node [] => leaf_case
                | .node trs => node_case trs (λ x _ => plane_tree.rec' P leaf_case node_case x)
/-small task 3-/
inductive full_binary_tree : Type
| leaf
| join : (T1 T2 : full_binary_tree) → full_binary_tree

/-small task 4-/
inductive full_binary_tree_with_nodes : ℕ → Type
| leaf : full_binary_tree_with_nodes 0
| join : {n m : ℕ} → full_binary_tree_with_nodes n → full_binary_tree_with_nodes m →
          full_binary_tree_with_nodes (n + m + 1)

/-small task 5-/

def ballot_seqs_n (n : ℕ) : Set (List ℤ) :=
  { l |∃ p : ℕ, ∃ q : ℕ, p + q = n ∧ l.count 1 = p ∧ l.count (-1) = q ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}

def ballot_seqs_2n (n : ℕ) : Set (List ℤ) :=
  {l | l.count 1 = n ∧ l.count (-1) = n ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}

/-big task 1-/

def dist_fin_sigma {k : Nat} {n : Fin k → Nat} :
  (i : Fin k) × Fin (n i) ≃ Fin (∑ i : Fin k, n i) := by
  induction k with
  | zero => sorry
  | succ k H => sorry

/-big task 3-/

def full_binary_tree_with_nodes.size (_ : full_binary_tree_with_nodes n) : ℕ :=
  n

def full_binary_tree_to_nat_num : full_binary_tree_with_nodes n → ℕ
  | .leaf => 0
  | .join T1 T2 =>
    match (full_binary_tree_to_nat_num T1), (full_binary_tree_to_nat_num T2) with
    | left_idx, right_idx => right_idx + (catalan T2.size) * left_idx + ∑ i < T2.size, (catalan i) * (T1.size + T2.size - i)

def nat_num_to_full_binary_tree : (n : ℕ) → ℕ → full_binary_tree_with_nodes n
  | 0, _ => .leaf
  | num_nodes, idx => sorry


def bijectionFullBinTreeCatalan : full_binary_tree_with_nodes n ≃ Fin (catalan (n)) :=
  sorry

/-big task 4-/
def list_plane_tree_to_plane_tree :
  List plane_tree → plane_tree
  | [] => .node []
  | tr :: trs => .node (tr :: trs)

def plane_tree_to_list_plane_trees :
  plane_tree → List plane_tree
  | .node [] => []
  | .node (tr :: trs)  => tr :: trs

def list_plane_tree_equiv_plane_tree : List plane_tree ≃ plane_tree where
toFun := list_plane_tree_to_plane_tree
invFun := plane_tree_to_list_plane_trees
left_inv := by
  intro ls
  cases' ls with hd tl
  . simp [list_plane_tree_to_plane_tree]
    simp [plane_tree_to_list_plane_trees]
  . simp [plane_tree_to_list_plane_trees]
    simp [list_plane_tree_to_plane_tree]
right_inv := by
  intro T
  cases' T with trs
  . induction' trs
    . simp [plane_tree_to_list_plane_trees, list_plane_tree_to_plane_tree]
    . simp [plane_tree_to_list_plane_trees, list_plane_tree_to_plane_tree]

/-big task 5-/

def plane_tree_of_full_binary_tree :
  full_binary_tree → plane_tree
  | .leaf => plane_tree.node []
  | .join T1 T2 => plane_tree.join (plane_tree_of_full_binary_tree T1) (plane_tree_of_full_binary_tree T2)

theorem plane_tree_of_binary_leaf :
  plane_tree_of_full_binary_tree full_binary_tree.leaf = plane_tree.node [] := by
  exact rfl

theorem plane_tree_of_binary_node :
  plane_tree_of_full_binary_tree (full_binary_tree.join T1 T2) = plane_tree.join (plane_tree_of_full_binary_tree T1) (plane_tree_of_full_binary_tree T2) := by
  exact rfl

def full_binary_tree_of_plane_tree :
  plane_tree → full_binary_tree
  | .node [] => .leaf
  | .node (tr :: trs) => .join (full_binary_tree_of_plane_tree tr) (full_binary_tree_of_plane_tree (plane_tree.node trs))


theorem full_binary_tree_of_leaf :
  full_binary_tree_of_plane_tree (plane_tree.node []) = full_binary_tree.leaf := by
  exact rfl

theorem full_binary_tree_of_node :
  full_binary_tree_of_plane_tree (plane_tree.node (tr :: trs)) =
  full_binary_tree.join (full_binary_tree_of_plane_tree tr)
  (full_binary_tree_of_plane_tree (plane_tree.node trs)) := by
  dsimp [full_binary_tree_of_plane_tree]
  rw [WellFounded.fix_eq]

def rotating_isomorphism : full_binary_tree ≃ plane_tree where
toFun := plane_tree_of_full_binary_tree
invFun := full_binary_tree_of_plane_tree
left_inv := by
  intro T
  induction' T with T1 T2 H1 H2
  . simp [plane_tree_of_binary_leaf]
    simp [full_binary_tree_of_leaf]
  . dsimp [plane_tree_of_binary_node]
    cases' tr : plane_tree_of_full_binary_tree T2
    simp
    rw [full_binary_tree_of_node, ← tr, H1, H2]
right_inv := by
  intro T
  apply T.rec'
  . simp [full_binary_tree_of_leaf]
    simp [plane_tree_of_binary_leaf]
  . intros ts h
    unfold


/-big task 6 -/

theorem divisor_of_choose_2n_plus_one (n : ℕ) : (Nat.choose (2*n) (n+1)) = n / (n+1) * (Nat.choose (2*n) n) := by
  sorry

/-big task 7-/
theorem catalan_n_eq_2n_choose_n (n : ℕ) : catalan n = (Nat.choose (2*n) n) / (n+1) := by
sorry

/-big task 8-/
def isoValidBallotSeqCatalan (n : ℕ) : ballot_seqs_2n n ≃ Fin (catalan (n+1)) :=
sorry
