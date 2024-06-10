// Lean compiler output
// Module: Catalan.RotatingIsomorphism
// Imports: Init Catalan.BinaryTrees Catalan.PlaneTrees
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
static lean_object* l_rotating__isomorphism___closed__3;
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree___boxed(lean_object*);
LEAN_EXPORT lean_object* l_full__binary__tree__of__plane__tree(lean_object*);
lean_object* l_plane__tree_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree_join_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_rotating__isomorphism;
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_plane__tree__of__full__binary__tree___closed__1;
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree_join_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_rotating__isomorphism___closed__2;
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree(lean_object*);
static lean_object* l_rotating__isomorphism___closed__1;
static lean_object* _init_l_plane__tree__of__full__binary__tree___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_plane__tree__of__full__binary__tree(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_plane__tree__of__full__binary__tree___closed__1;
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
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Catalan_RotatingIsomorphism_0__plane__tree__of__full__binary__tree_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree_join_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Catalan_RotatingIsomorphism_0__plane__tree_join_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Catalan_RotatingIsomorphism_0__plane__tree_join_match__1_splitter___rarg), 3, 0);
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
lean_object* initialize_Catalan_BinaryTrees(uint8_t builtin, lean_object*);
lean_object* initialize_Catalan_PlaneTrees(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Catalan_RotatingIsomorphism(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Catalan_BinaryTrees(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Catalan_PlaneTrees(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_plane__tree__of__full__binary__tree___closed__1 = _init_l_plane__tree__of__full__binary__tree___closed__1();
lean_mark_persistent(l_plane__tree__of__full__binary__tree___closed__1);
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
