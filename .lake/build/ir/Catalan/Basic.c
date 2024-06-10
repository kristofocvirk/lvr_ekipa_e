// Lean compiler output
// Module: Catalan.Basic
// Imports: Init Mathlib.Algebra.BigOperators.Fin Mathlib.Data.Finset.NatAntidiagonal Mathlib.Data.Nat.Choose.Central Mathlib.Data.Tree Mathlib.Data.Nat.Choose.Basic Mathlib.Tactic Mathlib.Logic.Equiv.Fin Mathlib.Logic.Equiv.Functor Mathlib.Logic.Equiv.Defs Mathlib.Tactic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_full__binary__tree__with__nodes_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree_size(lean_object*);
static lean_object* l_rotating__isomorphism___closed__3;
LEAN_EXPORT lean_object* l_catalan(lean_object*);
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree___boxed(lean_object*);
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__1;
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree_size___boxed(lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree__of__plane__tree(lean_object*);
static lean_object* l_list__plane__tree__to__plane__tree___closed__1;
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree_join_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_plane__tree_join(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__2;
LEAN_EXPORT lean_object* l_list__plane__tree__equiv__plane__tree;
LEAN_EXPORT lean_object* l_catalan___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_rotating__isomorphism;
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_sum___at_catalan___spec__1___rarg___closed__1;
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree__with__nodes_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter(lean_object*);
static lean_object* l_rotating__isomorphism___closed__2;
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree_join_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree(lean_object*);
LEAN_EXPORT lean_object* l_list__plane__tree__to__plane__tree(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_plane__tree__to__list__plane__trees(lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__3;
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_plane__tree_rec_x27(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_catalan___lambda__1(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
static lean_object* l_rotating__isomorphism___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___boxed(lean_object*);
static lean_object* _init_l_Finset_sum___at_catalan___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_sum___at_catalan___spec__1___rarg___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_sum___at_catalan___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_catalan___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_3 = l_catalan(x_2);
x_4 = lean_nat_sub(x_1, x_2);
lean_dec(x_2);
x_5 = l_catalan(x_4);
x_6 = lean_nat_mul(x_3, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_catalan(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
lean_dec(x_1);
x_6 = lean_nat_add(x_5, x_4);
x_7 = l_List_finRange(x_6);
x_8 = lean_alloc_closure((void*)(l_catalan___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_5);
x_9 = l_Finset_sum___at_catalan___spec__1___rarg(x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(1u);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at_catalan___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Finset_sum___at_catalan___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_catalan___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_catalan___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Catalan_Basic_0__catalan_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_plane__tree_join(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_plane__tree_rec_x27___rarg(x_3, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_plane__tree_rec_x27___rarg___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_plane__tree_rec_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_plane__tree_rec_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_full__binary__tree_size(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_full__binary__tree_size(x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_6, x_5);
lean_dec(x_5);
x_8 = l_full__binary__tree_size(x_4);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_full__binary__tree_size___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_full__binary__tree_size(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_full__binary__tree__with__nodes_size(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_full__binary__tree__with__nodes_size___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_full__binary__tree__with__nodes_size(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_list__plane__tree__to__plane__tree___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_list__plane__tree__to__plane__tree(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_list__plane__tree__to__plane__tree___closed__1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_plane__tree__to__list__plane__trees(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_2);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Catalan_Basic_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_list__plane__tree__equiv__plane__tree___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_list__plane__tree__to__plane__tree), 1, 0);
return x_1;
}
}
static lean_object* _init_l_list__plane__tree__equiv__plane__tree___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_plane__tree__to__list__plane__trees), 1, 0);
return x_1;
}
}
static lean_object* _init_l_list__plane__tree__equiv__plane__tree___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_list__plane__tree__equiv__plane__tree___closed__1;
x_2 = l_list__plane__tree__equiv__plane__tree___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_list__plane__tree__equiv__plane__tree() {
_start:
{
lean_object* x_1; 
x_1 = l_list__plane__tree__equiv__plane__tree___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_list__plane__tree__to__plane__tree___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_plane__tree__of__full__binary__tree(x_3);
x_6 = l_plane__tree__of__full__binary__tree(x_4);
x_7 = l_plane__tree_join(x_5, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_plane__tree__of__full__binary__tree(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_full__binary__tree__of__plane__tree(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_free_object(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_full__binary__tree__of__plane__tree(x_5);
lean_ctor_set(x_1, 0, x_6);
x_8 = l_full__binary__tree__of__plane__tree(x_1);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_full__binary__tree__of__plane__tree(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = l_full__binary__tree__of__plane__tree(x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Catalan_Basic_0__full__binary__tree_size_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree_join_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_3, x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_Basic_0__plane__tree_join_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_Basic_0__plane__tree_join_match__1_splitter___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_rotating__isomorphism___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_plane__tree__of__full__binary__tree___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_rotating__isomorphism___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_full__binary__tree__of__plane__tree), 1, 0);
return x_1;
}
}
static lean_object* _init_l_rotating__isomorphism___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_rotating__isomorphism___closed__1;
x_2 = l_rotating__isomorphism___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_rotating__isomorphism() {
_start:
{
lean_object* x_1; 
x_1 = l_rotating__isomorphism___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_NatAntidiagonal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Central(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Tree(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Catalan_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_NatAntidiagonal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Central(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Tree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sum___at_catalan___spec__1___rarg___closed__1 = _init_l_Finset_sum___at_catalan___spec__1___rarg___closed__1();
lean_mark_persistent(l_Finset_sum___at_catalan___spec__1___rarg___closed__1);
l_list__plane__tree__to__plane__tree___closed__1 = _init_l_list__plane__tree__to__plane__tree___closed__1();
lean_mark_persistent(l_list__plane__tree__to__plane__tree___closed__1);
l_list__plane__tree__equiv__plane__tree___closed__1 = _init_l_list__plane__tree__equiv__plane__tree___closed__1();
lean_mark_persistent(l_list__plane__tree__equiv__plane__tree___closed__1);
l_list__plane__tree__equiv__plane__tree___closed__2 = _init_l_list__plane__tree__equiv__plane__tree___closed__2();
lean_mark_persistent(l_list__plane__tree__equiv__plane__tree___closed__2);
l_list__plane__tree__equiv__plane__tree___closed__3 = _init_l_list__plane__tree__equiv__plane__tree___closed__3();
lean_mark_persistent(l_list__plane__tree__equiv__plane__tree___closed__3);
l_list__plane__tree__equiv__plane__tree = _init_l_list__plane__tree__equiv__plane__tree();
lean_mark_persistent(l_list__plane__tree__equiv__plane__tree);
l_rotating__isomorphism___closed__1 = _init_l_rotating__isomorphism___closed__1();
lean_mark_persistent(l_rotating__isomorphism___closed__1);
l_rotating__isomorphism___closed__2 = _init_l_rotating__isomorphism___closed__2();
lean_mark_persistent(l_rotating__isomorphism___closed__2);
l_rotating__isomorphism___closed__3 = _init_l_rotating__isomorphism___closed__3();
lean_mark_persistent(l_rotating__isomorphism___closed__3);
l_rotating__isomorphism = _init_l_rotating__isomorphism();
lean_mark_persistent(l_rotating__isomorphism);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
