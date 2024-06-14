import Mathlib.Algebra.BigOperators.Fin
import Mathlib.Data.Nat.Choose.Central

open BigOperators



/-small task 1-/
/-define catalan numbers-/
def catalan : ℕ → ℕ
  | 0 => 1
  | n + 1 =>
    ∑ i : Fin n.succ,
      catalan i * catalan (n - i)

theorem catalan_succ (n : ℕ) : catalan (n + 1) = ∑ i : Fin n.succ, catalan i * catalan (n - i) := by
  rw [catalan]
