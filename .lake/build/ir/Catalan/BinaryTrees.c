// Lean compiler output
// Module: Catalan.BinaryTrees
// Imports: Init Mathlib.Algebra.BigOperators.Fin
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
LEAN_EXPORT lean_object* l_full__binary__tree_size(lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree_size___boxed(lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree__with__nodes_size(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Fin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Catalan_BinaryTrees(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
