/* Generated code for Python module 'bip_utils'
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

/* The "module_bip_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bip_utils;
PyDictObject *moduledict_bip_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[454];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[454];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("bip_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 454; i++) {
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
void checkModuleConstants_bip_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 454; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_216dcfdddbfa342b29f627901da8f81a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[451]); CHECK_OBJECT(module_filename_obj);
    codeobj_216dcfdddbfa342b29f627901da8f81a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[452], mod_consts[452], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_bip_utils[] = {

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

    function_impl_code *current = functable_bip_utils;
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

    if (offset > sizeof(functable_bip_utils) || offset < 0) {
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
        functable_bip_utils[offset],
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
        module_bip_utils,
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
PyObject *modulecode_bip_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("bip_utils");

    // Store the module for future use.
    module_bip_utils = module;

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
        PRINT_STRING("bip_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("bip_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initbip_utils\n");

    moduledict_bip_utils = MODULE_DICT(module_bip_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_bip_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_bip_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[453]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_bip_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_bip_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_bip_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_14__module = NULL;
    PyObject *tmp_import_from_15__module = NULL;
    PyObject *tmp_import_from_16__module = NULL;
    PyObject *tmp_import_from_17__module = NULL;
    PyObject *tmp_import_from_18__module = NULL;
    PyObject *tmp_import_from_19__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_20__module = NULL;
    PyObject *tmp_import_from_21__module = NULL;
    PyObject *tmp_import_from_22__module = NULL;
    PyObject *tmp_import_from_23__module = NULL;
    PyObject *tmp_import_from_24__module = NULL;
    PyObject *tmp_import_from_25__module = NULL;
    PyObject *tmp_import_from_26__module = NULL;
    PyObject *tmp_import_from_27__module = NULL;
    PyObject *tmp_import_from_28__module = NULL;
    PyObject *tmp_import_from_29__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_30__module = NULL;
    PyObject *tmp_import_from_31__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_216dcfdddbfa342b29f627901da8f81a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_216dcfdddbfa342b29f627901da8f81a = MAKE_MODULE_FRAME(codeobj_216dcfdddbfa342b29f627901da8f81a, module_bip_utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_216dcfdddbfa342b29f627901da8f81a);
    assert(Py_REFCNT(frame_216dcfdddbfa342b29f627901da8f81a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[2]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[4]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[6]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[14];
        tmp_level_value_1 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_bip_utils,
                mod_consts[16],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[17];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[18];
        tmp_level_value_2 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_bip_utils,
                mod_consts[19],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[19]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_bip_utils,
                mod_consts[20],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[20]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_bip_utils,
                mod_consts[21],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[21]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_bip_utils,
                mod_consts[22],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[22]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_bip_utils,
                mod_consts[23],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[23]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_bip_utils,
                mod_consts[24],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[24]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_bip_utils,
                mod_consts[25],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[25]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_bip_utils,
                mod_consts[26],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[26]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_bip_utils,
                mod_consts[27],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[27]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_bip_utils,
                mod_consts[28],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[28]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_bip_utils,
                mod_consts[29],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[29]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_bip_utils,
                mod_consts[30],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[30]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_bip_utils,
                mod_consts[31],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[31]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_bip_utils,
                mod_consts[32],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[32]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_bip_utils,
                mod_consts[33],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[33]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_bip_utils,
                mod_consts[34],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[34]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_18 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_bip_utils,
                mod_consts[35],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[35]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_19 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_bip_utils,
                mod_consts[36],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[36]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_20 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_bip_utils,
                mod_consts[37],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[37]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_21 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_bip_utils,
                mod_consts[38],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[38]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_22 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_bip_utils,
                mod_consts[39],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[39]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_23 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_bip_utils,
                mod_consts[40],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[40]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_24 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_bip_utils,
                mod_consts[41],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[41]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_25 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_bip_utils,
                mod_consts[42],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[42]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_26 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_bip_utils,
                mod_consts[43],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[43]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_27 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_bip_utils,
                mod_consts[44],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[44]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_28 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_bip_utils,
                mod_consts[45],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[45]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_29 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_bip_utils,
                mod_consts[46],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[46]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_30 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_bip_utils,
                mod_consts[47],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[47]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_31 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_bip_utils,
                mod_consts[48],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[48]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_32 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_bip_utils,
                mod_consts[49],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[49]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_33 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_bip_utils,
                mod_consts[50],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[50]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_34 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_bip_utils,
                mod_consts[51],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[51]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_35 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_bip_utils,
                mod_consts[52],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[52]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_36 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_bip_utils,
                mod_consts[53],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[53]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_37 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_bip_utils,
                mod_consts[54],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[54]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_38 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_bip_utils,
                mod_consts[55],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[55]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_39 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_39,
                (PyObject *)moduledict_bip_utils,
                mod_consts[56],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[56]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_40 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_40,
                (PyObject *)moduledict_bip_utils,
                mod_consts[57],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[57]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_41 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_41,
                (PyObject *)moduledict_bip_utils,
                mod_consts[58],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[58]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_42 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_42,
                (PyObject *)moduledict_bip_utils,
                mod_consts[59],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[59]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_43 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_43,
                (PyObject *)moduledict_bip_utils,
                mod_consts[60],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[60]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_44 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_44,
                (PyObject *)moduledict_bip_utils,
                mod_consts[61],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[61]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_45 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_45,
                (PyObject *)moduledict_bip_utils,
                mod_consts[62],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[62]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_46 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_46,
                (PyObject *)moduledict_bip_utils,
                mod_consts[63],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[63]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_47 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_47,
                (PyObject *)moduledict_bip_utils,
                mod_consts[64],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[64]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_48 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_48,
                (PyObject *)moduledict_bip_utils,
                mod_consts[65],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[65]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_49 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_49,
                (PyObject *)moduledict_bip_utils,
                mod_consts[66],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[66]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_50 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_50,
                (PyObject *)moduledict_bip_utils,
                mod_consts[67],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[67]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_51 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_51,
                (PyObject *)moduledict_bip_utils,
                mod_consts[68],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[68]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_52 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_52,
                (PyObject *)moduledict_bip_utils,
                mod_consts[69],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[69]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_53 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_53,
                (PyObject *)moduledict_bip_utils,
                mod_consts[70],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[70]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_54 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_54,
                (PyObject *)moduledict_bip_utils,
                mod_consts[71],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[71]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_55 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_55,
                (PyObject *)moduledict_bip_utils,
                mod_consts[72],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[72]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_56 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_56,
                (PyObject *)moduledict_bip_utils,
                mod_consts[73],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[73]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_57 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_57,
                (PyObject *)moduledict_bip_utils,
                mod_consts[74],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[74]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_58 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_58,
                (PyObject *)moduledict_bip_utils,
                mod_consts[75],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[75]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_59 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_59,
                (PyObject *)moduledict_bip_utils,
                mod_consts[76],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[76]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_60 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_60,
                (PyObject *)moduledict_bip_utils,
                mod_consts[77],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[77]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_61 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_61,
                (PyObject *)moduledict_bip_utils,
                mod_consts[78],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[78]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_62 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_62,
                (PyObject *)moduledict_bip_utils,
                mod_consts[79],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[79]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_63 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_63,
                (PyObject *)moduledict_bip_utils,
                mod_consts[80],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[80]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_64 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_64,
                (PyObject *)moduledict_bip_utils,
                mod_consts[81],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[81]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_65 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_65,
                (PyObject *)moduledict_bip_utils,
                mod_consts[82],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[82]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_66 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_66,
                (PyObject *)moduledict_bip_utils,
                mod_consts[83],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[83]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_67 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_67,
                (PyObject *)moduledict_bip_utils,
                mod_consts[84],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[84]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_68 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_68,
                (PyObject *)moduledict_bip_utils,
                mod_consts[85],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[85]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_69 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_69,
                (PyObject *)moduledict_bip_utils,
                mod_consts[86],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[86]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_70 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_70,
                (PyObject *)moduledict_bip_utils,
                mod_consts[87],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[87]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_71 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_71,
                (PyObject *)moduledict_bip_utils,
                mod_consts[88],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[88]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_72 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_72,
                (PyObject *)moduledict_bip_utils,
                mod_consts[89],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[89]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_73 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_73,
                (PyObject *)moduledict_bip_utils,
                mod_consts[90],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[90]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_74 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_74,
                (PyObject *)moduledict_bip_utils,
                mod_consts[91],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[91]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_75 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_75,
                (PyObject *)moduledict_bip_utils,
                mod_consts[92],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[92]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_76 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_76,
                (PyObject *)moduledict_bip_utils,
                mod_consts[93],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[93]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_77 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_77,
                (PyObject *)moduledict_bip_utils,
                mod_consts[94],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[94]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_78 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_78,
                (PyObject *)moduledict_bip_utils,
                mod_consts[95],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[95]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_79 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_79,
                (PyObject *)moduledict_bip_utils,
                mod_consts[96],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[96]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_80 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_80,
                (PyObject *)moduledict_bip_utils,
                mod_consts[97],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[97]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_81 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_81,
                (PyObject *)moduledict_bip_utils,
                mod_consts[98],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts[98]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_82 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_82,
                (PyObject *)moduledict_bip_utils,
                mod_consts[99],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts[99]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_83 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_83,
                (PyObject *)moduledict_bip_utils,
                mod_consts[100],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts[100]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_84 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_84,
                (PyObject *)moduledict_bip_utils,
                mod_consts[101],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts[101]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_85 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_85,
                (PyObject *)moduledict_bip_utils,
                mod_consts[102],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts[102]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_86 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_86,
                (PyObject *)moduledict_bip_utils,
                mod_consts[103],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts[103]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_87 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_87,
                (PyObject *)moduledict_bip_utils,
                mod_consts[104],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts[104]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_88 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_88,
                (PyObject *)moduledict_bip_utils,
                mod_consts[105],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts[105]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_89 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_89,
                (PyObject *)moduledict_bip_utils,
                mod_consts[106],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts[106]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_90 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_90,
                (PyObject *)moduledict_bip_utils,
                mod_consts[107],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts[107]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_91 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_91,
                (PyObject *)moduledict_bip_utils,
                mod_consts[108],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts[108]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_92 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_92,
                (PyObject *)moduledict_bip_utils,
                mod_consts[109],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts[109]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_93 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_93,
                (PyObject *)moduledict_bip_utils,
                mod_consts[110],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts[110]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_94 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_94,
                (PyObject *)moduledict_bip_utils,
                mod_consts[111],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_94, mod_consts[111]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_95 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_95,
                (PyObject *)moduledict_bip_utils,
                mod_consts[112],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_95, mod_consts[112]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_96 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_96,
                (PyObject *)moduledict_bip_utils,
                mod_consts[113],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_96, mod_consts[113]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_97 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_97,
                (PyObject *)moduledict_bip_utils,
                mod_consts[114],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_97, mod_consts[114]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_98 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_98,
                (PyObject *)moduledict_bip_utils,
                mod_consts[115],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_98, mod_consts[115]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_99 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_99,
                (PyObject *)moduledict_bip_utils,
                mod_consts[116],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_99, mod_consts[116]);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_100 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_100,
                (PyObject *)moduledict_bip_utils,
                mod_consts[117],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_100, mod_consts[117]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_101 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_101,
                (PyObject *)moduledict_bip_utils,
                mod_consts[118],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_101, mod_consts[118]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_102 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_102,
                (PyObject *)moduledict_bip_utils,
                mod_consts[119],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_102, mod_consts[119]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_103 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_103,
                (PyObject *)moduledict_bip_utils,
                mod_consts[120],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_103, mod_consts[120]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_104 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_104,
                (PyObject *)moduledict_bip_utils,
                mod_consts[121],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_104, mod_consts[121]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_105 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_105,
                (PyObject *)moduledict_bip_utils,
                mod_consts[122],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_105, mod_consts[122]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_106 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_106,
                (PyObject *)moduledict_bip_utils,
                mod_consts[123],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_106, mod_consts[123]);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_107 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_107,
                (PyObject *)moduledict_bip_utils,
                mod_consts[124],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_107, mod_consts[124]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_108 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_108,
                (PyObject *)moduledict_bip_utils,
                mod_consts[125],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_108, mod_consts[125]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_109 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_109,
                (PyObject *)moduledict_bip_utils,
                mod_consts[126],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_109, mod_consts[126]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_110 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_110,
                (PyObject *)moduledict_bip_utils,
                mod_consts[127],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_110, mod_consts[127]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_111 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_111,
                (PyObject *)moduledict_bip_utils,
                mod_consts[128],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_111, mod_consts[128]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_112 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_112,
                (PyObject *)moduledict_bip_utils,
                mod_consts[129],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_112, mod_consts[129]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_113 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_113,
                (PyObject *)moduledict_bip_utils,
                mod_consts[130],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_113, mod_consts[130]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_114 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_114,
                (PyObject *)moduledict_bip_utils,
                mod_consts[131],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_114, mod_consts[131]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_115 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_115,
                (PyObject *)moduledict_bip_utils,
                mod_consts[132],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_115, mod_consts[132]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_116 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_116,
                (PyObject *)moduledict_bip_utils,
                mod_consts[133],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_116, mod_consts[133]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_117 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_117,
                (PyObject *)moduledict_bip_utils,
                mod_consts[134],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_117, mod_consts[134]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_118 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_118,
                (PyObject *)moduledict_bip_utils,
                mod_consts[135],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_118, mod_consts[135]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_119 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_119,
                (PyObject *)moduledict_bip_utils,
                mod_consts[136],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_119, mod_consts[136]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_120 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_120,
                (PyObject *)moduledict_bip_utils,
                mod_consts[137],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_120, mod_consts[137]);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_121 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_121,
                (PyObject *)moduledict_bip_utils,
                mod_consts[138],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_121, mod_consts[138]);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_126);
    }
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[139];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[140];
        tmp_level_value_3 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 29;
        tmp_assign_source_127 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_127;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_122 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_122,
                (PyObject *)moduledict_bip_utils,
                mod_consts[141],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_122, mod_consts[141]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_123 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_123,
                (PyObject *)moduledict_bip_utils,
                mod_consts[142],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_123, mod_consts[142]);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_124 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_124,
                (PyObject *)moduledict_bip_utils,
                mod_consts[143],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_124, mod_consts[143]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_125 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_125,
                (PyObject *)moduledict_bip_utils,
                mod_consts[144],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_125, mod_consts[144]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_126 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_126,
                (PyObject *)moduledict_bip_utils,
                mod_consts[145],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_126, mod_consts[145]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_127 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_127,
                (PyObject *)moduledict_bip_utils,
                mod_consts[146],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_127, mod_consts[146]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_128 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_128,
                (PyObject *)moduledict_bip_utils,
                mod_consts[147],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_128, mod_consts[147]);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_129 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_129,
                (PyObject *)moduledict_bip_utils,
                mod_consts[148],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_129, mod_consts[148]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_130 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_130,
                (PyObject *)moduledict_bip_utils,
                mod_consts[149],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_130, mod_consts[149]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_131 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_131,
                (PyObject *)moduledict_bip_utils,
                mod_consts[150],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_131, mod_consts[150]);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_137);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[151];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[152];
        tmp_level_value_4 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 36;
        tmp_assign_source_138 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_138;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_132 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_132,
                (PyObject *)moduledict_bip_utils,
                mod_consts[153],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_132, mod_consts[153]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_133 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_133,
                (PyObject *)moduledict_bip_utils,
                mod_consts[154],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_133, mod_consts[154]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_134 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_134,
                (PyObject *)moduledict_bip_utils,
                mod_consts[155],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_134, mod_consts[155]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_135 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_135,
                (PyObject *)moduledict_bip_utils,
                mod_consts[156],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_135, mod_consts[156]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_136 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_136,
                (PyObject *)moduledict_bip_utils,
                mod_consts[157],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_136, mod_consts[157]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_137 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_137,
                (PyObject *)moduledict_bip_utils,
                mod_consts[158],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_137, mod_consts[158]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_144);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[159];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[160];
        tmp_level_value_5 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 41;
        tmp_assign_source_145 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_145;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_138 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_138,
                (PyObject *)moduledict_bip_utils,
                mod_consts[161],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_138, mod_consts[161]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_139 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_139,
                (PyObject *)moduledict_bip_utils,
                mod_consts[162],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_139, mod_consts[162]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_140 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_140,
                (PyObject *)moduledict_bip_utils,
                mod_consts[163],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_140, mod_consts[163]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_141 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_141,
                (PyObject *)moduledict_bip_utils,
                mod_consts[164],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_141, mod_consts[164]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_142 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_142,
                (PyObject *)moduledict_bip_utils,
                mod_consts[165],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_142, mod_consts[165]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_143 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_143,
                (PyObject *)moduledict_bip_utils,
                mod_consts[166],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_143, mod_consts[166]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_144 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_144,
                (PyObject *)moduledict_bip_utils,
                mod_consts[167],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_144, mod_consts[167]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_152);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[168];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[169];
        tmp_level_value_6 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 47;
        tmp_assign_source_153 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_153;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_145 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_145,
                (PyObject *)moduledict_bip_utils,
                mod_consts[170],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_145, mod_consts[170]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_146 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_146,
                (PyObject *)moduledict_bip_utils,
                mod_consts[171],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_146, mod_consts[171]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_147 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_147,
                (PyObject *)moduledict_bip_utils,
                mod_consts[172],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_147, mod_consts[172]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_148 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_148,
                (PyObject *)moduledict_bip_utils,
                mod_consts[173],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_148, mod_consts[173]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_149 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_149,
                (PyObject *)moduledict_bip_utils,
                mod_consts[174],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_149, mod_consts[174]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_150 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_150,
                (PyObject *)moduledict_bip_utils,
                mod_consts[175],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_150, mod_consts[175]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_151;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_151 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_151,
                (PyObject *)moduledict_bip_utils,
                mod_consts[176],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_151, mod_consts[176]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_152;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_152 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_152,
                (PyObject *)moduledict_bip_utils,
                mod_consts[177],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_152, mod_consts[177]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_153;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_153 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_153,
                (PyObject *)moduledict_bip_utils,
                mod_consts[178],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_153, mod_consts[178]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_154;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_154 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_154)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_154,
                (PyObject *)moduledict_bip_utils,
                mod_consts[179],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_154, mod_consts[179]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_155;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_155 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_155)) {
            tmp_assign_source_164 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_155,
                (PyObject *)moduledict_bip_utils,
                mod_consts[180],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_164 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_155, mod_consts[180]);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_156;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_156 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_156)) {
            tmp_assign_source_165 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_156,
                (PyObject *)moduledict_bip_utils,
                mod_consts[181],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_165 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_156, mod_consts[181]);
        }

        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_import_name_from_157;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_157 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_157)) {
            tmp_assign_source_166 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_157,
                (PyObject *)moduledict_bip_utils,
                mod_consts[182],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_166 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_157, mod_consts[182]);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_158;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_158 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_158)) {
            tmp_assign_source_167 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_158,
                (PyObject *)moduledict_bip_utils,
                mod_consts[183],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_167 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_158, mod_consts[183]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_159;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_159 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_159)) {
            tmp_assign_source_168 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_159,
                (PyObject *)moduledict_bip_utils,
                mod_consts[184],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_168 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_159, mod_consts[184]);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_160;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_160 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_160)) {
            tmp_assign_source_169 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_160,
                (PyObject *)moduledict_bip_utils,
                mod_consts[185],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_169 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_160, mod_consts[185]);
        }

        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_161;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_161 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_161)) {
            tmp_assign_source_170 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_161,
                (PyObject *)moduledict_bip_utils,
                mod_consts[186],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_170 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_161, mod_consts[186]);
        }

        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_162;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_162 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_162)) {
            tmp_assign_source_171 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_162,
                (PyObject *)moduledict_bip_utils,
                mod_consts[187],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_171 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_162, mod_consts[187]);
        }

        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_163;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_163 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_163)) {
            tmp_assign_source_172 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_163,
                (PyObject *)moduledict_bip_utils,
                mod_consts[188],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_172 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_163, mod_consts[188]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_164;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_164 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_164)) {
            tmp_assign_source_173 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_164,
                (PyObject *)moduledict_bip_utils,
                mod_consts[189],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_173 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_164, mod_consts[189]);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_import_name_from_165;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_165 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_165)) {
            tmp_assign_source_174 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_165,
                (PyObject *)moduledict_bip_utils,
                mod_consts[190],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_174 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_165, mod_consts[190]);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_166;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_166 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_166)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_166,
                (PyObject *)moduledict_bip_utils,
                mod_consts[191],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_166, mod_consts[191]);
        }

        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_import_name_from_167;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_167 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_167)) {
            tmp_assign_source_176 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_167,
                (PyObject *)moduledict_bip_utils,
                mod_consts[192],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_176 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_167, mod_consts[192]);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_168;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_168 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_168)) {
            tmp_assign_source_177 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_168,
                (PyObject *)moduledict_bip_utils,
                mod_consts[193],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_177 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_168, mod_consts[193]);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_169;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_169 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_169)) {
            tmp_assign_source_178 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_169,
                (PyObject *)moduledict_bip_utils,
                mod_consts[194],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_178 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_169, mod_consts[194]);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_170;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_170 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_170)) {
            tmp_assign_source_179 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_170,
                (PyObject *)moduledict_bip_utils,
                mod_consts[195],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_179 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_170, mod_consts[195]);
        }

        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_171;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_171 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_171)) {
            tmp_assign_source_180 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_171,
                (PyObject *)moduledict_bip_utils,
                mod_consts[196],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_180 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_171, mod_consts[196]);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_180);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[197];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[198];
        tmp_level_value_7 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 56;
        tmp_assign_source_181 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_181;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_172;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_172 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_172)) {
            tmp_assign_source_182 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_172,
                (PyObject *)moduledict_bip_utils,
                mod_consts[199],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_182 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_172, mod_consts[199]);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_173;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_173 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_173)) {
            tmp_assign_source_183 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_173,
                (PyObject *)moduledict_bip_utils,
                mod_consts[200],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_183 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_173, mod_consts[200]);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_174;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_174 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_174)) {
            tmp_assign_source_184 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_174,
                (PyObject *)moduledict_bip_utils,
                mod_consts[201],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_184 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_174, mod_consts[201]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_175;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_175 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_175)) {
            tmp_assign_source_185 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_175,
                (PyObject *)moduledict_bip_utils,
                mod_consts[202],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_185 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_175, mod_consts[202]);
        }

        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_185);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[203];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[204];
        tmp_level_value_8 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 59;
        tmp_assign_source_186 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_186;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_import_name_from_176;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_176 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_176)) {
            tmp_assign_source_187 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_176,
                (PyObject *)moduledict_bip_utils,
                mod_consts[205],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_187 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_176, mod_consts[205]);
        }

        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_177;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_177 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_177)) {
            tmp_assign_source_188 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_177,
                (PyObject *)moduledict_bip_utils,
                mod_consts[206],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_188 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_177, mod_consts[206]);
        }

        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_import_name_from_178;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_178 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_178)) {
            tmp_assign_source_189 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_178,
                (PyObject *)moduledict_bip_utils,
                mod_consts[207],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_189 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_178, mod_consts[207]);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_import_name_from_179;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_179 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_179)) {
            tmp_assign_source_190 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_179,
                (PyObject *)moduledict_bip_utils,
                mod_consts[208],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_190 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_179, mod_consts[208]);
        }

        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_import_name_from_180;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_180 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_180)) {
            tmp_assign_source_191 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_180,
                (PyObject *)moduledict_bip_utils,
                mod_consts[209],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_191 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_180, mod_consts[209]);
        }

        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_import_name_from_181;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_181 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_181)) {
            tmp_assign_source_192 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_181,
                (PyObject *)moduledict_bip_utils,
                mod_consts[210],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_192 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_181, mod_consts[210]);
        }

        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_import_name_from_182;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_182 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_182)) {
            tmp_assign_source_193 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_182,
                (PyObject *)moduledict_bip_utils,
                mod_consts[211],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_193 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_182, mod_consts[211]);
        }

        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_import_name_from_183;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_183 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_183)) {
            tmp_assign_source_194 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_183,
                (PyObject *)moduledict_bip_utils,
                mod_consts[212],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_194 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_183, mod_consts[212]);
        }

        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_import_name_from_184;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_184 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_184)) {
            tmp_assign_source_195 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_184,
                (PyObject *)moduledict_bip_utils,
                mod_consts[213],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_195 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_184, mod_consts[213]);
        }

        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_import_name_from_185;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_185 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_185)) {
            tmp_assign_source_196 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_185,
                (PyObject *)moduledict_bip_utils,
                mod_consts[214],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_196 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_185, mod_consts[214]);
        }

        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_196);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_import_name_from_186;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[215];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[216];
        tmp_level_value_9 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 63;
        tmp_import_name_from_186 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_186)) {
            tmp_assign_source_197 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_186,
                (PyObject *)moduledict_bip_utils,
                mod_consts[217],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_197 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_186, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_186);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[218];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[219];
        tmp_level_value_10 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 66;
        tmp_assign_source_198 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_198;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_import_name_from_187;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_187 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_187)) {
            tmp_assign_source_199 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_187,
                (PyObject *)moduledict_bip_utils,
                mod_consts[220],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_199 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_187, mod_consts[220]);
        }

        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_import_name_from_188;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_188 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_188)) {
            tmp_assign_source_200 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_188,
                (PyObject *)moduledict_bip_utils,
                mod_consts[221],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_200 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_188, mod_consts[221]);
        }

        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_import_name_from_189;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_189 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_189)) {
            tmp_assign_source_201 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_189,
                (PyObject *)moduledict_bip_utils,
                mod_consts[222],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_201 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_189, mod_consts[222]);
        }

        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_import_name_from_190;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_190 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_190)) {
            tmp_assign_source_202 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_190,
                (PyObject *)moduledict_bip_utils,
                mod_consts[223],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_202 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_190, mod_consts[223]);
        }

        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_import_name_from_191;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_191 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_191)) {
            tmp_assign_source_203 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_191,
                (PyObject *)moduledict_bip_utils,
                mod_consts[224],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_203 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_191, mod_consts[224]);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_203);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_import_name_from_192;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[225];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[226];
        tmp_level_value_11 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 67;
        tmp_import_name_from_192 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_192)) {
            tmp_assign_source_204 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_192,
                (PyObject *)moduledict_bip_utils,
                mod_consts[227],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_204 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_192, mod_consts[227]);
        }

        Py_DECREF(tmp_import_name_from_192);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_import_name_from_193;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[228];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[229];
        tmp_level_value_12 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 68;
        tmp_import_name_from_193 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_193)) {
            tmp_assign_source_205 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_193,
                (PyObject *)moduledict_bip_utils,
                mod_consts[230],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_205 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_193, mod_consts[230]);
        }

        Py_DECREF(tmp_import_name_from_193);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_import_name_from_194;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[231];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[232];
        tmp_level_value_13 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 69;
        tmp_import_name_from_194 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_194)) {
            tmp_assign_source_206 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_194,
                (PyObject *)moduledict_bip_utils,
                mod_consts[233],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_206 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_194, mod_consts[233]);
        }

        Py_DECREF(tmp_import_name_from_194);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[234];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[235];
        tmp_level_value_14 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 72;
        tmp_assign_source_207 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_207;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_import_name_from_195;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_195 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_195)) {
            tmp_assign_source_208 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_195,
                (PyObject *)moduledict_bip_utils,
                mod_consts[236],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_208 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_195, mod_consts[236]);
        }

        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_import_name_from_196;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_196 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_196)) {
            tmp_assign_source_209 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_196,
                (PyObject *)moduledict_bip_utils,
                mod_consts[237],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_209 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_196, mod_consts[237]);
        }

        if (tmp_assign_source_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_import_name_from_197;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_197 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_197)) {
            tmp_assign_source_210 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_197,
                (PyObject *)moduledict_bip_utils,
                mod_consts[238],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_210 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_197, mod_consts[238]);
        }

        if (tmp_assign_source_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_210);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[239];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[240];
        tmp_level_value_15 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 73;
        tmp_assign_source_211 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_211;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_import_name_from_198;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_198 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_198)) {
            tmp_assign_source_212 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_198,
                (PyObject *)moduledict_bip_utils,
                mod_consts[241],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_212 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_198, mod_consts[241]);
        }

        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_import_name_from_199;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_199 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_199)) {
            tmp_assign_source_213 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_199,
                (PyObject *)moduledict_bip_utils,
                mod_consts[242],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_213 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_199, mod_consts[242]);
        }

        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_import_name_from_200;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_200 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_200)) {
            tmp_assign_source_214 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_200,
                (PyObject *)moduledict_bip_utils,
                mod_consts[243],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_214 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_200, mod_consts[243]);
        }

        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_214);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[244];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[245];
        tmp_level_value_16 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 74;
        tmp_assign_source_215 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_215;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_import_name_from_201;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_201 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_201)) {
            tmp_assign_source_216 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_201,
                (PyObject *)moduledict_bip_utils,
                mod_consts[246],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_216 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_201, mod_consts[246]);
        }

        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_import_name_from_202;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_202 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_202)) {
            tmp_assign_source_217 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_202,
                (PyObject *)moduledict_bip_utils,
                mod_consts[247],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_217 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_202, mod_consts[247]);
        }

        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_import_name_from_203;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_203 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_203)) {
            tmp_assign_source_218 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_203,
                (PyObject *)moduledict_bip_utils,
                mod_consts[248],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_218 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_203, mod_consts[248]);
        }

        if (tmp_assign_source_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_218);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[249];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[250];
        tmp_level_value_17 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 75;
        tmp_assign_source_219 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_219;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_import_name_from_204;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_204 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_204)) {
            tmp_assign_source_220 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_204,
                (PyObject *)moduledict_bip_utils,
                mod_consts[251],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_220 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_204, mod_consts[251]);
        }

        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_import_name_from_205;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_205 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_205)) {
            tmp_assign_source_221 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_205,
                (PyObject *)moduledict_bip_utils,
                mod_consts[252],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_221 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_205, mod_consts[252]);
        }

        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_import_name_from_206;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_206 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_206)) {
            tmp_assign_source_222 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_206,
                (PyObject *)moduledict_bip_utils,
                mod_consts[253],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_222 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_206, mod_consts[253]);
        }

        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_222);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[254];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[255];
        tmp_level_value_18 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 78;
        tmp_assign_source_223 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_223;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_import_name_from_207;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_207 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_207)) {
            tmp_assign_source_224 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_207,
                (PyObject *)moduledict_bip_utils,
                mod_consts[256],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_224 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_207, mod_consts[256]);
        }

        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_import_name_from_208;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_208 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_208)) {
            tmp_assign_source_225 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_208,
                (PyObject *)moduledict_bip_utils,
                mod_consts[257],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_225 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_208, mod_consts[257]);
        }

        if (tmp_assign_source_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_225);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_import_name_from_209;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[258];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[259];
        tmp_level_value_19 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 79;
        tmp_import_name_from_209 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_209)) {
            tmp_assign_source_226 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_209,
                (PyObject *)moduledict_bip_utils,
                mod_consts[260],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_226 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_209, mod_consts[260]);
        }

        Py_DECREF(tmp_import_name_from_209);
        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_import_name_from_210;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[261];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[262];
        tmp_level_value_20 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 80;
        tmp_import_name_from_210 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_210)) {
            tmp_assign_source_227 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_210,
                (PyObject *)moduledict_bip_utils,
                mod_consts[263],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_227 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_210, mod_consts[263]);
        }

        Py_DECREF(tmp_import_name_from_210);
        if (tmp_assign_source_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[264];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[265];
        tmp_level_value_21 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 81;
        tmp_assign_source_228 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_14__module == NULL);
        tmp_import_from_14__module = tmp_assign_source_228;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_import_name_from_211;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_211 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_211)) {
            tmp_assign_source_229 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_211,
                (PyObject *)moduledict_bip_utils,
                mod_consts[266],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_229 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_211, mod_consts[266]);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_import_name_from_212;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_212 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_212)) {
            tmp_assign_source_230 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_212,
                (PyObject *)moduledict_bip_utils,
                mod_consts[267],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_230 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_212, mod_consts[267]);
        }

        if (tmp_assign_source_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_import_name_from_213;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_213 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_213)) {
            tmp_assign_source_231 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_213,
                (PyObject *)moduledict_bip_utils,
                mod_consts[268],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_231 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_213, mod_consts[268]);
        }

        if (tmp_assign_source_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_231);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[269];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[270];
        tmp_level_value_22 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 82;
        tmp_assign_source_232 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_15__module == NULL);
        tmp_import_from_15__module = tmp_assign_source_232;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_import_name_from_214;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_214 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_214)) {
            tmp_assign_source_233 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_214,
                (PyObject *)moduledict_bip_utils,
                mod_consts[271],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_233 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_214, mod_consts[271]);
        }

        if (tmp_assign_source_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_import_name_from_215;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_215 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_215)) {
            tmp_assign_source_234 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_215,
                (PyObject *)moduledict_bip_utils,
                mod_consts[272],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_234 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_215, mod_consts[272]);
        }

        if (tmp_assign_source_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_234);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[273];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[274];
        tmp_level_value_23 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 83;
        tmp_assign_source_235 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_16__module == NULL);
        tmp_import_from_16__module = tmp_assign_source_235;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_import_name_from_216;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_216 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_216)) {
            tmp_assign_source_236 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_216,
                (PyObject *)moduledict_bip_utils,
                mod_consts[275],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_236 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_216, mod_consts[275]);
        }

        if (tmp_assign_source_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_import_name_from_217;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_217 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_217)) {
            tmp_assign_source_237 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_217,
                (PyObject *)moduledict_bip_utils,
                mod_consts[276],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_237 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_217, mod_consts[276]);
        }

        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_import_name_from_218;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_218 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_218)) {
            tmp_assign_source_238 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_218,
                (PyObject *)moduledict_bip_utils,
                mod_consts[277],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_238 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_218, mod_consts[277]);
        }

        if (tmp_assign_source_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_238);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_import_name_from_219;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[278];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[279];
        tmp_level_value_24 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 86;
        tmp_import_name_from_219 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_219)) {
            tmp_assign_source_239 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_219,
                (PyObject *)moduledict_bip_utils,
                mod_consts[280],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_239 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_219, mod_consts[280]);
        }

        Py_DECREF(tmp_import_name_from_219);
        if (tmp_assign_source_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[281];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[282];
        tmp_level_value_25 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 89;
        tmp_assign_source_240 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_assign_source_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_17__module == NULL);
        tmp_import_from_17__module = tmp_assign_source_240;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_import_name_from_220;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_220 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_220)) {
            tmp_assign_source_241 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_220,
                (PyObject *)moduledict_bip_utils,
                mod_consts[283],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_241 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_220, mod_consts[283]);
        }

        if (tmp_assign_source_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_import_name_from_221;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_221 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_221)) {
            tmp_assign_source_242 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_221,
                (PyObject *)moduledict_bip_utils,
                mod_consts[284],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_242 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_221, mod_consts[284]);
        }

        if (tmp_assign_source_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_import_name_from_222;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_222 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_222)) {
            tmp_assign_source_243 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_222,
                (PyObject *)moduledict_bip_utils,
                mod_consts[285],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_243 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_222, mod_consts[285]);
        }

        if (tmp_assign_source_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_import_name_from_223;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_223 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_223)) {
            tmp_assign_source_244 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_223,
                (PyObject *)moduledict_bip_utils,
                mod_consts[286],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_244 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_223, mod_consts[286]);
        }

        if (tmp_assign_source_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_import_name_from_224;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_224 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_224)) {
            tmp_assign_source_245 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_224,
                (PyObject *)moduledict_bip_utils,
                mod_consts[287],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_245 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_224, mod_consts[287]);
        }

        if (tmp_assign_source_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_import_name_from_225;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_225 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_225)) {
            tmp_assign_source_246 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_225,
                (PyObject *)moduledict_bip_utils,
                mod_consts[288],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_246 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_225, mod_consts[288]);
        }

        if (tmp_assign_source_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_import_name_from_226;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_226 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_226)) {
            tmp_assign_source_247 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_226,
                (PyObject *)moduledict_bip_utils,
                mod_consts[289],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_247 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_226, mod_consts[289]);
        }

        if (tmp_assign_source_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_import_name_from_227;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_227 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_227)) {
            tmp_assign_source_248 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_227,
                (PyObject *)moduledict_bip_utils,
                mod_consts[290],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_248 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_227, mod_consts[290]);
        }

        if (tmp_assign_source_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_import_name_from_228;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_228 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_228)) {
            tmp_assign_source_249 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_228,
                (PyObject *)moduledict_bip_utils,
                mod_consts[291],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_249 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_228, mod_consts[291]);
        }

        if (tmp_assign_source_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_import_name_from_229;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_229 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_229)) {
            tmp_assign_source_250 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_229,
                (PyObject *)moduledict_bip_utils,
                mod_consts[292],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_250 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_229, mod_consts[292]);
        }

        if (tmp_assign_source_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_import_name_from_230;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_230 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_230)) {
            tmp_assign_source_251 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_230,
                (PyObject *)moduledict_bip_utils,
                mod_consts[293],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_251 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_230, mod_consts[293]);
        }

        if (tmp_assign_source_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_import_name_from_231;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_231 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_231)) {
            tmp_assign_source_252 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_231,
                (PyObject *)moduledict_bip_utils,
                mod_consts[294],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_252 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_231, mod_consts[294]);
        }

        if (tmp_assign_source_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_import_name_from_232;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_232 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_232)) {
            tmp_assign_source_253 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_232,
                (PyObject *)moduledict_bip_utils,
                mod_consts[295],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_253 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_232, mod_consts[295]);
        }

        if (tmp_assign_source_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_import_name_from_233;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_233 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_233)) {
            tmp_assign_source_254 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_233,
                (PyObject *)moduledict_bip_utils,
                mod_consts[296],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_254 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_233, mod_consts[296]);
        }

        if (tmp_assign_source_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_import_name_from_234;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_234 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_234)) {
            tmp_assign_source_255 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_234,
                (PyObject *)moduledict_bip_utils,
                mod_consts[297],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_255 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_234, mod_consts[297]);
        }

        if (tmp_assign_source_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_import_name_from_235;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_235 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_235)) {
            tmp_assign_source_256 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_235,
                (PyObject *)moduledict_bip_utils,
                mod_consts[298],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_256 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_235, mod_consts[298]);
        }

        if (tmp_assign_source_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_import_name_from_236;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_236 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_236)) {
            tmp_assign_source_257 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_236,
                (PyObject *)moduledict_bip_utils,
                mod_consts[299],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_257 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_236, mod_consts[299]);
        }

        if (tmp_assign_source_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_import_name_from_237;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_237 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_237)) {
            tmp_assign_source_258 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_237,
                (PyObject *)moduledict_bip_utils,
                mod_consts[300],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_258 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_237, mod_consts[300]);
        }

        if (tmp_assign_source_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_import_name_from_238;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_238 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_238)) {
            tmp_assign_source_259 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_238,
                (PyObject *)moduledict_bip_utils,
                mod_consts[301],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_259 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_238, mod_consts[301]);
        }

        if (tmp_assign_source_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_import_name_from_239;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_239 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_239)) {
            tmp_assign_source_260 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_239,
                (PyObject *)moduledict_bip_utils,
                mod_consts[302],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_260 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_239, mod_consts[302]);
        }

        if (tmp_assign_source_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_import_name_from_240;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_240 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_240)) {
            tmp_assign_source_261 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_240,
                (PyObject *)moduledict_bip_utils,
                mod_consts[303],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_261 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_240, mod_consts[303]);
        }

        if (tmp_assign_source_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_import_name_from_241;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_241 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_241)) {
            tmp_assign_source_262 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_241,
                (PyObject *)moduledict_bip_utils,
                mod_consts[304],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_262 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_241, mod_consts[304]);
        }

        if (tmp_assign_source_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_import_name_from_242;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_242 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_242)) {
            tmp_assign_source_263 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_242,
                (PyObject *)moduledict_bip_utils,
                mod_consts[305],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_263 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_242, mod_consts[305]);
        }

        if (tmp_assign_source_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_import_name_from_243;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_243 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_243)) {
            tmp_assign_source_264 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_243,
                (PyObject *)moduledict_bip_utils,
                mod_consts[306],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_264 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_243, mod_consts[306]);
        }

        if (tmp_assign_source_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_import_name_from_244;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_244 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_244)) {
            tmp_assign_source_265 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_244,
                (PyObject *)moduledict_bip_utils,
                mod_consts[307],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_265 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_244, mod_consts[307]);
        }

        if (tmp_assign_source_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_import_name_from_245;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_245 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_245)) {
            tmp_assign_source_266 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_245,
                (PyObject *)moduledict_bip_utils,
                mod_consts[308],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_266 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_245, mod_consts[308]);
        }

        if (tmp_assign_source_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_import_name_from_246;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_246 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_246)) {
            tmp_assign_source_267 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_246,
                (PyObject *)moduledict_bip_utils,
                mod_consts[309],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_267 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_246, mod_consts[309]);
        }

        if (tmp_assign_source_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_import_name_from_247;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_247 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_247)) {
            tmp_assign_source_268 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_247,
                (PyObject *)moduledict_bip_utils,
                mod_consts[310],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_268 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_247, mod_consts[310]);
        }

        if (tmp_assign_source_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_import_name_from_248;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_248 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_248)) {
            tmp_assign_source_269 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_248,
                (PyObject *)moduledict_bip_utils,
                mod_consts[311],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_269 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_248, mod_consts[311]);
        }

        if (tmp_assign_source_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_import_name_from_249;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_249 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_249)) {
            tmp_assign_source_270 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_249,
                (PyObject *)moduledict_bip_utils,
                mod_consts[312],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_270 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_249, mod_consts[312]);
        }

        if (tmp_assign_source_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_import_name_from_250;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_250 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_250)) {
            tmp_assign_source_271 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_250,
                (PyObject *)moduledict_bip_utils,
                mod_consts[313],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_271 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_250, mod_consts[313]);
        }

        if (tmp_assign_source_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_import_name_from_251;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_251 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_251)) {
            tmp_assign_source_272 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_251,
                (PyObject *)moduledict_bip_utils,
                mod_consts[314],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_272 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_251, mod_consts[314]);
        }

        if (tmp_assign_source_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_import_name_from_252;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_252 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_252)) {
            tmp_assign_source_273 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_252,
                (PyObject *)moduledict_bip_utils,
                mod_consts[315],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_273 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_252, mod_consts[315]);
        }

        if (tmp_assign_source_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_273);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[316];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[317];
        tmp_level_value_26 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 99;
        tmp_assign_source_274 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_assign_source_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_18__module == NULL);
        tmp_import_from_18__module = tmp_assign_source_274;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_import_name_from_253;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_253 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_253)) {
            tmp_assign_source_275 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_253,
                (PyObject *)moduledict_bip_utils,
                mod_consts[318],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_275 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_253, mod_consts[318]);
        }

        if (tmp_assign_source_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_import_name_from_254;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_254 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_254)) {
            tmp_assign_source_276 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_254,
                (PyObject *)moduledict_bip_utils,
                mod_consts[319],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_276 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_254, mod_consts[319]);
        }

        if (tmp_assign_source_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_import_name_from_255;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_255 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_255)) {
            tmp_assign_source_277 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_255,
                (PyObject *)moduledict_bip_utils,
                mod_consts[320],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_277 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_255, mod_consts[320]);
        }

        if (tmp_assign_source_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_277);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[321];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[322];
        tmp_level_value_27 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 102;
        tmp_assign_source_278 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_19__module == NULL);
        tmp_import_from_19__module = tmp_assign_source_278;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_import_name_from_256;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_256 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_256)) {
            tmp_assign_source_279 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_256,
                (PyObject *)moduledict_bip_utils,
                mod_consts[323],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_279 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_256, mod_consts[323]);
        }

        if (tmp_assign_source_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_import_name_from_257;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_257 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_257)) {
            tmp_assign_source_280 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_257,
                (PyObject *)moduledict_bip_utils,
                mod_consts[324],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_280 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_257, mod_consts[324]);
        }

        if (tmp_assign_source_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_import_name_from_258;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_258 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_258)) {
            tmp_assign_source_281 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_258,
                (PyObject *)moduledict_bip_utils,
                mod_consts[325],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_281 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_258, mod_consts[325]);
        }

        if (tmp_assign_source_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_import_name_from_259;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_259 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_259)) {
            tmp_assign_source_282 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_259,
                (PyObject *)moduledict_bip_utils,
                mod_consts[326],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_282 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_259, mod_consts[326]);
        }

        if (tmp_assign_source_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_import_name_from_260;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_260 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_260)) {
            tmp_assign_source_283 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_260,
                (PyObject *)moduledict_bip_utils,
                mod_consts[327],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_283 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_260, mod_consts[327]);
        }

        if (tmp_assign_source_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_import_name_from_261;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_261 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_261)) {
            tmp_assign_source_284 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_261,
                (PyObject *)moduledict_bip_utils,
                mod_consts[328],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_284 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_261, mod_consts[328]);
        }

        if (tmp_assign_source_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_import_name_from_262;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_262 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_262)) {
            tmp_assign_source_285 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_262,
                (PyObject *)moduledict_bip_utils,
                mod_consts[329],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_285 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_262, mod_consts[329]);
        }

        if (tmp_assign_source_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_import_name_from_263;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_263 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_263)) {
            tmp_assign_source_286 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_263,
                (PyObject *)moduledict_bip_utils,
                mod_consts[330],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_286 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_263, mod_consts[330]);
        }

        if (tmp_assign_source_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_import_name_from_264;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_264 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_264)) {
            tmp_assign_source_287 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_264,
                (PyObject *)moduledict_bip_utils,
                mod_consts[331],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_287 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_264, mod_consts[331]);
        }

        if (tmp_assign_source_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_import_name_from_265;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_265 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_265)) {
            tmp_assign_source_288 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_265,
                (PyObject *)moduledict_bip_utils,
                mod_consts[332],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_288 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_265, mod_consts[332]);
        }

        if (tmp_assign_source_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_288);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[333];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[334];
        tmp_level_value_28 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 107;
        tmp_assign_source_289 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_assign_source_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_20__module == NULL);
        tmp_import_from_20__module = tmp_assign_source_289;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_import_name_from_266;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_266 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_266)) {
            tmp_assign_source_290 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_266,
                (PyObject *)moduledict_bip_utils,
                mod_consts[335],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_290 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_266, mod_consts[335]);
        }

        if (tmp_assign_source_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_import_name_from_267;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_267 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_267)) {
            tmp_assign_source_291 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_267,
                (PyObject *)moduledict_bip_utils,
                mod_consts[336],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_291 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_267, mod_consts[336]);
        }

        if (tmp_assign_source_291 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_import_name_from_268;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_268 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_268)) {
            tmp_assign_source_292 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_268,
                (PyObject *)moduledict_bip_utils,
                mod_consts[337],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_292 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_268, mod_consts[337]);
        }

        if (tmp_assign_source_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_import_name_from_269;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_269 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_269)) {
            tmp_assign_source_293 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_269,
                (PyObject *)moduledict_bip_utils,
                mod_consts[338],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_293 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_269, mod_consts[338]);
        }

        if (tmp_assign_source_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_import_name_from_270;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_270 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_270)) {
            tmp_assign_source_294 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_270,
                (PyObject *)moduledict_bip_utils,
                mod_consts[339],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_294 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_270, mod_consts[339]);
        }

        if (tmp_assign_source_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_import_name_from_271;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_271 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_271)) {
            tmp_assign_source_295 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_271,
                (PyObject *)moduledict_bip_utils,
                mod_consts[340],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_295 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_271, mod_consts[340]);
        }

        if (tmp_assign_source_295 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_import_name_from_272;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_272 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_272)) {
            tmp_assign_source_296 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_272,
                (PyObject *)moduledict_bip_utils,
                mod_consts[341],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_296 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_272, mod_consts[341]);
        }

        if (tmp_assign_source_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_import_name_from_273;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_273 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_273)) {
            tmp_assign_source_297 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_273,
                (PyObject *)moduledict_bip_utils,
                mod_consts[342],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_297 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_273, mod_consts[342]);
        }

        if (tmp_assign_source_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_import_name_from_274;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_274 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_274)) {
            tmp_assign_source_298 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_274,
                (PyObject *)moduledict_bip_utils,
                mod_consts[343],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_298 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_274, mod_consts[343]);
        }

        if (tmp_assign_source_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_import_name_from_275;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_275 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_275)) {
            tmp_assign_source_299 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_275,
                (PyObject *)moduledict_bip_utils,
                mod_consts[344],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_299 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_275, mod_consts[344]);
        }

        if (tmp_assign_source_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        PyObject *tmp_import_name_from_276;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_276 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_276)) {
            tmp_assign_source_300 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_276,
                (PyObject *)moduledict_bip_utils,
                mod_consts[345],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_300 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_276, mod_consts[345]);
        }

        if (tmp_assign_source_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_300);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[346];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[347];
        tmp_level_value_29 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 114;
        tmp_assign_source_301 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_assign_source_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_21__module == NULL);
        tmp_import_from_21__module = tmp_assign_source_301;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_import_name_from_277;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_277 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_277)) {
            tmp_assign_source_302 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_277,
                (PyObject *)moduledict_bip_utils,
                mod_consts[348],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_302 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_277, mod_consts[348]);
        }

        if (tmp_assign_source_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_import_name_from_278;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_278 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_278)) {
            tmp_assign_source_303 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_278,
                (PyObject *)moduledict_bip_utils,
                mod_consts[349],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_303 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_278, mod_consts[349]);
        }

        if (tmp_assign_source_303 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_import_name_from_279;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_279 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_279)) {
            tmp_assign_source_304 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_279,
                (PyObject *)moduledict_bip_utils,
                mod_consts[350],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_304 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_279, mod_consts[350]);
        }

        if (tmp_assign_source_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_import_name_from_280;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_280 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_280)) {
            tmp_assign_source_305 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_280,
                (PyObject *)moduledict_bip_utils,
                mod_consts[351],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_305 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_280, mod_consts[351]);
        }

        if (tmp_assign_source_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_import_name_from_281;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_281 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_281)) {
            tmp_assign_source_306 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_281,
                (PyObject *)moduledict_bip_utils,
                mod_consts[352],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_306 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_281, mod_consts[352]);
        }

        if (tmp_assign_source_306 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_306);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[353];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[354];
        tmp_level_value_30 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 117;
        tmp_assign_source_307 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_assign_source_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_22__module == NULL);
        tmp_import_from_22__module = tmp_assign_source_307;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_import_name_from_282;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_282 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_282)) {
            tmp_assign_source_308 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_282,
                (PyObject *)moduledict_bip_utils,
                mod_consts[355],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_308 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_282, mod_consts[355]);
        }

        if (tmp_assign_source_308 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_import_name_from_283;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_283 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_283)) {
            tmp_assign_source_309 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_283,
                (PyObject *)moduledict_bip_utils,
                mod_consts[356],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_309 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_283, mod_consts[356]);
        }

        if (tmp_assign_source_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_309);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[357];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[358];
        tmp_level_value_31 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 120;
        tmp_assign_source_310 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_assign_source_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_23__module == NULL);
        tmp_import_from_23__module = tmp_assign_source_310;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_import_name_from_284;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_284 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_284)) {
            tmp_assign_source_311 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_284,
                (PyObject *)moduledict_bip_utils,
                mod_consts[359],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_311 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_284, mod_consts[359]);
        }

        if (tmp_assign_source_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_import_name_from_285;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_285 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_285)) {
            tmp_assign_source_312 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_285,
                (PyObject *)moduledict_bip_utils,
                mod_consts[360],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_312 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_285, mod_consts[360]);
        }

        if (tmp_assign_source_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_import_name_from_286;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_286 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_286)) {
            tmp_assign_source_313 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_286,
                (PyObject *)moduledict_bip_utils,
                mod_consts[361],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_313 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_286, mod_consts[361]);
        }

        if (tmp_assign_source_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_import_name_from_287;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_287 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_287)) {
            tmp_assign_source_314 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_287,
                (PyObject *)moduledict_bip_utils,
                mod_consts[362],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_314 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_287, mod_consts[362]);
        }

        if (tmp_assign_source_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_import_name_from_288;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_288 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_288)) {
            tmp_assign_source_315 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_288,
                (PyObject *)moduledict_bip_utils,
                mod_consts[363],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_315 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_288, mod_consts[363]);
        }

        if (tmp_assign_source_315 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_import_name_from_289;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_289 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_289)) {
            tmp_assign_source_316 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_289,
                (PyObject *)moduledict_bip_utils,
                mod_consts[364],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_316 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_289, mod_consts[364]);
        }

        if (tmp_assign_source_316 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_import_name_from_290;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_290 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_290)) {
            tmp_assign_source_317 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_290,
                (PyObject *)moduledict_bip_utils,
                mod_consts[365],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_317 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_290, mod_consts[365]);
        }

        if (tmp_assign_source_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_import_name_from_291;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_291 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_291)) {
            tmp_assign_source_318 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_291,
                (PyObject *)moduledict_bip_utils,
                mod_consts[366],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_318 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_291, mod_consts[366]);
        }

        if (tmp_assign_source_318 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        PyObject *tmp_import_name_from_292;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_292 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_292)) {
            tmp_assign_source_319 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_292,
                (PyObject *)moduledict_bip_utils,
                mod_consts[367],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_319 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_292, mod_consts[367]);
        }

        if (tmp_assign_source_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        PyObject *tmp_import_name_from_293;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_293 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_293)) {
            tmp_assign_source_320 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_293,
                (PyObject *)moduledict_bip_utils,
                mod_consts[368],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_320 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_293, mod_consts[368]);
        }

        if (tmp_assign_source_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        PyObject *tmp_import_name_from_294;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_294 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_294)) {
            tmp_assign_source_321 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_294,
                (PyObject *)moduledict_bip_utils,
                mod_consts[369],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_321 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_294, mod_consts[369]);
        }

        if (tmp_assign_source_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        PyObject *tmp_import_name_from_295;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_295 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_295)) {
            tmp_assign_source_322 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_295,
                (PyObject *)moduledict_bip_utils,
                mod_consts[370],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_322 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_295, mod_consts[370]);
        }

        if (tmp_assign_source_322 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_322);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    {
        PyObject *tmp_assign_source_323;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[371];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[372];
        tmp_level_value_32 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 127;
        tmp_assign_source_323 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_assign_source_323 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_24__module == NULL);
        tmp_import_from_24__module = tmp_assign_source_323;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_import_name_from_296;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_296 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_296)) {
            tmp_assign_source_324 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_296,
                (PyObject *)moduledict_bip_utils,
                mod_consts[373],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_324 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_296, mod_consts[373]);
        }

        if (tmp_assign_source_324 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_import_name_from_297;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_297 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_297)) {
            tmp_assign_source_325 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_297,
                (PyObject *)moduledict_bip_utils,
                mod_consts[374],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_325 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_297, mod_consts[374]);
        }

        if (tmp_assign_source_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_import_name_from_298;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_298 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_298)) {
            tmp_assign_source_326 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_298,
                (PyObject *)moduledict_bip_utils,
                mod_consts[375],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_326 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_298, mod_consts[375]);
        }

        if (tmp_assign_source_326 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_import_name_from_299;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_299 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_299)) {
            tmp_assign_source_327 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_299,
                (PyObject *)moduledict_bip_utils,
                mod_consts[376],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_327 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_299, mod_consts[376]);
        }

        if (tmp_assign_source_327 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_327);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_24__module);
    Py_DECREF(tmp_import_from_24__module);
    tmp_import_from_24__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_import_from_24__module);
    Py_DECREF(tmp_import_from_24__module);
    tmp_import_from_24__module = NULL;
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_import_name_from_300;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[377];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[378];
        tmp_level_value_33 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 132;
        tmp_import_name_from_300 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_300)) {
            tmp_assign_source_328 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_300,
                (PyObject *)moduledict_bip_utils,
                mod_consts[379],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_328 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_300, mod_consts[379]);
        }

        Py_DECREF(tmp_import_name_from_300);
        if (tmp_assign_source_328 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[380];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[381];
        tmp_level_value_34 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 135;
        tmp_assign_source_329 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_assign_source_329 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_25__module == NULL);
        tmp_import_from_25__module = tmp_assign_source_329;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_import_name_from_301;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_301 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_301)) {
            tmp_assign_source_330 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_301,
                (PyObject *)moduledict_bip_utils,
                mod_consts[382],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_330 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_301, mod_consts[382]);
        }

        if (tmp_assign_source_330 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_import_name_from_302;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_302 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_302)) {
            tmp_assign_source_331 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_302,
                (PyObject *)moduledict_bip_utils,
                mod_consts[383],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_331 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_302, mod_consts[383]);
        }

        if (tmp_assign_source_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_import_name_from_303;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_303 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_303)) {
            tmp_assign_source_332 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_303,
                (PyObject *)moduledict_bip_utils,
                mod_consts[384],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_332 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_303, mod_consts[384]);
        }

        if (tmp_assign_source_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_332);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_25__module);
    Py_DECREF(tmp_import_from_25__module);
    tmp_import_from_25__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_import_from_25__module);
    Py_DECREF(tmp_import_from_25__module);
    tmp_import_from_25__module = NULL;
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[385];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[386];
        tmp_level_value_35 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 138;
        tmp_assign_source_333 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_assign_source_333 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_26__module == NULL);
        tmp_import_from_26__module = tmp_assign_source_333;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_import_name_from_304;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_304 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_304)) {
            tmp_assign_source_334 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_304,
                (PyObject *)moduledict_bip_utils,
                mod_consts[387],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_334 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_304, mod_consts[387]);
        }

        if (tmp_assign_source_334 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        PyObject *tmp_import_name_from_305;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_305 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_305)) {
            tmp_assign_source_335 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_305,
                (PyObject *)moduledict_bip_utils,
                mod_consts[388],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_335 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_305, mod_consts[388]);
        }

        if (tmp_assign_source_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        PyObject *tmp_import_name_from_306;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_306 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_306)) {
            tmp_assign_source_336 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_306,
                (PyObject *)moduledict_bip_utils,
                mod_consts[389],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_336 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_306, mod_consts[389]);
        }

        if (tmp_assign_source_336 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        PyObject *tmp_import_name_from_307;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_307 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_307)) {
            tmp_assign_source_337 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_307,
                (PyObject *)moduledict_bip_utils,
                mod_consts[390],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_337 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_307, mod_consts[390]);
        }

        if (tmp_assign_source_337 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        PyObject *tmp_import_name_from_308;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_308 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_308)) {
            tmp_assign_source_338 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_308,
                (PyObject *)moduledict_bip_utils,
                mod_consts[391],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_338 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_308, mod_consts[391]);
        }

        if (tmp_assign_source_338 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        PyObject *tmp_import_name_from_309;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_309 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_309)) {
            tmp_assign_source_339 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_309,
                (PyObject *)moduledict_bip_utils,
                mod_consts[392],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_339 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_309, mod_consts[392]);
        }

        if (tmp_assign_source_339 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        PyObject *tmp_import_name_from_310;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_310 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_310)) {
            tmp_assign_source_340 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_310,
                (PyObject *)moduledict_bip_utils,
                mod_consts[393],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_340 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_310, mod_consts[393]);
        }

        if (tmp_assign_source_340 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        PyObject *tmp_import_name_from_311;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_311 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_311)) {
            tmp_assign_source_341 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_311,
                (PyObject *)moduledict_bip_utils,
                mod_consts[394],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_341 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_311, mod_consts[394]);
        }

        if (tmp_assign_source_341 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_341);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_26__module);
    Py_DECREF(tmp_import_from_26__module);
    tmp_import_from_26__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_import_from_26__module);
    Py_DECREF(tmp_import_from_26__module);
    tmp_import_from_26__module = NULL;
    {
        PyObject *tmp_assign_source_342;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[395];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[396];
        tmp_level_value_36 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 144;
        tmp_assign_source_342 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_assign_source_342 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_27__module == NULL);
        tmp_import_from_27__module = tmp_assign_source_342;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_343;
        PyObject *tmp_import_name_from_312;
        CHECK_OBJECT(tmp_import_from_27__module);
        tmp_import_name_from_312 = tmp_import_from_27__module;
        if (PyModule_Check(tmp_import_name_from_312)) {
            tmp_assign_source_343 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_312,
                (PyObject *)moduledict_bip_utils,
                mod_consts[397],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_343 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_312, mod_consts[397]);
        }

        if (tmp_assign_source_343 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        PyObject *tmp_import_name_from_313;
        CHECK_OBJECT(tmp_import_from_27__module);
        tmp_import_name_from_313 = tmp_import_from_27__module;
        if (PyModule_Check(tmp_import_name_from_313)) {
            tmp_assign_source_344 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_313,
                (PyObject *)moduledict_bip_utils,
                mod_consts[398],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_344 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_313, mod_consts[398]);
        }

        if (tmp_assign_source_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_344);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_27__module);
    Py_DECREF(tmp_import_from_27__module);
    tmp_import_from_27__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_import_from_27__module);
    Py_DECREF(tmp_import_from_27__module);
    tmp_import_from_27__module = NULL;
    {
        PyObject *tmp_assign_source_345;
        PyObject *tmp_import_name_from_314;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[399];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[400];
        tmp_level_value_37 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 147;
        tmp_import_name_from_314 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_314)) {
            tmp_assign_source_345 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_314,
                (PyObject *)moduledict_bip_utils,
                mod_consts[401],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_345 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_314, mod_consts[401]);
        }

        Py_DECREF(tmp_import_name_from_314);
        if (tmp_assign_source_345 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[402];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[403];
        tmp_level_value_38 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 150;
        tmp_assign_source_346 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_assign_source_346 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_28__module == NULL);
        tmp_import_from_28__module = tmp_assign_source_346;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_347;
        PyObject *tmp_import_name_from_315;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_315 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_315)) {
            tmp_assign_source_347 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_315,
                (PyObject *)moduledict_bip_utils,
                mod_consts[404],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_347 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_315, mod_consts[404]);
        }

        if (tmp_assign_source_347 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        PyObject *tmp_import_name_from_316;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_316 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_316)) {
            tmp_assign_source_348 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_316,
                (PyObject *)moduledict_bip_utils,
                mod_consts[405],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_348 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_316, mod_consts[405]);
        }

        if (tmp_assign_source_348 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        PyObject *tmp_import_name_from_317;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_317 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_317)) {
            tmp_assign_source_349 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_317,
                (PyObject *)moduledict_bip_utils,
                mod_consts[406],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_349 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_317, mod_consts[406]);
        }

        if (tmp_assign_source_349 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        PyObject *tmp_import_name_from_318;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_318 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_318)) {
            tmp_assign_source_350 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_318,
                (PyObject *)moduledict_bip_utils,
                mod_consts[407],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_350 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_318, mod_consts[407]);
        }

        if (tmp_assign_source_350 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        PyObject *tmp_import_name_from_319;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_319 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_319)) {
            tmp_assign_source_351 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_319,
                (PyObject *)moduledict_bip_utils,
                mod_consts[408],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_351 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_319, mod_consts[408]);
        }

        if (tmp_assign_source_351 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        PyObject *tmp_import_name_from_320;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_320 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_320)) {
            tmp_assign_source_352 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_320,
                (PyObject *)moduledict_bip_utils,
                mod_consts[409],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_352 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_320, mod_consts[409]);
        }

        if (tmp_assign_source_352 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        PyObject *tmp_import_name_from_321;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_321 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_321)) {
            tmp_assign_source_353 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_321,
                (PyObject *)moduledict_bip_utils,
                mod_consts[410],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_353 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_321, mod_consts[410]);
        }

        if (tmp_assign_source_353 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        PyObject *tmp_import_name_from_322;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_322 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_322)) {
            tmp_assign_source_354 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_322,
                (PyObject *)moduledict_bip_utils,
                mod_consts[411],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_354 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_322, mod_consts[411]);
        }

        if (tmp_assign_source_354 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_354);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_28__module);
    Py_DECREF(tmp_import_from_28__module);
    tmp_import_from_28__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_import_from_28__module);
    Py_DECREF(tmp_import_from_28__module);
    tmp_import_from_28__module = NULL;
    {
        PyObject *tmp_assign_source_355;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[412];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[413];
        tmp_level_value_39 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 156;
        tmp_assign_source_355 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_assign_source_355 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_29__module == NULL);
        tmp_import_from_29__module = tmp_assign_source_355;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_356;
        PyObject *tmp_import_name_from_323;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_323 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_323)) {
            tmp_assign_source_356 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_323,
                (PyObject *)moduledict_bip_utils,
                mod_consts[414],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_356 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_323, mod_consts[414]);
        }

        if (tmp_assign_source_356 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        PyObject *tmp_import_name_from_324;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_324 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_324)) {
            tmp_assign_source_357 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_324,
                (PyObject *)moduledict_bip_utils,
                mod_consts[415],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_357 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_324, mod_consts[415]);
        }

        if (tmp_assign_source_357 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        PyObject *tmp_import_name_from_325;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_325 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_325)) {
            tmp_assign_source_358 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_325,
                (PyObject *)moduledict_bip_utils,
                mod_consts[416],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_358 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_325, mod_consts[416]);
        }

        if (tmp_assign_source_358 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        PyObject *tmp_import_name_from_326;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_326 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_326)) {
            tmp_assign_source_359 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_326,
                (PyObject *)moduledict_bip_utils,
                mod_consts[417],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_359 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_326, mod_consts[417]);
        }

        if (tmp_assign_source_359 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        PyObject *tmp_import_name_from_327;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_327 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_327)) {
            tmp_assign_source_360 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_327,
                (PyObject *)moduledict_bip_utils,
                mod_consts[418],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_360 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_327, mod_consts[418]);
        }

        if (tmp_assign_source_360 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        PyObject *tmp_import_name_from_328;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_328 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_328)) {
            tmp_assign_source_361 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_328,
                (PyObject *)moduledict_bip_utils,
                mod_consts[419],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_361 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_328, mod_consts[419]);
        }

        if (tmp_assign_source_361 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        PyObject *tmp_import_name_from_329;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_329 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_329)) {
            tmp_assign_source_362 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_329,
                (PyObject *)moduledict_bip_utils,
                mod_consts[420],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_362 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_329, mod_consts[420]);
        }

        if (tmp_assign_source_362 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        PyObject *tmp_import_name_from_330;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_330 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_330)) {
            tmp_assign_source_363 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_330,
                (PyObject *)moduledict_bip_utils,
                mod_consts[421],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_363 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_330, mod_consts[421]);
        }

        if (tmp_assign_source_363 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        PyObject *tmp_import_name_from_331;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_331 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_331)) {
            tmp_assign_source_364 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_331,
                (PyObject *)moduledict_bip_utils,
                mod_consts[422],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_364 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_331, mod_consts[422]);
        }

        if (tmp_assign_source_364 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        PyObject *tmp_import_name_from_332;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_332 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_332)) {
            tmp_assign_source_365 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_332,
                (PyObject *)moduledict_bip_utils,
                mod_consts[423],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_365 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_332, mod_consts[423]);
        }

        if (tmp_assign_source_365 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        PyObject *tmp_import_name_from_333;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_333 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_333)) {
            tmp_assign_source_366 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_333,
                (PyObject *)moduledict_bip_utils,
                mod_consts[424],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_366 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_333, mod_consts[424]);
        }

        if (tmp_assign_source_366 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        PyObject *tmp_import_name_from_334;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_334 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_334)) {
            tmp_assign_source_367 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_334,
                (PyObject *)moduledict_bip_utils,
                mod_consts[425],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_367 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_334, mod_consts[425]);
        }

        if (tmp_assign_source_367 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        PyObject *tmp_import_name_from_335;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_335 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_335)) {
            tmp_assign_source_368 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_335,
                (PyObject *)moduledict_bip_utils,
                mod_consts[426],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_368 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_335, mod_consts[426]);
        }

        if (tmp_assign_source_368 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        PyObject *tmp_import_name_from_336;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_336 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_336)) {
            tmp_assign_source_369 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_336,
                (PyObject *)moduledict_bip_utils,
                mod_consts[427],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_369 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_336, mod_consts[427]);
        }

        if (tmp_assign_source_369 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        PyObject *tmp_import_name_from_337;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_337 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_337)) {
            tmp_assign_source_370 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_337,
                (PyObject *)moduledict_bip_utils,
                mod_consts[428],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_370 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_337, mod_consts[428]);
        }

        if (tmp_assign_source_370 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        PyObject *tmp_import_name_from_338;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_338 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_338)) {
            tmp_assign_source_371 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_338,
                (PyObject *)moduledict_bip_utils,
                mod_consts[429],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_371 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_338, mod_consts[429]);
        }

        if (tmp_assign_source_371 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        PyObject *tmp_import_name_from_339;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_339 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_339)) {
            tmp_assign_source_372 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_339,
                (PyObject *)moduledict_bip_utils,
                mod_consts[430],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_372 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_339, mod_consts[430]);
        }

        if (tmp_assign_source_372 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        PyObject *tmp_import_name_from_340;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_340 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_340)) {
            tmp_assign_source_373 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_340,
                (PyObject *)moduledict_bip_utils,
                mod_consts[431],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_373 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_340, mod_consts[431]);
        }

        if (tmp_assign_source_373 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        PyObject *tmp_import_name_from_341;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_341 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_341)) {
            tmp_assign_source_374 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_341,
                (PyObject *)moduledict_bip_utils,
                mod_consts[432],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_374 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_341, mod_consts[432]);
        }

        if (tmp_assign_source_374 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        PyObject *tmp_import_name_from_342;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_342 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_342)) {
            tmp_assign_source_375 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_342,
                (PyObject *)moduledict_bip_utils,
                mod_consts[433],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_375 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_342, mod_consts[433]);
        }

        if (tmp_assign_source_375 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        PyObject *tmp_import_name_from_343;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_343 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_343)) {
            tmp_assign_source_376 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_343,
                (PyObject *)moduledict_bip_utils,
                mod_consts[434],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_376 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_343, mod_consts[434]);
        }

        if (tmp_assign_source_376 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_376);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_29__module);
    Py_DECREF(tmp_import_from_29__module);
    tmp_import_from_29__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_import_from_29__module);
    Py_DECREF(tmp_import_from_29__module);
    tmp_import_from_29__module = NULL;
    {
        PyObject *tmp_assign_source_377;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[435];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[436];
        tmp_level_value_40 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 161;
        tmp_assign_source_377 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_assign_source_377 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_30__module == NULL);
        tmp_import_from_30__module = tmp_assign_source_377;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_378;
        PyObject *tmp_import_name_from_344;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_344 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_344)) {
            tmp_assign_source_378 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_344,
                (PyObject *)moduledict_bip_utils,
                mod_consts[437],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_378 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_344, mod_consts[437]);
        }

        if (tmp_assign_source_378 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        PyObject *tmp_import_name_from_345;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_345 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_345)) {
            tmp_assign_source_379 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_345,
                (PyObject *)moduledict_bip_utils,
                mod_consts[438],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_379 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_345, mod_consts[438]);
        }

        if (tmp_assign_source_379 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        PyObject *tmp_import_name_from_346;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_346 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_346)) {
            tmp_assign_source_380 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_346,
                (PyObject *)moduledict_bip_utils,
                mod_consts[439],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_380 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_346, mod_consts[439]);
        }

        if (tmp_assign_source_380 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        PyObject *tmp_import_name_from_347;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_347 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_347)) {
            tmp_assign_source_381 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_347,
                (PyObject *)moduledict_bip_utils,
                mod_consts[440],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_381 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_347, mod_consts[440]);
        }

        if (tmp_assign_source_381 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        PyObject *tmp_import_name_from_348;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_348 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_348)) {
            tmp_assign_source_382 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_348,
                (PyObject *)moduledict_bip_utils,
                mod_consts[441],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_382 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_348, mod_consts[441]);
        }

        if (tmp_assign_source_382 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        PyObject *tmp_import_name_from_349;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_349 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_349)) {
            tmp_assign_source_383 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_349,
                (PyObject *)moduledict_bip_utils,
                mod_consts[442],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_383 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_349, mod_consts[442]);
        }

        if (tmp_assign_source_383 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_383);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_30__module);
    Py_DECREF(tmp_import_from_30__module);
    tmp_import_from_30__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_import_from_30__module);
    Py_DECREF(tmp_import_from_30__module);
    tmp_import_from_30__module = NULL;
    {
        PyObject *tmp_assign_source_384;
        PyObject *tmp_import_name_from_350;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[443];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[444];
        tmp_level_value_41 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 162;
        tmp_import_name_from_350 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_350 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_350)) {
            tmp_assign_source_384 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_350,
                (PyObject *)moduledict_bip_utils,
                mod_consts[445],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_384 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_350, mod_consts[445]);
        }

        Py_DECREF(tmp_import_name_from_350);
        if (tmp_assign_source_384 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[446];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_bip_utils;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[447];
        tmp_level_value_42 = mod_consts[15];
        frame_216dcfdddbfa342b29f627901da8f81a->m_frame.f_lineno = 165;
        tmp_assign_source_385 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_assign_source_385 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_31__module == NULL);
        tmp_import_from_31__module = tmp_assign_source_385;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_386;
        PyObject *tmp_import_name_from_351;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_351 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_351)) {
            tmp_assign_source_386 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_351,
                (PyObject *)moduledict_bip_utils,
                mod_consts[448],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_386 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_351, mod_consts[448]);
        }

        if (tmp_assign_source_386 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        PyObject *tmp_import_name_from_352;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_352 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_352)) {
            tmp_assign_source_387 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_352,
                (PyObject *)moduledict_bip_utils,
                mod_consts[449],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_387 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_352, mod_consts[449]);
        }

        if (tmp_assign_source_387 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        PyObject *tmp_import_name_from_353;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_353 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_353)) {
            tmp_assign_source_388 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_353,
                (PyObject *)moduledict_bip_utils,
                mod_consts[450],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_388 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_353, mod_consts[450]);
        }

        if (tmp_assign_source_388 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_388);
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_31__module);
    Py_DECREF(tmp_import_from_31__module);
    tmp_import_from_31__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_216dcfdddbfa342b29f627901da8f81a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_216dcfdddbfa342b29f627901da8f81a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_216dcfdddbfa342b29f627901da8f81a, exception_lineno);
    }



    assertFrameObject(frame_216dcfdddbfa342b29f627901da8f81a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_31__module);
    Py_DECREF(tmp_import_from_31__module);
    tmp_import_from_31__module = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("bip_utils", false);

    Py_INCREF(module_bip_utils);
    return module_bip_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("bip_utils", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
