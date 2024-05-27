import Mathlib.Algebra.BigOperators.Fin
import Mathlib.Data.Finset.NatAntidiagonal
import Mathlib.Data.Nat.Choose.Central
import Mathlib.Data.Tree
import Mathlib.Data.Nat.Choose.Basic



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

inductive ballot_seq : ℕ → Type
| nil : ballot_seq 0
| cons_0 : ballot_seq n → ballot_seq (n+1)
| cons_1 : ballot_seq n → ballot_seq (n+1)

def sum_ballot_seq : ballot_seq n → Int
| .nil => 0
| .cons_0 seq => -1 + sum_ballot_seq seq
| .cons_1 seq => 1 + sum_ballot_seq seq

def is_valid_seq : ballot_seq n → Prop
| .nil => True
| .cons_0 seq => ∃ m, m = sum_ballot_seq seq ∧ m > 0 ∧ is_valid_seq seq
| .cons_1 seq => ∃ m, m = sum_ballot_seq seq ∧ m > -1 ∧ is_valid_seq seq

/-big task 1-/
def fin_pi_fin_equiv  {m : ℕ} {n : Fin m → ℕ} : ((i : Fin m) → Fin (n i)) ≃ Fin (Finset.univ.prod fun (i : Fin m) => n i) :=
sorry

/-big task 3-/
def bijectionFullBinTreeCatalan (n : ℕ) : (full_binary_tree_with_nodes n) ≃ Fin (catalan (n+1)) :=
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
  | .join T1 T2 => match plane_tree_of_full_binary_tree T2 with | .node trs => .node ((plane_tree_of_full_binary_tree T1) :: trs)

def full_binary_tree_of_plane_tree :
  plane_tree → full_binary_tree
  | .node [] => .leaf
  | .node (tr :: []) => full_binary_tree_of_plane_tree tr
  | .node (tr :: trs) => .join (full_binary_tree_of_plane_tree tr) (full_binary_tree_of_plane_tree (plane_tree.node trs))

#check Function.LeftInverse
#check Function.RightInverse
#check Nat.zero_le


def plane_tree_equiv_full_binary_tree : plane_tree ≃ full_binary_tree where
toFun := full_binary_tree_of_plane_tree
invFun := plane_tree_of_full_binary_tree
left_inv := by
  intro T
  cases' T with trs
  induction' trs with hd tl Htl
  . simp [full_binary_tree_of_plane_tree, plane_tree_of_full_binary_tree]
  . sorry
right_inv := by
  intro T
  induction' T with _ _ TH1 TH2
  . simp [plane_tree_of_full_binary_tree, full_binary_tree_of_plane_tree]
  . simp [plane_tree_of_full_binary_tree]
    sorry




/-big task 6 -/

theorem divisor_of_choose_2n_plus_one (n : ℕ) : (Nat.choose (2*n) (n+1)) = n / (n+1) * (Nat.choose (2*n) n) := by
  sorry

/-big task 7-/
theorem catalan_n_eq_2n_choose_n (n : ℕ) : catalan n = (Nat.choose (2*n) n) / (n+1) := by
sorry

/-big task 8-/
def isoValidBallotSeqCatalan (n : ℕ) : { seq : ballot_seq n // is_valid_seq seq } ≃ Fin (catalan (n+1)) :=
sorry
