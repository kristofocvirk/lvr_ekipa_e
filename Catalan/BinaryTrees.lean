import Mathlib.Algebra.BigOperators.Fin

/-small task 3-/
/-definition of full binary trees-/

inductive full_binary_tree : Type
| leaf
| join : (T1 T2 : full_binary_tree) → full_binary_tree

def full_binary_tree.size :
full_binary_tree → ℕ
| leaf => 0
| join T1 T2 => 1 + T1.size + T2.size

/-small task 4-/
/-definition of full binary trees with a given number of nodes-/

inductive full_binary_tree_with_nodes : ℕ → Type
| leaf : full_binary_tree_with_nodes 0
| join : {n m : ℕ} → full_binary_tree_with_nodes n → full_binary_tree_with_nodes m →
          full_binary_tree_with_nodes (n + m + 1)

def full_binary_tree_with_nodes.size (_ : full_binary_tree_with_nodes n) : ℕ :=
  n
