/* Generated code for Python module 'crcmod.predefined'
 * created by Nuitka version 1.8.6
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_crcmod$predefined" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_crcmod$predefined;
PyDictObject *moduledict_crcmod$predefined;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[218];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[218];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("crcmod.predefined"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 218; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_crcmod$predefined(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 218; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_72a3f0e50d926f0a05ec1e9f3cec9e6c;
static PyCodeObject *codeobj_b5258f2fd33e44aa5fda204b2580b8c1;
static PyCodeObject *codeobj_4cbdc8ab5595933161e4ecc886cbe6b6;
static PyCodeObject *codeobj_f7d54a92bada9931f6aeeb08c2371110;
static PyCodeObject *codeobj_fb84dc86022a743540c49f17a633b122;
static PyCodeObject *codeobj_c5dc57276e1d0630da4f6f74c8e4aa83;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[211]); CHECK_OBJECT(module_filename_obj);
    codeobj_72a3f0e50d926f0a05ec1e9f3cec9e6c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[212], mod_consts[212], NULL, NULL, 0, 0, 0);
    codeobj_b5258f2fd33e44aa5fda204b2580b8c1 = MAKE_CODE_OBJECT(module_filename_obj, 146, 0, mod_consts[32], mod_consts[32], mod_consts[213], NULL, 0, 0, 0);
    codeobj_4cbdc8ab5595933161e4ecc886cbe6b6 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[214], mod_consts[213], 2, 0, 0);
    codeobj_f7d54a92bada9931f6aeeb08c2371110 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[215], NULL, 1, 0, 0);
    codeobj_fb84dc86022a743540c49f17a633b122 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[216], NULL, 1, 0, 0);
    codeobj_c5dc57276e1d0630da4f6f74c8e4aa83 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[33], mod_consts[215], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__1__simplify_name();


static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__2__get_definition_by_name();


static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__3___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__4_mkPredefinedCrcFun();


// The module function definitions.
static PyObject *impl_crcmod$predefined$$$function__1__simplify_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    struct Nuitka_FrameObject *frame_fb84dc86022a743540c49f17a633b122;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fb84dc86022a743540c49f17a633b122 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fb84dc86022a743540c49f17a633b122)) {
        Py_XDECREF(cache_frame_fb84dc86022a743540c49f17a633b122);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb84dc86022a743540c49f17a633b122 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb84dc86022a743540c49f17a633b122 = MAKE_FUNCTION_FRAME(tstate, codeobj_fb84dc86022a743540c49f17a633b122, module_crcmod$predefined, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb84dc86022a743540c49f17a633b122->m_type_description == NULL);
    frame_fb84dc86022a743540c49f17a633b122 = cache_frame_fb84dc86022a743540c49f17a633b122;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fb84dc86022a743540c49f17a633b122);
    assert(Py_REFCNT(frame_fb84dc86022a743540c49f17a633b122) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_1 = par_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fb84dc86022a743540c49f17a633b122->m_frame.f_lineno = 113;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_name);
        tmp_expression_value_2 = par_name;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fb84dc86022a743540c49f17a633b122->m_frame.f_lineno = 114;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[2]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_name);
        tmp_expression_value_3 = par_name;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fb84dc86022a743540c49f17a633b122->m_frame.f_lineno = 115;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[3]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_4 = par_name;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fb84dc86022a743540c49f17a633b122->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[5]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 116;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_5 = par_name;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    if (par_name == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 118;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_name;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb84dc86022a743540c49f17a633b122, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb84dc86022a743540c49f17a633b122->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb84dc86022a743540c49f17a633b122, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb84dc86022a743540c49f17a633b122,
        type_description_1,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_fb84dc86022a743540c49f17a633b122 == cache_frame_fb84dc86022a743540c49f17a633b122) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb84dc86022a743540c49f17a633b122);
        cache_frame_fb84dc86022a743540c49f17a633b122 = NULL;
    }

    assertFrameObject(frame_fb84dc86022a743540c49f17a633b122);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_name);
    par_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_name);
    par_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_crcmod$predefined$$$function__2__get_definition_by_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_crc_name = python_pars[0];
    PyObject *var_definition = NULL;
    struct Nuitka_FrameObject *frame_f7d54a92bada9931f6aeeb08c2371110;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f7d54a92bada9931f6aeeb08c2371110 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f7d54a92bada9931f6aeeb08c2371110)) {
        Py_XDECREF(cache_frame_f7d54a92bada9931f6aeeb08c2371110);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7d54a92bada9931f6aeeb08c2371110 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7d54a92bada9931f6aeeb08c2371110 = MAKE_FUNCTION_FRAME(tstate, codeobj_f7d54a92bada9931f6aeeb08c2371110, module_crcmod$predefined, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7d54a92bada9931f6aeeb08c2371110->m_type_description == NULL);
    frame_f7d54a92bada9931f6aeeb08c2371110 = cache_frame_f7d54a92bada9931f6aeeb08c2371110;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7d54a92bada9931f6aeeb08c2371110);
    assert(Py_REFCNT(frame_f7d54a92bada9931f6aeeb08c2371110) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crc_name);
        tmp_args_element_value_2 = par_crc_name;
        frame_f7d54a92bada9931f6aeeb08c2371110->m_frame.f_lineno = 138;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = Py_None;
        frame_f7d54a92bada9931f6aeeb08c2371110->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_definition == NULL);
        var_definition = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_definition);
        tmp_operand_value_1 = var_definition;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crc_name);
        tmp_args_element_value_4 = par_crc_name;
        tmp_args_element_value_5 = Py_None;
        frame_f7d54a92bada9931f6aeeb08c2371110->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_definition;
            assert(old != NULL);
            var_definition = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_definition);
        tmp_operand_value_2 = var_definition;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[13];
        CHECK_OBJECT(par_crc_name);
        tmp_kw_call_arg_value_1_1 = par_crc_name;
        frame_f7d54a92bada9931f6aeeb08c2371110->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f7d54a92bada9931f6aeeb08c2371110->m_frame.f_lineno = 142;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 142;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7d54a92bada9931f6aeeb08c2371110, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7d54a92bada9931f6aeeb08c2371110->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7d54a92bada9931f6aeeb08c2371110, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7d54a92bada9931f6aeeb08c2371110,
        type_description_1,
        par_crc_name,
        var_definition
    );


    // Release cached frame if used for exception.
    if (frame_f7d54a92bada9931f6aeeb08c2371110 == cache_frame_f7d54a92bada9931f6aeeb08c2371110) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7d54a92bada9931f6aeeb08c2371110);
        cache_frame_f7d54a92bada9931f6aeeb08c2371110 = NULL;
    }

    assertFrameObject(frame_f7d54a92bada9931f6aeeb08c2371110);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_definition);
    tmp_return_value = var_definition;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_definition);
    Py_DECREF(var_definition);
    var_definition = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_definition);
    var_definition = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_crcmod$predefined$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_crc_name = python_pars[1];
    PyObject *var_definition = NULL;
    struct Nuitka_FrameObject *frame_4cbdc8ab5595933161e4ecc886cbe6b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6)) {
        Py_XDECREF(cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_4cbdc8ab5595933161e4ecc886cbe6b6, module_crcmod$predefined, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6->m_type_description == NULL);
    frame_4cbdc8ab5595933161e4ecc886cbe6b6 = cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4cbdc8ab5595933161e4ecc886cbe6b6);
    assert(Py_REFCNT(frame_4cbdc8ab5595933161e4ecc886cbe6b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crc_name);
        tmp_args_element_value_1 = par_crc_name;
        frame_4cbdc8ab5595933161e4ecc886cbe6b6->m_frame.f_lineno = 148;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_definition == NULL);
        var_definition = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_crcmod$predefined, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_2 = var_definition;
        tmp_subscript_value_1 = mod_consts[17];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_3 = var_definition;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_4 = var_definition;
        tmp_subscript_value_3 = mod_consts[19];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_5 = var_definition;
        tmp_subscript_value_4 = mod_consts[20];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_4cbdc8ab5595933161e4ecc886cbe6b6->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cbdc8ab5595933161e4ecc886cbe6b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cbdc8ab5595933161e4ecc886cbe6b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cbdc8ab5595933161e4ecc886cbe6b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cbdc8ab5595933161e4ecc886cbe6b6,
        type_description_1,
        par_self,
        par_crc_name,
        var_definition,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4cbdc8ab5595933161e4ecc886cbe6b6 == cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6);
        cache_frame_4cbdc8ab5595933161e4ecc886cbe6b6 = NULL;
    }

    assertFrameObject(frame_4cbdc8ab5595933161e4ecc886cbe6b6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_definition);
    Py_DECREF(var_definition);
    var_definition = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_definition);
    var_definition = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_crcmod$predefined$$$function__4_mkPredefinedCrcFun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_crc_name = python_pars[0];
    PyObject *var_definition = NULL;
    struct Nuitka_FrameObject *frame_c5dc57276e1d0630da4f6f74c8e4aa83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83)) {
        Py_XDECREF(cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83 = MAKE_FUNCTION_FRAME(tstate, codeobj_c5dc57276e1d0630da4f6f74c8e4aa83, module_crcmod$predefined, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83->m_type_description == NULL);
    frame_c5dc57276e1d0630da4f6f74c8e4aa83 = cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c5dc57276e1d0630da4f6f74c8e4aa83);
    assert(Py_REFCNT(frame_c5dc57276e1d0630da4f6f74c8e4aa83) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crc_name);
        tmp_args_element_value_1 = par_crc_name;
        frame_c5dc57276e1d0630da4f6f74c8e4aa83->m_frame.f_lineno = 157;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_definition == NULL);
        var_definition = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_2 = var_definition;
        tmp_subscript_value_1 = mod_consts[17];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_3 = var_definition;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_4 = var_definition;
        tmp_subscript_value_3 = mod_consts[19];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_definition);
        tmp_expression_value_5 = var_definition;
        tmp_subscript_value_4 = mod_consts[20];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c5dc57276e1d0630da4f6f74c8e4aa83->m_frame.f_lineno = 158;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5dc57276e1d0630da4f6f74c8e4aa83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5dc57276e1d0630da4f6f74c8e4aa83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5dc57276e1d0630da4f6f74c8e4aa83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5dc57276e1d0630da4f6f74c8e4aa83,
        type_description_1,
        par_crc_name,
        var_definition
    );


    // Release cached frame if used for exception.
    if (frame_c5dc57276e1d0630da4f6f74c8e4aa83 == cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83);
        cache_frame_c5dc57276e1d0630da4f6f74c8e4aa83 = NULL;
    }

    assertFrameObject(frame_c5dc57276e1d0630da4f6f74c8e4aa83);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_definition);
    Py_DECREF(var_definition);
    var_definition = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_definition);
    var_definition = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_crc_name);
    Py_DECREF(par_crc_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__1__simplify_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_crcmod$predefined$$$function__1__simplify_name,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb84dc86022a743540c49f17a633b122,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_crcmod$predefined,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__2__get_definition_by_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_crcmod$predefined$$$function__2__get_definition_by_name,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7d54a92bada9931f6aeeb08c2371110,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_crcmod$predefined,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__3___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_crcmod$predefined$$$function__3___init__,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_4cbdc8ab5595933161e4ecc886cbe6b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_crcmod$predefined,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_crcmod$predefined$$$function__4_mkPredefinedCrcFun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_crcmod$predefined$$$function__4_mkPredefinedCrcFun,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5dc57276e1d0630da4f6f74c8e4aa83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_crcmod$predefined,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_crcmod$predefined[] = {
    impl_crcmod$predefined$$$function__1__simplify_name,
    impl_crcmod$predefined$$$function__2__get_definition_by_name,
    impl_crcmod$predefined$$$function__3___init__,
    impl_crcmod$predefined$$$function__4_mkPredefinedCrcFun,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_crcmod$predefined;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_crcmod$predefined) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_crcmod$predefined[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_crcmod$predefined,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_crcmod$predefined(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("crcmod.predefined");

    // Store the module for future use.
    module_crcmod$predefined = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("crcmod.predefined: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("crcmod.predefined: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcrcmod$predefined\n");

    moduledict_crcmod$predefined = MODULE_DICT(module_crcmod$predefined);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_crcmod$predefined,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_crcmod$predefined,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[217]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_crcmod$predefined,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_crcmod$predefined,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_crcmod$predefined,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_crcmod$predefined);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_crcmod$predefined);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_72a3f0e50d926f0a05ec1e9f3cec9e6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_crcmod$predefined$$$class__1_PredefinedCrc_146 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_b5258f2fd33e44aa5fda204b2580b8c1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_2);
    }
    frame_72a3f0e50d926f0a05ec1e9f3cec9e6c = MAKE_MODULE_FRAME(codeobj_72a3f0e50d926f0a05ec1e9f3cec9e6c, module_crcmod$predefined);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_72a3f0e50d926f0a05ec1e9f3cec9e6c);
    assert(Py_REFCNT(frame_72a3f0e50d926f0a05ec1e9f3cec9e6c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[22];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_crcmod$predefined;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[31];
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 36;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST2(mod_consts[32],mod_consts[33]);
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_True;
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        tmp_list_element_2 = mod_consts[37];
        tmp_list_element_1 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[38];
        PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[39];
        PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_list_element_2 == NULL));
        PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[31];
        PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[31];
        PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[40];
        PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_2);
        tmp_assign_source_8 = MAKE_LIST_EMPTY(41);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyObject *tmp_list_element_8;
            PyObject *tmp_list_element_9;
            PyObject *tmp_list_element_10;
            PyObject *tmp_list_element_11;
            PyObject *tmp_list_element_12;
            PyObject *tmp_list_element_13;
            PyObject *tmp_list_element_14;
            PyObject *tmp_list_element_15;
            PyObject *tmp_list_element_16;
            PyObject *tmp_list_element_17;
            PyObject *tmp_list_element_18;
            PyObject *tmp_list_element_19;
            PyObject *tmp_list_element_20;
            PyObject *tmp_list_element_21;
            PyObject *tmp_list_element_22;
            PyObject *tmp_list_element_23;
            PyObject *tmp_list_element_24;
            PyObject *tmp_list_element_25;
            PyObject *tmp_list_element_26;
            PyObject *tmp_list_element_27;
            PyObject *tmp_list_element_28;
            PyObject *tmp_list_element_29;
            PyObject *tmp_list_element_30;
            PyObject *tmp_list_element_31;
            PyObject *tmp_list_element_32;
            PyObject *tmp_list_element_33;
            PyObject *tmp_list_element_34;
            PyObject *tmp_list_element_35;
            PyObject *tmp_list_element_36;
            PyObject *tmp_list_element_37;
            PyObject *tmp_list_element_38;
            PyObject *tmp_list_element_39;
            PyObject *tmp_list_element_40;
            PyObject *tmp_list_element_41;
            PyObject *tmp_list_element_42;
            PyList_SET_ITEM(tmp_assign_source_8, 0, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[41];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[42];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[43];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_3);
            tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_3 == NULL)) {
                tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_3 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[44];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_3);
            PyList_SET_ITEM(tmp_assign_source_8, 1, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[45];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[46];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[47];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_4 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[48];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[49];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_4);
            PyList_SET_ITEM(tmp_assign_source_8, 2, tmp_list_element_1);
            tmp_list_element_5 = mod_consts[50];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_5);
            tmp_list_element_5 = mod_consts[51];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_5);
            tmp_list_element_5 = mod_consts[39];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_5);
            tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_5 == NULL)) {
                tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_5 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_5);
            tmp_list_element_5 = mod_consts[52];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_5);
            tmp_list_element_5 = mod_consts[52];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_5);
            tmp_list_element_5 = mod_consts[53];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_5);
            PyList_SET_ITEM(tmp_assign_source_8, 3, tmp_list_element_1);
            tmp_list_element_6 = mod_consts[54];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_6);
            tmp_list_element_6 = mod_consts[55];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_6);
            tmp_list_element_6 = mod_consts[56];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_6 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_6);
            tmp_list_element_6 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_6);
            tmp_list_element_6 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_6);
            tmp_list_element_6 = mod_consts[53];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_6);
            PyList_SET_ITEM(tmp_assign_source_8, 4, tmp_list_element_1);
            tmp_list_element_7 = mod_consts[57];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_7);
            tmp_list_element_7 = mod_consts[58];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_7);
            tmp_list_element_7 = mod_consts[39];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_7 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_7);
            tmp_list_element_7 = mod_consts[59];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_7);
            tmp_list_element_7 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_7);
            tmp_list_element_7 = mod_consts[60];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_7);
            PyList_SET_ITEM(tmp_assign_source_8, 5, tmp_list_element_1);
            tmp_list_element_8 = mod_consts[61];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_8);
            tmp_list_element_8 = mod_consts[62];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_8);
            tmp_list_element_8 = mod_consts[63];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_8);
            tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_8 == NULL)) {
                tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_8 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_8);
            tmp_list_element_8 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_8);
            tmp_list_element_8 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_8);
            tmp_list_element_8 = mod_consts[64];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_8);
            PyList_SET_ITEM(tmp_assign_source_8, 6, tmp_list_element_1);
            tmp_list_element_9 = mod_consts[65];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_9);
            tmp_list_element_9 = mod_consts[66];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_9);
            tmp_list_element_9 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_9 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_9);
            tmp_list_element_9 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_9);
            tmp_list_element_9 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_9);
            tmp_list_element_9 = mod_consts[68];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_9);
            PyList_SET_ITEM(tmp_assign_source_8, 7, tmp_list_element_1);
            tmp_list_element_10 = mod_consts[69];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_10);
            tmp_list_element_10 = mod_consts[70];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_10);
            tmp_list_element_10 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_10);
            tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_10 == NULL)) {
                tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_10 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_10);
            tmp_list_element_10 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_10);
            tmp_list_element_10 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_10);
            tmp_list_element_10 = mod_consts[71];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_10);
            PyList_SET_ITEM(tmp_assign_source_8, 8, tmp_list_element_1);
            tmp_list_element_11 = mod_consts[72];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_11);
            tmp_list_element_11 = mod_consts[73];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_11);
            tmp_list_element_11 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_11);
            tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_11 == NULL)) {
                tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_11 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_11);
            tmp_list_element_11 = mod_consts[74];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_11);
            tmp_list_element_11 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_11);
            tmp_list_element_11 = mod_consts[75];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_11);
            PyList_SET_ITEM(tmp_assign_source_8, 9, tmp_list_element_1);
            tmp_list_element_12 = mod_consts[76];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_12);
            tmp_list_element_12 = mod_consts[77];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_12);
            tmp_list_element_12 = mod_consts[78];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_12);
            tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_12 == NULL)) {
                tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_12 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_12);
            tmp_list_element_12 = mod_consts[79];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_12);
            tmp_list_element_12 = mod_consts[79];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_12);
            tmp_list_element_12 = mod_consts[49];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_12);
            PyList_SET_ITEM(tmp_assign_source_8, 10, tmp_list_element_1);
            tmp_list_element_13 = mod_consts[80];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_13);
            tmp_list_element_13 = mod_consts[81];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_13);
            tmp_list_element_13 = mod_consts[82];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_13 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_13);
            tmp_list_element_13 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_13);
            tmp_list_element_13 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_13);
            tmp_list_element_13 = mod_consts[84];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_13);
            PyList_SET_ITEM(tmp_assign_source_8, 11, tmp_list_element_1);
            tmp_list_element_14 = mod_consts[85];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_14);
            tmp_list_element_14 = mod_consts[86];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_14);
            tmp_list_element_14 = mod_consts[82];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_14);
            tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_14 == NULL)) {
                tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_14 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_14);
            tmp_list_element_14 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_14);
            tmp_list_element_14 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_14);
            tmp_list_element_14 = mod_consts[87];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_14);
            PyList_SET_ITEM(tmp_assign_source_8, 12, tmp_list_element_1);
            tmp_list_element_15 = mod_consts[88];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_15);
            tmp_list_element_15 = mod_consts[89];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_15);
            tmp_list_element_15 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_15 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_15);
            tmp_list_element_15 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_15);
            tmp_list_element_15 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_15);
            tmp_list_element_15 = mod_consts[91];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_15);
            PyList_SET_ITEM(tmp_assign_source_8, 13, tmp_list_element_1);
            tmp_list_element_16 = mod_consts[92];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_16);
            tmp_list_element_16 = mod_consts[93];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_16);
            tmp_list_element_16 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_16);
            tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_16 == NULL)) {
                tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_16 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_16);
            tmp_list_element_16 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_16);
            tmp_list_element_16 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_16);
            tmp_list_element_16 = mod_consts[94];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_16);
            PyList_SET_ITEM(tmp_assign_source_8, 14, tmp_list_element_1);
            tmp_list_element_17 = mod_consts[95];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_17);
            tmp_list_element_17 = mod_consts[96];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_17);
            tmp_list_element_17 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_17);
            tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_17 == NULL)) {
                tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_17 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_17);
            tmp_list_element_17 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_17);
            tmp_list_element_17 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_17);
            tmp_list_element_17 = mod_consts[97];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_17);
            PyList_SET_ITEM(tmp_assign_source_8, 15, tmp_list_element_1);
            tmp_list_element_18 = mod_consts[98];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_18);
            tmp_list_element_18 = mod_consts[99];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_18);
            tmp_list_element_18 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_18);
            tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_18 == NULL)) {
                tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_18 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_18);
            tmp_list_element_18 = mod_consts[100];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_18);
            tmp_list_element_18 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_18);
            tmp_list_element_18 = mod_consts[101];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_18);
            PyList_SET_ITEM(tmp_assign_source_8, 16, tmp_list_element_1);
            tmp_list_element_19 = mod_consts[102];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_19);
            tmp_list_element_19 = mod_consts[103];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_19);
            tmp_list_element_19 = mod_consts[104];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_19);
            tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_19 == NULL)) {
                tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_19 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_19);
            tmp_list_element_19 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_19);
            tmp_list_element_19 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_19);
            tmp_list_element_19 = mod_consts[105];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_19);
            PyList_SET_ITEM(tmp_assign_source_8, 17, tmp_list_element_1);
            tmp_list_element_20 = mod_consts[106];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_20);
            tmp_list_element_20 = mod_consts[107];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_20);
            tmp_list_element_20 = mod_consts[108];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_20);
            tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_20 == NULL)) {
                tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_20 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_20);
            tmp_list_element_20 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_20);
            tmp_list_element_20 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_20);
            tmp_list_element_20 = mod_consts[109];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_20);
            PyList_SET_ITEM(tmp_assign_source_8, 18, tmp_list_element_1);
            tmp_list_element_21 = mod_consts[110];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_21);
            tmp_list_element_21 = mod_consts[111];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_21);
            tmp_list_element_21 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_21);
            tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_21 == NULL)) {
                tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_21 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_21);
            tmp_list_element_21 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_21);
            tmp_list_element_21 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_21);
            tmp_list_element_21 = mod_consts[112];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_21);
            PyList_SET_ITEM(tmp_assign_source_8, 19, tmp_list_element_1);
            tmp_list_element_22 = mod_consts[113];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_22);
            tmp_list_element_22 = mod_consts[114];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_22);
            tmp_list_element_22 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_22);
            tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_22 == NULL)) {
                tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_22 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_22);
            tmp_list_element_22 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_22);
            tmp_list_element_22 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_22);
            tmp_list_element_22 = mod_consts[115];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_22);
            PyList_SET_ITEM(tmp_assign_source_8, 20, tmp_list_element_1);
            tmp_list_element_23 = mod_consts[116];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_23);
            tmp_list_element_23 = mod_consts[117];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_23);
            tmp_list_element_23 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_23);
            tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_23 == NULL)) {
                tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_23 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_23);
            tmp_list_element_23 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_23);
            tmp_list_element_23 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_23);
            tmp_list_element_23 = mod_consts[118];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_23);
            PyList_SET_ITEM(tmp_assign_source_8, 21, tmp_list_element_1);
            tmp_list_element_24 = mod_consts[119];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_24);
            tmp_list_element_24 = mod_consts[120];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_24);
            tmp_list_element_24 = mod_consts[67];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_24);
            tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_24 == NULL)) {
                tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_24 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_24);
            tmp_list_element_24 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_24);
            tmp_list_element_24 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_24);
            tmp_list_element_24 = mod_consts[121];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_24);
            PyList_SET_ITEM(tmp_assign_source_8, 22, tmp_list_element_1);
            tmp_list_element_25 = mod_consts[122];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_25);
            tmp_list_element_25 = mod_consts[123];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_25);
            tmp_list_element_25 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_25);
            tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_25 == NULL)) {
                tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_25 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_25);
            tmp_list_element_25 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_25);
            tmp_list_element_25 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_25);
            tmp_list_element_25 = mod_consts[124];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_25);
            PyList_SET_ITEM(tmp_assign_source_8, 23, tmp_list_element_1);
            tmp_list_element_26 = mod_consts[125];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_26);
            tmp_list_element_26 = mod_consts[126];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_26);
            tmp_list_element_26 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_26);
            tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_26 == NULL)) {
                tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_26 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_26);
            tmp_list_element_26 = mod_consts[83];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_26);
            tmp_list_element_26 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_26);
            tmp_list_element_26 = mod_consts[127];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_26);
            PyList_SET_ITEM(tmp_assign_source_8, 24, tmp_list_element_1);
            tmp_list_element_27 = mod_consts[128];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_27);
            tmp_list_element_27 = mod_consts[129];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_27);
            tmp_list_element_27 = mod_consts[90];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_27);
            tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_27 == NULL)) {
                tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_27 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_27);
            tmp_list_element_27 = mod_consts[130];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_27);
            tmp_list_element_27 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_27);
            tmp_list_element_27 = mod_consts[131];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_27);
            PyList_SET_ITEM(tmp_assign_source_8, 25, tmp_list_element_1);
            tmp_list_element_28 = mod_consts[132];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_28);
            tmp_list_element_28 = mod_consts[133];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_28);
            tmp_list_element_28 = mod_consts[134];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_28);
            tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_28 == NULL)) {
                tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_28 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_28);
            tmp_list_element_28 = mod_consts[135];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_28);
            tmp_list_element_28 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_28);
            tmp_list_element_28 = mod_consts[136];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_28);
            PyList_SET_ITEM(tmp_assign_source_8, 26, tmp_list_element_1);
            tmp_list_element_29 = mod_consts[137];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_29);
            tmp_list_element_29 = mod_consts[138];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_29);
            tmp_list_element_29 = mod_consts[139];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_29);
            tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_29 == NULL)) {
                tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_29 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_29);
            tmp_list_element_29 = mod_consts[140];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_29);
            tmp_list_element_29 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_29);
            tmp_list_element_29 = mod_consts[141];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_29);
            PyList_SET_ITEM(tmp_assign_source_8, 27, tmp_list_element_1);
            tmp_list_element_30 = mod_consts[142];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_30);
            tmp_list_element_30 = mod_consts[143];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_30);
            tmp_list_element_30 = mod_consts[139];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_30);
            tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_30 == NULL)) {
                tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_30 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_30);
            tmp_list_element_30 = mod_consts[144];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_30);
            tmp_list_element_30 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_30);
            tmp_list_element_30 = mod_consts[145];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_30);
            PyList_SET_ITEM(tmp_assign_source_8, 28, tmp_list_element_1);
            tmp_list_element_31 = mod_consts[146];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_31);
            tmp_list_element_31 = mod_consts[147];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_31);
            tmp_list_element_31 = mod_consts[148];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_31);
            tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_31 == NULL)) {
                tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_31 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_31);
            tmp_list_element_31 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_31);
            tmp_list_element_31 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_31);
            tmp_list_element_31 = mod_consts[150];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_31);
            PyList_SET_ITEM(tmp_assign_source_8, 29, tmp_list_element_1);
            tmp_list_element_32 = mod_consts[151];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_32);
            tmp_list_element_32 = mod_consts[152];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_32);
            tmp_list_element_32 = mod_consts[148];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_32 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_32);
            tmp_list_element_32 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_32);
            tmp_list_element_32 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_32);
            tmp_list_element_32 = mod_consts[153];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_32);
            PyList_SET_ITEM(tmp_assign_source_8, 30, tmp_list_element_1);
            tmp_list_element_33 = mod_consts[154];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_33);
            tmp_list_element_33 = mod_consts[155];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_33);
            tmp_list_element_33 = mod_consts[156];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_33);
            tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_33 == NULL)) {
                tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_33 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_33);
            tmp_list_element_33 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_33);
            tmp_list_element_33 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_33);
            tmp_list_element_33 = mod_consts[157];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_33);
            PyList_SET_ITEM(tmp_assign_source_8, 31, tmp_list_element_1);
            tmp_list_element_34 = mod_consts[158];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_34);
            tmp_list_element_34 = mod_consts[159];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_34);
            tmp_list_element_34 = mod_consts[160];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_34 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_34);
            tmp_list_element_34 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_34);
            tmp_list_element_34 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_34);
            tmp_list_element_34 = mod_consts[161];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_34);
            PyList_SET_ITEM(tmp_assign_source_8, 32, tmp_list_element_1);
            tmp_list_element_35 = mod_consts[162];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_35);
            tmp_list_element_35 = mod_consts[163];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_35);
            tmp_list_element_35 = mod_consts[148];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_35 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_35);
            tmp_list_element_35 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_35);
            tmp_list_element_35 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_35);
            tmp_list_element_35 = mod_consts[164];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_35);
            PyList_SET_ITEM(tmp_assign_source_8, 33, tmp_list_element_1);
            tmp_list_element_36 = mod_consts[165];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_36);
            tmp_list_element_36 = mod_consts[166];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_36);
            tmp_list_element_36 = mod_consts[148];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_36);
            tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_36 == NULL)) {
                tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_36 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_36);
            tmp_list_element_36 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_36);
            tmp_list_element_36 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_36);
            tmp_list_element_36 = mod_consts[167];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_36);
            PyList_SET_ITEM(tmp_assign_source_8, 34, tmp_list_element_1);
            tmp_list_element_37 = mod_consts[168];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_37);
            tmp_list_element_37 = mod_consts[169];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_37);
            tmp_list_element_37 = mod_consts[170];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_37);
            tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_37 == NULL)) {
                tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_37 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_37);
            tmp_list_element_37 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_37);
            tmp_list_element_37 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_37);
            tmp_list_element_37 = mod_consts[171];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_37);
            PyList_SET_ITEM(tmp_assign_source_8, 35, tmp_list_element_1);
            tmp_list_element_38 = mod_consts[172];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_38);
            tmp_list_element_38 = mod_consts[173];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_38);
            tmp_list_element_38 = mod_consts[148];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_38);
            tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_38 == NULL)) {
                tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_38 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_38);
            tmp_list_element_38 = mod_consts[149];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_38);
            tmp_list_element_38 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_38);
            tmp_list_element_38 = mod_consts[174];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_38);
            PyList_SET_ITEM(tmp_assign_source_8, 36, tmp_list_element_1);
            tmp_list_element_39 = mod_consts[175];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_39);
            tmp_list_element_39 = mod_consts[176];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_39);
            tmp_list_element_39 = mod_consts[177];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_39);
            tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_39 == NULL)) {
                tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_39 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_39);
            tmp_list_element_39 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_39);
            tmp_list_element_39 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_39);
            tmp_list_element_39 = mod_consts[178];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_39);
            PyList_SET_ITEM(tmp_assign_source_8, 37, tmp_list_element_1);
            tmp_list_element_40 = mod_consts[179];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_40);
            tmp_list_element_40 = mod_consts[180];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_40);
            tmp_list_element_40 = mod_consts[181];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_40);
            tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_40 == NULL)) {
                tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_40 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_40);
            tmp_list_element_40 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_40);
            tmp_list_element_40 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_40);
            tmp_list_element_40 = mod_consts[182];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_40);
            PyList_SET_ITEM(tmp_assign_source_8, 38, tmp_list_element_1);
            tmp_list_element_41 = mod_consts[183];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_41);
            tmp_list_element_41 = mod_consts[184];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_41);
            tmp_list_element_41 = mod_consts[185];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_41);
            tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_list_element_41 == NULL)) {
                tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            assert(!(tmp_list_element_41 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_41);
            tmp_list_element_41 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_41);
            tmp_list_element_41 = mod_consts[186];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_41);
            tmp_list_element_41 = mod_consts[187];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_41);
            PyList_SET_ITEM(tmp_assign_source_8, 39, tmp_list_element_1);
            tmp_list_element_42 = mod_consts[188];
            tmp_list_element_1 = MAKE_LIST_EMPTY(7);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_42);
            tmp_list_element_42 = mod_consts[189];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_42);
            tmp_list_element_42 = mod_consts[190];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_42);
            tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_42 == NULL)) {
                tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            assert(!(tmp_list_element_42 == NULL));
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_42);
            tmp_list_element_42 = mod_consts[186];
            PyList_SET_ITEM0(tmp_list_element_1, 4, tmp_list_element_42);
            tmp_list_element_42 = mod_consts[31];
            PyList_SET_ITEM0(tmp_list_element_1, 5, tmp_list_element_42);
            tmp_list_element_42 = mod_consts[191];
            PyList_SET_ITEM0(tmp_list_element_1, 6, tmp_list_element_42);
            PyList_SET_ITEM(tmp_assign_source_8, 40, tmp_list_element_1);
        }
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_crcmod$predefined$$$function__1__simplify_name();

        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_LIST7(mod_consts[194]);
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 127;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_16 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        assert(!(tmp_args_element_value_2 == NULL));
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_dict_seq_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_1;
        }
        tmp_assign_source_17 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_17);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[198]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 129;

            goto try_except_handler_1;
        }
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_1;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_1;
        }
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 130;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_18);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[199];
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_1;
        }
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_1;
        }
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 132;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_1;
        }
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_1;
        }
        tmp_subscript_value_2 = mod_consts[79];
        tmp_ass_subscript_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_1;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 127;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_crcmod$predefined$$$function__2__get_definition_by_name();

        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_19);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[200]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[31];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[201]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[201]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[32];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 146;
        tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[202]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[203];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[204];
        tmp_default_value_1 = mod_consts[205];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[204]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_1;
        exception_lineno = 146;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_26;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_crcmod$predefined$$$class__1_PredefinedCrc_146 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[206];
        tmp_res = PyObject_SetItem(locals_crcmod$predefined$$$class__1_PredefinedCrc_146, mod_consts[207], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyObject_SetItem(locals_crcmod$predefined$$$class__1_PredefinedCrc_146, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_4;
        }
        frame_b5258f2fd33e44aa5fda204b2580b8c1_2 = MAKE_CLASS_FRAME(tstate, codeobj_b5258f2fd33e44aa5fda204b2580b8c1, module_crcmod$predefined, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b5258f2fd33e44aa5fda204b2580b8c1_2);
        assert(Py_REFCNT(frame_b5258f2fd33e44aa5fda204b2580b8c1_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_crcmod$predefined$$$function__3___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_crcmod$predefined$$$class__1_PredefinedCrc_146, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b5258f2fd33e44aa5fda204b2580b8c1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b5258f2fd33e44aa5fda204b2580b8c1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b5258f2fd33e44aa5fda204b2580b8c1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b5258f2fd33e44aa5fda204b2580b8c1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_b5258f2fd33e44aa5fda204b2580b8c1_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_crcmod$predefined$$$class__1_PredefinedCrc_146, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[32];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_crcmod$predefined$$$class__1_PredefinedCrc_146;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame.f_lineno = 146;
            tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_27);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_26 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_crcmod$predefined$$$class__1_PredefinedCrc_146);
        locals_crcmod$predefined$$$class__1_PredefinedCrc_146 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_crcmod$predefined$$$class__1_PredefinedCrc_146);
        locals_crcmod$predefined$$$class__1_PredefinedCrc_146 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 146;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_28);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72a3f0e50d926f0a05ec1e9f3cec9e6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72a3f0e50d926f0a05ec1e9f3cec9e6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72a3f0e50d926f0a05ec1e9f3cec9e6c, exception_lineno);
    }



    assertFrameObject(frame_72a3f0e50d926f0a05ec1e9f3cec9e6c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_crcmod$predefined$$$function__4_mkPredefinedCrcFun();

        UPDATE_STRING_DICT1(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assign_source_30 == NULL)) {
            tmp_assign_source_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        assert(!(tmp_assign_source_30 == NULL));
        UPDATE_STRING_DICT0(moduledict_crcmod$predefined, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_30);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("crcmod.predefined", false);

    Py_INCREF(module_crcmod$predefined);
    return module_crcmod$predefined;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_crcmod$predefined, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("crcmod$predefined", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
