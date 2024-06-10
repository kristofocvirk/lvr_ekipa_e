// Lean compiler output
// Module: Catalan.PlaneTrees
// Imports: Init Mathlib.Logic.Equiv.Fin
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
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__1;
LEAN_EXPORT lean_object* l_plane__tree_rec_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_list__plane__tree__to__plane__tree___closed__1;
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_plane__tree_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__2;
LEAN_EXPORT lean_object* l_list__plane__tree__equiv__plane__tree;
LEAN_EXPORT lean_object* l_list__plane__tree__to__plane__tree(lean_object*);
LEAN_EXPORT lean_object* l_plane__tree__to__list__plane__trees(lean_object*);
static lean_object* l_list__plane__tree__equiv__plane__tree___closed__3;
LEAN_EXPORT lean_object* l_plane__tree_rec_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Catalan_PlaneTrees_0__plane__tree__to__list__plane__trees_match__1_splitter___rarg(x_1, x_2, x_3);
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
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Catalan_PlaneTrees(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
