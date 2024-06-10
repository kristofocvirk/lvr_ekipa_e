import Mathlib.Logic.Equiv.Fin

/-small task 2-/
inductive plane_tree : Type
| node : List plane_tree → plane_tree

@[simp] def plane_tree.join : plane_tree → plane_tree → plane_tree
  | tr, node trs => node (tr :: trs)

/-define recursion on type plane_tree-/
def plane_tree.rec' (P : plane_tree → Sort u) (t : plane_tree)
                  (leaf_case : P (plane_tree.node []))
                  (node_case : (ts : List plane_tree) → (∀ t, t ∈ ts → P t) → P (plane_tree.node ts))
                   : P t :=
                match t with
                | .node [] => leaf_case
                | .node trs => node_case trs (λ x _ => plane_tree.rec' P x leaf_case node_case)

/-big task 4-/
/-define a mapping from the two types-/
def list_plane_tree_to_plane_tree :
  List plane_tree → plane_tree
  | [] => .node []
  | tr :: trs => .node (tr :: trs)

def plane_tree_to_list_plane_trees :
  plane_tree → List plane_tree
  | .node [] => []
  | .node (tr :: trs)  => tr :: trs

/-prove that they are isomorphic-/
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
