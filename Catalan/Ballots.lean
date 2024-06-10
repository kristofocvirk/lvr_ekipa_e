import Mathlib.Tactic

/-small task 5-/
/-unbalanced ballot sequences-/

def ballot_seqs_n (n : ℕ) : Set (List ℤ) :=
  { l |∃ p : ℕ, ∃ q : ℕ, p + q = n ∧ l.count 1 = p ∧ l.count (-1) = q ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}

/-balanced ballot sequences-/

def ballot_seqs_2n (n : ℕ) : Set (List ℤ) :=
  {l | l.count 1 = n ∧ l.count (-1) = n ∧ ∀ x ∈ l, x = (1 : ℤ) ∨ x = -1 ∧ ∀ i ≤ n, List.sum (List.take i l) ≥ 0}
