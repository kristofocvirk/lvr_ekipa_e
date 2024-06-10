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

/-big task 6-/
/-sub theorems to define the divisibility property-/
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

/-proofs of the divisibility property-/
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

theorem succ_dvd_centralBinom_cheeky (n : ℕ) : n + 1 ∣ (2*n).choose n := by
  rw [← Nat.centralBinom_eq_two_mul_choose]
  exact Nat.succ_dvd_centralBinom n
