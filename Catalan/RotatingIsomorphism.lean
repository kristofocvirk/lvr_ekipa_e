import «Catalan».BinaryTrees
import «Catalan».PlaneTrees

/-big task 5-/
/-define the mapping from full_binary_tree to plane_tree-/

def plane_tree_of_full_binary_tree :
  full_binary_tree → plane_tree
  | .leaf => plane_tree.node []
  | .join T1 T2 => plane_tree.join (plane_tree_of_full_binary_tree T1) (plane_tree_of_full_binary_tree T2)

/-add basic operations for plane_tree_of_full_binary_tree-/

theorem plane_tree_of_binary_leaf :
  plane_tree_of_full_binary_tree full_binary_tree.leaf = plane_tree.node [] := by
  exact rfl

theorem plane_tree_of_binary_node :
  plane_tree_of_full_binary_tree (full_binary_tree.join T1 T2) = plane_tree.join (plane_tree_of_full_binary_tree T1) (plane_tree_of_full_binary_tree T2) := by
  exact rfl

/-define the mapping from plane_tree to full_binary_tree-/

def full_binary_tree_of_plane_tree :
  plane_tree → full_binary_tree
  | .node [] => .leaf
  | .node (tr :: trs) => .join (full_binary_tree_of_plane_tree tr) (full_binary_tree_of_plane_tree (plane_tree.node trs))

/-add basic operations for full_binary_tree_of_plane_tree-/

theorem full_binary_tree_of_leaf :
  full_binary_tree_of_plane_tree (plane_tree.node []) = full_binary_tree.leaf := by
  exact rfl

theorem full_binary_tree_of_node :
  full_binary_tree_of_plane_tree (plane_tree.node (tr :: trs)) =
  full_binary_tree.join (full_binary_tree_of_plane_tree tr)
  (full_binary_tree_of_plane_tree (plane_tree.node trs)) := by
  dsimp [full_binary_tree_of_plane_tree]
  rw [WellFounded.fix_eq]

/-a theorem that states that if something hold for the entire list it also holds for its tail-/

theorem cons_subset {t : α} {P : α → Prop} (h : ∀ t ∈ hd :: tl, P t) : ∀ t ∈ tl, P t := by
  intros t ht
  apply h
  exact List.mem_cons_of_mem hd ht

/-show that the mapping is isomorphic-/

def rotating_isomorphism : full_binary_tree ≃ plane_tree where
toFun := plane_tree_of_full_binary_tree
invFun := full_binary_tree_of_plane_tree
left_inv := by
  intro T
  induction' T with T1 T2 H1 H2
  . simp [plane_tree_of_binary_leaf]
    simp [full_binary_tree_of_leaf]
  . simp [plane_tree_of_binary_node]
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
