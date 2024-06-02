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

theorem catalan_succ (n : ℕ) : catalan (n + 1) = ∑ i : Fin n.succ, catalan i * catalan (n - i) := by
  rw [catalan]

/-small task 2-/
inductive plane_tree : Type
| node : List plane_tree → plane_tree

@[simp] def plane_tree.join : plane_tree → plane_tree → plane_tree
  | tr, node trs => node (tr :: trs)

#check Nat.rec
#check plane_tree.rec

def plane_tree.rec' (P : plane_tree → Sort u) (t : plane_tree)
                  (leaf_case : P (plane_tree.node []))
                  (node_case : (ts : List plane_tree) → (∀ t, t ∈ ts → P t) → P (plane_tree.node ts))
                   : P t :=
                match t with
                | .node [] => leaf_case
                | .node trs => node_case trs (λ x _ => plane_tree.rec' P x leaf_case node_case)

/-small task 3-/
inductive full_binary_tree : Type
| leaf
| join : (T1 T2 : full_binary_tree) → full_binary_tree

def full_binary_tree.size :
full_binary_tree → ℕ
| leaf => 0
| join T1 T2 => 1 + T1.size + T2.size

/-small task 4-/
inductive full_binary_tree_with_nodes : ℕ → Type
| leaf : full_binary_tree_with_nodes 0
| join : {n m : ℕ} → full_binary_tree_with_nodes n → full_binary_tree_with_nodes m →
          full_binary_tree_with_nodes (n + m + 1)

def full_binary_tree_with_nodes.size (_ : full_binary_tree_with_nodes n) : ℕ :=
  n

/-small task 5-/

def ballot_seqs_n (n : ℕ) : Set (List ℤ) :=
  { l |∃ p : ℕ, ∃ q : ℕ, p + q = n ∧ l.count 1 = p ∧ l.count (-1) = q ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}

def ballot_seqs_2n (n : ℕ) : Set (List ℤ) :=
  {l | l.count 1 = n ∧ l.count (-1) = n ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}

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

theorem cons_subset {t : α} {P : α → Prop} (h : ∀ t ∈ hd :: tl, P t) : ∀ t ∈ tl, P t := by
  intros t ht
  apply h
  exact List.mem_cons_of_mem hd ht

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
  . intro ts h
    induction' ts with hd tl htl
    . rfl
    . simp [full_binary_tree_of_node]
      simp [plane_tree_of_full_binary_tree]
      rw [htl, h]
      . exact List.mem_cons_self hd tl
      . apply cons_subset h
        exact T

/-big task 6-/
#check Nat.gcd_mul_left

theorem succ_mul_choose_succ (n : ℕ) :
    (n + 1) * (2*(n + 1)).choose (n+1) = 2 * (2 * n + 1) * (2*n).choose n :=
  calc
    (n + 1) * (2 * (n + 1)).choose (n + 1) = (2 * n + 2).choose (n + 1) * (n + 1) := mul_comm _ _
    _ = (2 * n + 1).choose n * (2 * n + 2) := by rw [Nat.choose_succ_right_eq, Nat.choose_mul_succ_eq]
    _ = 2 * ((2 * n + 1).choose n * (n + 1)) := by ring
    _ = 2 * ((2 * n + 1).choose n * (2 * n + 1 - n)) := by rw [two_mul n, add_assoc,
                                                               Nat.add_sub_cancel_left]
    _ = 2 * ((2 * n).choose n * (2 * n + 1)) := by rw [Nat.choose_mul_succ_eq]
    _ = 2 * (2 * n + 1) * (2 * n).choose n := by rw [mul_assoc, mul_comm (2 * n + 1)]

theorem two_dvd_choose_succ (n : ℕ) : 2 ∣ (2*(n + 1)).choose (n+1) := by
  use (n + 1 + n).choose n
  rw [two_mul, ← add_assoc, Nat.choose_succ_succ' (n + 1 + n) n, Nat.choose_symm_add, ← two_mul]

theorem succ_dvd_centralBinom (n : ℕ) : n + 1 ∣ (2*n).choose n:= by
  have h_s : (n + 1).Coprime (2 * n + 1) := by
    rw [two_mul, add_assoc, Nat.coprime_add_self_right, Nat.coprime_self_add_left]
    exact Nat.gcd_one_left n
  apply h_s.dvd_of_dvd_mul_left
  apply Nat.dvd_of_mul_dvd_mul_left zero_lt_two
  rw [← mul_assoc, ← succ_mul_choose_succ , mul_comm]
  apply mul_dvd_mul_left
  rw [mul_comm]
  exact two_dvd_choose_succ n

#check Nat.dvd_div_of_mul_dvd
theorem succ_dvd_centralBinom_cheeky (n : ℕ) : n + 1 ∣ (2*n).choose n := by
  rw [← Nat.centralBinom_eq_two_mul_choose]
  exact Nat.succ_dvd_centralBinom n
