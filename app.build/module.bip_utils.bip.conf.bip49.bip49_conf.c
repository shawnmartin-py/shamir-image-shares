/* Generated code for Python module 'bip_utils.bip.conf.bip49.bip49_conf'
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

/* The "module_bip_utils$bip$conf$bip49$bip49_conf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bip_utils$bip$conf$bip49$bip49_conf;
PyDictObject *moduledict_bip_utils$bip$conf$bip49$bip49_conf;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[90];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[90];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("bip_utils.bip.conf.bip49.bip49_conf"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 90; i++) {
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
void checkModuleConstants_bip_utils$bip$conf$bip49$bip49_conf(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 90; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bbe337dd226637aeb1ed294597ee1d25;
static PyCodeObject *codeobj_2665758e8036b2c19f7c070840806915;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[86]); CHECK_OBJECT(module_filename_obj);
    codeobj_bbe337dd226637aeb1ed294597ee1d25 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[87], mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_2665758e8036b2c19f7c070840806915 = MAKE_CODE_OBJECT(module_filename_obj, 39, 0, mod_consts[36], mod_consts[36], mod_consts[88], NULL, 0, 0, 0);
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

function_impl_code functable_bip_utils$bip$conf$bip49$bip49_conf[] = {

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

    function_impl_code *current = functable_bip_utils$bip$conf$bip49$bip49_conf;
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

    if (offset > sizeof(functable_bip_utils$bip$conf$bip49$bip49_conf) || offset < 0) {
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
        functable_bip_utils$bip$conf$bip49$bip49_conf[offset],
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
        module_bip_utils$bip$conf$bip49$bip49_conf,
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
PyObject *modulecode_bip_utils$bip$conf$bip49$bip49_conf(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("bip_utils.bip.conf.bip49.bip49_conf");

    // Store the module for future use.
    module_bip_utils$bip$conf$bip49$bip49_conf = module;

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
        PRINT_STRING("bip_utils.bip.conf.bip49.bip49_conf: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("bip_utils.bip.conf.bip49.bip49_conf: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initbip_utils$bip$conf$bip49$bip49_conf\n");

    moduledict_bip_utils$bip$conf$bip49$bip49_conf = MODULE_DICT(module_bip_utils$bip$conf$bip49$bip49_conf);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_bip_utils$bip$conf$bip49$bip49_conf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_bip_utils$bip$conf$bip49$bip49_conf,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[89]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_bip_utils$bip$conf$bip49$bip49_conf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_bip_utils$bip$conf$bip49$bip49_conf);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_bip_utils$bip$conf$bip49$bip49_conf);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_bbe337dd226637aeb1ed294597ee1d25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2665758e8036b2c19f7c070840806915_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_bbe337dd226637aeb1ed294597ee1d25 = MAKE_MODULE_FRAME(codeobj_bbe337dd226637aeb1ed294597ee1d25, module_bip_utils$bip$conf$bip49$bip49_conf);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bbe337dd226637aeb1ed294597ee1d25);
    assert(Py_REFCNT(frame_bbe337dd226637aeb1ed294597ee1d25) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[9];
        tmp_level_value_1 = mod_consts[10];
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[11],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[11]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[12],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[12]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[13];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[14];
        tmp_level_value_2 = mod_consts[10];
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 25;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[15],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[15]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[16],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[16]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[17];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[18];
        tmp_level_value_3 = mod_consts[10];
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 26;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_5 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[19],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[19]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[20],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[20]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[21],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[21]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[22],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[22]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[23];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[24];
        tmp_level_value_4 = mod_consts[10];
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 27;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[25],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[26];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[27];
        tmp_level_value_5 = mod_consts[10];
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 28;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_bip_utils$bip$conf$bip49$bip49_conf,
                mod_consts[28],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 32;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_1, mod_consts[29]);

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_18);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[30];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 35;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[31]);

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[32];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_2665758e8036b2c19f7c070840806915_2 = MAKE_CLASS_FRAME(tstate, codeobj_2665758e8036b2c19f7c070840806915, module_bip_utils$bip$conf$bip49$bip49_conf, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2665758e8036b2c19f7c070840806915_2);
        assert(Py_REFCNT(frame_2665758e8036b2c19f7c070840806915_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_kw_call_value_2_1;
            PyObject *tmp_kw_call_value_3_1;
            PyObject *tmp_kw_call_value_4_1;
            PyObject *tmp_kw_call_value_5_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_kw_call_value_6_1;
            PyObject *tmp_kw_call_value_7_1;
            PyObject *tmp_kw_call_value_8_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_4;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 44;
            tmp_kw_call_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[39]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
            if (tmp_kw_call_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_1 = Py_False;
            tmp_kw_call_value_3_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_1 == NULL)) {
                tmp_kw_call_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_1 == NULL)) {
                tmp_kw_call_value_4_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 49;
            tmp_kw_call_value_5_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_2,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_kw_call_value_5_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_1 == NULL)) {
                tmp_kw_call_value_6_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);
                Py_DECREF(tmp_kw_call_value_5_1);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_1 == NULL)) {
                tmp_kw_call_value_7_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);
                Py_DECREF(tmp_kw_call_value_5_1);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = mod_consts[43];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);
                Py_DECREF(tmp_kw_call_value_5_1);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);
                Py_DECREF(tmp_kw_call_value_5_1);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 53;
            tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_3,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_3);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_1);
                Py_DECREF(tmp_kw_call_value_1_1);
                Py_DECREF(tmp_kw_call_value_5_1);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 43;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_3 == NULL)) {
                tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[38];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_kw_call_value_2_2;
            PyObject *tmp_kw_call_value_3_2;
            PyObject *tmp_kw_call_value_4_2;
            PyObject *tmp_kw_call_value_5_2;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_kw_call_value_6_2;
            PyObject *tmp_kw_call_value_7_2;
            PyObject *tmp_kw_call_value_8_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_expression_value_8;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[46]);
            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 58;
            tmp_kw_call_value_0_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[39]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[47]);
            if (tmp_kw_call_value_1_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_2 = Py_True;
            tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
                tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);

                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_2 == NULL)) {
                tmp_kw_call_value_4_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);

                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[46]);
            if (tmp_called_instance_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 63;
            tmp_kw_call_value_5_2 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_5,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_5);
            if (tmp_kw_call_value_5_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_2 == NULL)) {
                tmp_kw_call_value_6_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);
                Py_DECREF(tmp_kw_call_value_5_2);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_2 == NULL)) {
                tmp_kw_call_value_7_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);
                Py_DECREF(tmp_kw_call_value_5_2);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[43];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);
                Py_DECREF(tmp_kw_call_value_5_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[46]);
            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);
                Py_DECREF(tmp_kw_call_value_5_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 67;
            tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_6,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_6);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);
                Py_DECREF(tmp_kw_call_value_1_2);
                Py_DECREF(tmp_kw_call_value_5_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 57;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_5_2);
            Py_DECREF(tmp_kw_call_value_8_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_4 == NULL)) {
                tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[46];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_kw_call_value_2_3;
            PyObject *tmp_kw_call_value_3_3;
            PyObject *tmp_kw_call_value_4_3;
            PyObject *tmp_kw_call_value_5_3;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_kw_call_value_6_3;
            PyObject *tmp_kw_call_value_7_3;
            PyObject *tmp_kw_call_value_8_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_kw_call_value_9_1;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[48]);
            if (tmp_called_instance_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 73;
            tmp_kw_call_value_0_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[39]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_kw_call_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[49]);
            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_3 = Py_False;
            tmp_kw_call_value_3_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_3 == NULL)) {
                tmp_kw_call_value_3_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_3 == NULL)) {
                tmp_kw_call_value_4_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[48]);
            if (tmp_called_instance_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 78;
            tmp_kw_call_value_5_3 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_8,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_kw_call_value_5_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_3 == NULL)) {
                tmp_kw_call_value_6_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);

                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_3 == NULL)) {
                tmp_kw_call_value_7_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[50];
            tmp_dict_key_4 = mod_consts[43];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[48]);
            if (tmp_called_instance_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 83;
            tmp_dict_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_9,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_10;
                PyObject *tmp_expression_value_13;
                tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[52];
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[48]);
                if (tmp_called_instance_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 84;
                tmp_dict_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_10,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_10);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_kw_call_value_0_3);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_5_3);
            Py_DECREF(tmp_dict_value_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_kw_call_value_8_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_called_instance_11;
                PyObject *tmp_expression_value_14;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[54];
                tmp_dict_key_5 = mod_consts[43];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[48]);
                if (tmp_called_instance_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 87;
                tmp_dict_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_11,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_11);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_3 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_kw_call_value_0_3);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_5_3);
            Py_DECREF(tmp_kw_call_value_8_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_kw_call_value_9_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_1 == NULL)) {
                tmp_kw_call_value_9_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_3);
                Py_DECREF(tmp_kw_call_value_1_3);
                Py_DECREF(tmp_kw_call_value_5_3);
                Py_DECREF(tmp_kw_call_value_8_3);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 72;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_3);
            Py_DECREF(tmp_kw_call_value_1_3);
            Py_DECREF(tmp_kw_call_value_5_3);
            Py_DECREF(tmp_kw_call_value_8_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_5 == NULL)) {
                tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_5 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_5 = mod_consts[48];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_kw_call_value_2_4;
            PyObject *tmp_kw_call_value_3_4;
            PyObject *tmp_kw_call_value_4_4;
            PyObject *tmp_kw_call_value_5_4;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_kw_call_value_6_4;
            PyObject *tmp_kw_call_value_7_4;
            PyObject *tmp_kw_call_value_8_4;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_kw_call_value_9_2;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[57]);
            if (tmp_called_instance_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 94;
            tmp_kw_call_value_0_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[39]);
            Py_DECREF(tmp_called_instance_12);
            if (tmp_kw_call_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[47]);
            if (tmp_kw_call_value_1_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_4 = Py_True;
            tmp_kw_call_value_3_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_4 == NULL)) {
                tmp_kw_call_value_3_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_4 == NULL)) {
                tmp_kw_call_value_4_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[57]);
            if (tmp_called_instance_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 99;
            tmp_kw_call_value_5_4 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_13,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_13);
            if (tmp_kw_call_value_5_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_4 == NULL)) {
                tmp_kw_call_value_6_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);

                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_4 == NULL)) {
                tmp_kw_call_value_7_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[50];
            tmp_dict_key_7 = mod_consts[43];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[57]);
            if (tmp_called_instance_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 104;
            tmp_dict_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_14,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_14);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_15;
                PyObject *tmp_expression_value_19;
                tmp_res = PyDict_SetItem(tmp_dict_value_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[52];
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[57]);
                if (tmp_called_instance_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 105;
                tmp_dict_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_15,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_15);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_kw_call_value_0_4);
            Py_DECREF(tmp_kw_call_value_1_4);
            Py_DECREF(tmp_kw_call_value_5_4);
            Py_DECREF(tmp_dict_value_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_kw_call_value_8_4 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_called_instance_16;
                PyObject *tmp_expression_value_20;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_4, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[54];
                tmp_dict_key_8 = mod_consts[43];
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[57]);
                if (tmp_called_instance_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 108;
                tmp_dict_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_16,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_16);
                if (tmp_dict_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_6 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_6, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_4, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_kw_call_value_0_4);
            Py_DECREF(tmp_kw_call_value_1_4);
            Py_DECREF(tmp_kw_call_value_5_4);
            Py_DECREF(tmp_kw_call_value_8_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            tmp_kw_call_value_9_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_2 == NULL)) {
                tmp_kw_call_value_9_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);
                Py_DECREF(tmp_kw_call_value_1_4);
                Py_DECREF(tmp_kw_call_value_5_4);
                Py_DECREF(tmp_kw_call_value_8_4);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 93;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_4);
            Py_DECREF(tmp_kw_call_value_1_4);
            Py_DECREF(tmp_kw_call_value_5_4);
            Py_DECREF(tmp_kw_call_value_8_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_6 == NULL)) {
                tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_6 = mod_consts[57];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_kw_call_value_2_5;
            PyObject *tmp_kw_call_value_3_5;
            PyObject *tmp_kw_call_value_4_5;
            PyObject *tmp_kw_call_value_5_5;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_kw_call_value_6_5;
            PyObject *tmp_kw_call_value_7_5;
            PyObject *tmp_kw_call_value_8_5;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_kw_call_value_9_3;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[58]);
            if (tmp_called_instance_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 116;
            tmp_kw_call_value_0_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[39]);
            Py_DECREF(tmp_called_instance_17);
            if (tmp_kw_call_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[49]);
            if (tmp_kw_call_value_1_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_5 = Py_False;
            tmp_kw_call_value_3_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_5 == NULL)) {
                tmp_kw_call_value_3_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_5 == NULL)) {
                tmp_kw_call_value_4_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[58]);
            if (tmp_called_instance_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 121;
            tmp_kw_call_value_5_5 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_18,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_18);
            if (tmp_kw_call_value_5_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_5 == NULL)) {
                tmp_kw_call_value_6_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_5 == NULL)) {
                tmp_kw_call_value_7_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_9 = mod_consts[50];
            tmp_dict_key_10 = mod_consts[43];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[58]);
            if (tmp_called_instance_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 126;
            tmp_dict_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_19,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_9 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_20;
                PyObject *tmp_expression_value_25;
                tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[52];
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_instance_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[58]);
                if (tmp_called_instance_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 127;
                tmp_dict_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_20,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_20);
                if (tmp_dict_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_5_5);
            Py_DECREF(tmp_dict_value_9);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_kw_call_value_8_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_11;
                PyObject *tmp_dict_value_11;
                PyObject *tmp_called_instance_21;
                PyObject *tmp_expression_value_26;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[54];
                tmp_dict_key_11 = mod_consts[43];
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[58]);
                if (tmp_called_instance_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 130;
                tmp_dict_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_21,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_21);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_9 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_5, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_5_5);
            Py_DECREF(tmp_kw_call_value_8_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            tmp_kw_call_value_9_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_3 == NULL)) {
                tmp_kw_call_value_9_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_5);
                Py_DECREF(tmp_kw_call_value_1_5);
                Py_DECREF(tmp_kw_call_value_5_5);
                Py_DECREF(tmp_kw_call_value_8_5);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 115;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5, tmp_kw_call_value_9_3};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_kw_call_value_1_5);
            Py_DECREF(tmp_kw_call_value_5_5);
            Py_DECREF(tmp_kw_call_value_8_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_7 == NULL)) {
                tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_7 = mod_consts[58];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_kw_call_value_2_6;
            PyObject *tmp_kw_call_value_3_6;
            PyObject *tmp_kw_call_value_4_6;
            PyObject *tmp_kw_call_value_5_6;
            PyObject *tmp_called_instance_23;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_kw_call_value_6_6;
            PyObject *tmp_kw_call_value_7_6;
            PyObject *tmp_kw_call_value_8_6;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_kw_call_value_9_4;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[59]);
            if (tmp_called_instance_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 137;
            tmp_kw_call_value_0_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[39]);
            Py_DECREF(tmp_called_instance_22);
            if (tmp_kw_call_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[47]);
            if (tmp_kw_call_value_1_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_6 = Py_True;
            tmp_kw_call_value_3_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_6 == NULL)) {
                tmp_kw_call_value_3_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_6 == NULL)) {
                tmp_kw_call_value_4_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[59]);
            if (tmp_called_instance_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 142;
            tmp_kw_call_value_5_6 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_23,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_kw_call_value_5_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_6 == NULL)) {
                tmp_kw_call_value_6_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);

                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_6 == NULL)) {
                tmp_kw_call_value_7_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_12 = mod_consts[50];
            tmp_dict_key_13 = mod_consts[43];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[59]);
            if (tmp_called_instance_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 147;
            tmp_dict_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_24,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_24);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_12 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_25;
                PyObject *tmp_expression_value_31;
                tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[52];
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[59]);
                if (tmp_called_instance_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 148;
                tmp_dict_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_25,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_25);
                if (tmp_dict_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_kw_call_value_0_6);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_5_6);
            Py_DECREF(tmp_dict_value_12);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            tmp_kw_call_value_8_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_14;
                PyObject *tmp_dict_value_14;
                PyObject *tmp_called_instance_26;
                PyObject *tmp_expression_value_32;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_6, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[54];
                tmp_dict_key_14 = mod_consts[43];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[59]);
                if (tmp_called_instance_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 151;
                tmp_dict_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_26,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_26);
                if (tmp_dict_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_12 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_6, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_kw_call_value_0_6);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_5_6);
            Py_DECREF(tmp_kw_call_value_8_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            tmp_kw_call_value_9_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_4 == NULL)) {
                tmp_kw_call_value_9_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_6);
                Py_DECREF(tmp_kw_call_value_1_6);
                Py_DECREF(tmp_kw_call_value_5_6);
                Py_DECREF(tmp_kw_call_value_8_6);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 136;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6, tmp_kw_call_value_6_6, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6, tmp_kw_call_value_9_4};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_6);
            Py_DECREF(tmp_kw_call_value_1_6);
            Py_DECREF(tmp_kw_call_value_5_6);
            Py_DECREF(tmp_kw_call_value_8_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_8 == NULL)) {
                tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_8 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_8 = mod_consts[59];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_kw_call_value_2_7;
            PyObject *tmp_kw_call_value_3_7;
            PyObject *tmp_kw_call_value_4_7;
            PyObject *tmp_kw_call_value_5_7;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_kw_call_value_6_7;
            PyObject *tmp_kw_call_value_7_7;
            PyObject *tmp_kw_call_value_8_7;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_expression_value_36;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[60]);
            if (tmp_called_instance_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 159;
            tmp_kw_call_value_0_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[39]);
            Py_DECREF(tmp_called_instance_27);
            if (tmp_kw_call_value_0_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[61]);
            if (tmp_kw_call_value_1_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_7 = Py_False;
            tmp_kw_call_value_3_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_7 == NULL)) {
                tmp_kw_call_value_3_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);

                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_7 == NULL)) {
                tmp_kw_call_value_4_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[60]);
            if (tmp_called_instance_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 164;
            tmp_kw_call_value_5_7 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_28,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_28);
            if (tmp_kw_call_value_5_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_7 == NULL)) {
                tmp_kw_call_value_6_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);
                Py_DECREF(tmp_kw_call_value_5_7);

                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_7 == NULL)) {
                tmp_kw_call_value_7_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);
                Py_DECREF(tmp_kw_call_value_5_7);

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_15 = mod_consts[43];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);
                Py_DECREF(tmp_kw_call_value_5_7);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[60]);
            if (tmp_called_instance_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);
                Py_DECREF(tmp_kw_call_value_5_7);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 168;
            tmp_dict_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_29,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_29);
            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_7);
                Py_DECREF(tmp_kw_call_value_1_7);
                Py_DECREF(tmp_kw_call_value_5_7);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_7, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 158;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7, tmp_kw_call_value_6_7, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_7);
            Py_DECREF(tmp_kw_call_value_1_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_kw_call_value_8_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_9 == NULL)) {
                tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_9 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_9 = mod_consts[60];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_kw_call_value_2_8;
            PyObject *tmp_kw_call_value_3_8;
            PyObject *tmp_kw_call_value_4_8;
            PyObject *tmp_kw_call_value_5_8;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_kw_call_value_6_8;
            PyObject *tmp_kw_call_value_7_8;
            PyObject *tmp_kw_call_value_8_8;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_expression_value_40;
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[62]);
            if (tmp_called_instance_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 173;
            tmp_kw_call_value_0_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[39]);
            Py_DECREF(tmp_called_instance_30);
            if (tmp_kw_call_value_0_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[47]);
            if (tmp_kw_call_value_1_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_8 = Py_True;
            tmp_kw_call_value_3_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_8 == NULL)) {
                tmp_kw_call_value_3_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);

                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_8 == NULL)) {
                tmp_kw_call_value_4_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[62]);
            if (tmp_called_instance_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 178;
            tmp_kw_call_value_5_8 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_31,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_31);
            if (tmp_kw_call_value_5_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_8 == NULL)) {
                tmp_kw_call_value_6_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);
                Py_DECREF(tmp_kw_call_value_5_8);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_8 == NULL)) {
                tmp_kw_call_value_7_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);
                Py_DECREF(tmp_kw_call_value_5_8);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[43];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);
                Py_DECREF(tmp_kw_call_value_5_8);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[62]);
            if (tmp_called_instance_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);
                Py_DECREF(tmp_kw_call_value_5_8);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 182;
            tmp_dict_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_32,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_32);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);
                Py_DECREF(tmp_kw_call_value_1_8);
                Py_DECREF(tmp_kw_call_value_5_8);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_8, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 172;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8, tmp_kw_call_value_6_8, tmp_kw_call_value_7_8, tmp_kw_call_value_8_8};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_10, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_8);
            Py_DECREF(tmp_kw_call_value_1_8);
            Py_DECREF(tmp_kw_call_value_5_8);
            Py_DECREF(tmp_kw_call_value_8_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_10 == NULL)) {
                tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_10 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_10 = mod_consts[62];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_kw_call_value_0_9;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_kw_call_value_1_9;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_kw_call_value_2_9;
            PyObject *tmp_kw_call_value_3_9;
            PyObject *tmp_kw_call_value_4_9;
            PyObject *tmp_kw_call_value_5_9;
            PyObject *tmp_called_instance_34;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_kw_call_value_6_9;
            PyObject *tmp_kw_call_value_7_9;
            PyObject *tmp_kw_call_value_8_9;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_called_instance_35;
            PyObject *tmp_expression_value_44;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[63]);
            if (tmp_called_instance_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 188;
            tmp_kw_call_value_0_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_33, mod_consts[39]);
            Py_DECREF(tmp_called_instance_33);
            if (tmp_kw_call_value_0_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[64]);
            if (tmp_kw_call_value_1_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_9 = Py_False;
            tmp_kw_call_value_3_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_9 == NULL)) {
                tmp_kw_call_value_3_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_9 == NULL)) {
                tmp_kw_call_value_4_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);

                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);

                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[63]);
            if (tmp_called_instance_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);

                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 193;
            tmp_kw_call_value_5_9 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_34,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_34);
            if (tmp_kw_call_value_5_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);

                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_9 == NULL)) {
                tmp_kw_call_value_6_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);
                Py_DECREF(tmp_kw_call_value_5_9);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_9 == NULL)) {
                tmp_kw_call_value_7_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);
                Py_DECREF(tmp_kw_call_value_5_9);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[43];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);
                Py_DECREF(tmp_kw_call_value_5_9);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[63]);
            if (tmp_called_instance_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);
                Py_DECREF(tmp_kw_call_value_5_9);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 197;
            tmp_dict_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_35,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_35);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);
                Py_DECREF(tmp_kw_call_value_1_9);
                Py_DECREF(tmp_kw_call_value_5_9);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_9, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 187;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_9, tmp_kw_call_value_7_9, tmp_kw_call_value_8_9};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_9);
            Py_DECREF(tmp_kw_call_value_1_9);
            Py_DECREF(tmp_kw_call_value_5_9);
            Py_DECREF(tmp_kw_call_value_8_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_11 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_11 = mod_consts[63];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_kw_call_value_1_10;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_kw_call_value_2_10;
            PyObject *tmp_kw_call_value_3_10;
            PyObject *tmp_kw_call_value_4_10;
            PyObject *tmp_kw_call_value_5_10;
            PyObject *tmp_called_instance_37;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_kw_call_value_6_10;
            PyObject *tmp_kw_call_value_7_10;
            PyObject *tmp_kw_call_value_8_10;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_called_instance_38;
            PyObject *tmp_expression_value_48;
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[65]);
            if (tmp_called_instance_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 202;
            tmp_kw_call_value_0_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_36, mod_consts[39]);
            Py_DECREF(tmp_called_instance_36);
            if (tmp_kw_call_value_0_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[47]);
            if (tmp_kw_call_value_1_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_10 = Py_True;
            tmp_kw_call_value_3_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_10 == NULL)) {
                tmp_kw_call_value_3_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_10 == NULL)) {
                tmp_kw_call_value_4_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[65]);
            if (tmp_called_instance_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 207;
            tmp_kw_call_value_5_10 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_37,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_37);
            if (tmp_kw_call_value_5_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_10 == NULL)) {
                tmp_kw_call_value_6_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);
                Py_DECREF(tmp_kw_call_value_5_10);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_10 == NULL)) {
                tmp_kw_call_value_7_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);
                Py_DECREF(tmp_kw_call_value_5_10);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_18 = mod_consts[43];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);
                Py_DECREF(tmp_kw_call_value_5_10);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[65]);
            if (tmp_called_instance_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);
                Py_DECREF(tmp_kw_call_value_5_10);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 211;
            tmp_dict_value_18 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_38,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_38);
            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_10);
                Py_DECREF(tmp_kw_call_value_1_10);
                Py_DECREF(tmp_kw_call_value_5_10);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_10, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 201;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10, tmp_kw_call_value_6_10, tmp_kw_call_value_7_10, tmp_kw_call_value_8_10};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_10);
            Py_DECREF(tmp_kw_call_value_1_10);
            Py_DECREF(tmp_kw_call_value_5_10);
            Py_DECREF(tmp_kw_call_value_8_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_12 == NULL)) {
                tmp_ass_subvalue_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_12 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_12 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_kw_call_value_1_11;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_kw_call_value_2_11;
            PyObject *tmp_kw_call_value_3_11;
            PyObject *tmp_kw_call_value_4_11;
            PyObject *tmp_called_value_14;
            PyObject *tmp_kw_call_value_5_11;
            PyObject *tmp_called_instance_40;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_kw_call_value_6_11;
            PyObject *tmp_kw_call_value_7_11;
            PyObject *tmp_kw_call_value_8_11;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_called_instance_41;
            PyObject *tmp_expression_value_52;
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[66]);
            if (tmp_called_instance_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 217;
            tmp_kw_call_value_0_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_39, mod_consts[39]);
            Py_DECREF(tmp_called_instance_39);
            if (tmp_kw_call_value_0_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[67]);
            if (tmp_kw_call_value_1_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_11 = Py_False;
            tmp_kw_call_value_3_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_11 == NULL)) {
                tmp_kw_call_value_3_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);

                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);

                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 221;
            tmp_kw_call_value_4_11 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_14, mod_consts[68]);

            if (tmp_kw_call_value_4_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);

                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[66]);
            if (tmp_called_instance_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 223;
            tmp_kw_call_value_5_11 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_40,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_40);
            if (tmp_kw_call_value_5_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_11 == NULL)) {
                tmp_kw_call_value_6_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);
                Py_DECREF(tmp_kw_call_value_5_11);

                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_11 == NULL)) {
                tmp_kw_call_value_7_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);
                Py_DECREF(tmp_kw_call_value_5_11);

                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[43];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);
                Py_DECREF(tmp_kw_call_value_5_11);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[66]);
            if (tmp_called_instance_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);
                Py_DECREF(tmp_kw_call_value_5_11);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 227;
            tmp_dict_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_41,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_41);
            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);
                Py_DECREF(tmp_kw_call_value_1_11);
                Py_DECREF(tmp_kw_call_value_4_11);
                Py_DECREF(tmp_kw_call_value_5_11);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_11, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 216;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11, tmp_kw_call_value_6_11, tmp_kw_call_value_7_11, tmp_kw_call_value_8_11};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_11);
            Py_DECREF(tmp_kw_call_value_1_11);
            Py_DECREF(tmp_kw_call_value_4_11);
            Py_DECREF(tmp_kw_call_value_5_11);
            Py_DECREF(tmp_kw_call_value_8_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_ass_subvalue_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_13 == NULL)) {
                tmp_ass_subvalue_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_13 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_13 = mod_consts[66];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_kw_call_value_0_12;
            PyObject *tmp_called_instance_42;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_kw_call_value_1_12;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_2_12;
            PyObject *tmp_kw_call_value_3_12;
            PyObject *tmp_kw_call_value_4_12;
            PyObject *tmp_called_value_16;
            PyObject *tmp_kw_call_value_5_12;
            PyObject *tmp_called_instance_43;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_kw_call_value_6_12;
            PyObject *tmp_kw_call_value_7_12;
            PyObject *tmp_kw_call_value_8_12;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_called_instance_44;
            PyObject *tmp_expression_value_56;
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[69]);
            if (tmp_called_instance_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 232;
            tmp_kw_call_value_0_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_42, mod_consts[39]);
            Py_DECREF(tmp_called_instance_42);
            if (tmp_kw_call_value_0_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);

                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[47]);
            if (tmp_kw_call_value_1_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);

                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_12 = Py_True;
            tmp_kw_call_value_3_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_12 == NULL)) {
                tmp_kw_call_value_3_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);

                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);

                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 236;
            tmp_kw_call_value_4_12 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_16, mod_consts[70]);

            if (tmp_kw_call_value_4_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);

                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);

                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[69]);
            if (tmp_called_instance_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);

                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 238;
            tmp_kw_call_value_5_12 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_43,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_43);
            if (tmp_kw_call_value_5_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);

                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_12 == NULL)) {
                tmp_kw_call_value_6_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);
                Py_DECREF(tmp_kw_call_value_5_12);

                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_12 == NULL)) {
                tmp_kw_call_value_7_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);
                Py_DECREF(tmp_kw_call_value_5_12);

                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[43];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);
                Py_DECREF(tmp_kw_call_value_5_12);

                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[69]);
            if (tmp_called_instance_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);
                Py_DECREF(tmp_kw_call_value_5_12);

                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 242;
            tmp_dict_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_44,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_44);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_12);
                Py_DECREF(tmp_kw_call_value_1_12);
                Py_DECREF(tmp_kw_call_value_4_12);
                Py_DECREF(tmp_kw_call_value_5_12);

                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_12, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 231;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12, tmp_kw_call_value_6_12, tmp_kw_call_value_7_12, tmp_kw_call_value_8_12};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_12);
            Py_DECREF(tmp_kw_call_value_1_12);
            Py_DECREF(tmp_kw_call_value_4_12);
            Py_DECREF(tmp_kw_call_value_5_12);
            Py_DECREF(tmp_kw_call_value_8_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_ass_subvalue_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_14 == NULL)) {
                tmp_ass_subvalue_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_14 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_14 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_called_instance_45;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_kw_call_value_2_13;
            PyObject *tmp_kw_call_value_3_13;
            PyObject *tmp_kw_call_value_4_13;
            PyObject *tmp_kw_call_value_5_13;
            PyObject *tmp_called_instance_46;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_kw_call_value_6_13;
            PyObject *tmp_kw_call_value_7_13;
            PyObject *tmp_kw_call_value_8_13;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_called_instance_47;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_kw_call_value_9_5;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[71]);
            if (tmp_called_instance_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 248;
            tmp_kw_call_value_0_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_45, mod_consts[39]);
            Py_DECREF(tmp_called_instance_45);
            if (tmp_kw_call_value_0_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);

                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[49]);
            if (tmp_kw_call_value_1_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);

                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_13 = Py_False;
            tmp_kw_call_value_3_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_13 == NULL)) {
                tmp_kw_call_value_3_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);

                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_13 == NULL)) {
                tmp_kw_call_value_4_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);

                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);

                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[71]);
            if (tmp_called_instance_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);

                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 253;
            tmp_kw_call_value_5_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_46,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_46);
            if (tmp_kw_call_value_5_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);

                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_13 == NULL)) {
                tmp_kw_call_value_6_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);

                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_13 == NULL)) {
                tmp_kw_call_value_7_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);

                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_21 = mod_consts[50];
            tmp_dict_key_22 = mod_consts[43];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[71]);
            if (tmp_called_instance_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 258;
            tmp_dict_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_47,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_47);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_21 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_48;
                PyObject *tmp_expression_value_61;
                tmp_res = PyDict_SetItem(tmp_dict_value_21, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[52];
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_called_instance_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[71]);
                if (tmp_called_instance_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 259;
                tmp_dict_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_48,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_48);
                if (tmp_dict_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_21, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_kw_call_value_0_13);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_5_13);
            Py_DECREF(tmp_dict_value_21);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            tmp_kw_call_value_8_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_23;
                PyObject *tmp_dict_value_23;
                PyObject *tmp_called_instance_49;
                PyObject *tmp_expression_value_62;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_13, tmp_dict_key_21, tmp_dict_value_21);
                Py_DECREF(tmp_dict_value_21);
                assert(!(tmp_res != 0));
                tmp_dict_key_21 = mod_consts[54];
                tmp_dict_key_23 = mod_consts[43];
                tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_62 == NULL)) {
                    tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_called_instance_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[71]);
                if (tmp_called_instance_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 262;
                tmp_dict_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_49,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_49);
                if (tmp_dict_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_21 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_21, tmp_dict_key_23, tmp_dict_value_23);
                Py_DECREF(tmp_dict_value_23);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_13, tmp_dict_key_21, tmp_dict_value_21);
                Py_DECREF(tmp_dict_value_21);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_kw_call_value_0_13);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_5_13);
            Py_DECREF(tmp_kw_call_value_8_13);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            tmp_kw_call_value_9_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_5 == NULL)) {
                tmp_kw_call_value_9_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);
                Py_DECREF(tmp_kw_call_value_1_13);
                Py_DECREF(tmp_kw_call_value_5_13);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 247;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13, tmp_kw_call_value_6_13, tmp_kw_call_value_7_13, tmp_kw_call_value_8_13, tmp_kw_call_value_9_5};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_13);
            Py_DECREF(tmp_kw_call_value_1_13);
            Py_DECREF(tmp_kw_call_value_5_13);
            Py_DECREF(tmp_kw_call_value_8_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_15 == NULL)) {
                tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_15 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_15 = mod_consts[71];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_kw_call_value_0_14;
            PyObject *tmp_called_instance_50;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_kw_call_value_1_14;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_kw_call_value_2_14;
            PyObject *tmp_kw_call_value_3_14;
            PyObject *tmp_kw_call_value_4_14;
            PyObject *tmp_kw_call_value_5_14;
            PyObject *tmp_called_instance_51;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_kw_call_value_6_14;
            PyObject *tmp_kw_call_value_7_14;
            PyObject *tmp_kw_call_value_8_14;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_called_instance_52;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_kw_call_value_9_6;
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[72]);
            if (tmp_called_instance_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 269;
            tmp_kw_call_value_0_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_50, mod_consts[39]);
            Py_DECREF(tmp_called_instance_50);
            if (tmp_kw_call_value_0_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);

                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[47]);
            if (tmp_kw_call_value_1_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);

                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_14 = Py_True;
            tmp_kw_call_value_3_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_14 == NULL)) {
                tmp_kw_call_value_3_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);

                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_14 == NULL)) {
                tmp_kw_call_value_4_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);

                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[72]);
            if (tmp_called_instance_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 274;
            tmp_kw_call_value_5_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_51,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_51);
            if (tmp_kw_call_value_5_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);

                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_14 == NULL)) {
                tmp_kw_call_value_6_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);

                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_kw_call_value_7_14 == NULL)) {
                tmp_kw_call_value_7_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_kw_call_value_7_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);

                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_24 = mod_consts[50];
            tmp_dict_key_25 = mod_consts[43];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[72]);
            if (tmp_called_instance_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 279;
            tmp_dict_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_52,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_52);
            if (tmp_dict_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_24 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_53;
                PyObject *tmp_expression_value_67;
                tmp_res = PyDict_SetItem(tmp_dict_value_24, tmp_dict_key_25, tmp_dict_value_25);
                Py_DECREF(tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[52];
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_called_instance_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[72]);
                if (tmp_called_instance_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 280;
                tmp_dict_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_53,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[53], 0)
                );

                Py_DECREF(tmp_called_instance_53);
                if (tmp_dict_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_24, tmp_dict_key_25, tmp_dict_value_25);
                Py_DECREF(tmp_dict_value_25);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_kw_call_value_0_14);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_5_14);
            Py_DECREF(tmp_dict_value_24);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            tmp_kw_call_value_8_14 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_dict_key_26;
                PyObject *tmp_dict_value_26;
                PyObject *tmp_called_instance_54;
                PyObject *tmp_expression_value_68;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_14, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
                tmp_dict_key_24 = mod_consts[54];
                tmp_dict_key_26 = mod_consts[43];
                tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_68 == NULL)) {
                    tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_called_instance_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[72]);
                if (tmp_called_instance_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 283;
                tmp_dict_value_26 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_54,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[55], 0)
                );

                Py_DECREF(tmp_called_instance_54);
                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_dict_value_24 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_dict_value_24, tmp_dict_key_26, tmp_dict_value_26);
                Py_DECREF(tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_res = PyDict_SetItem(tmp_kw_call_value_8_14, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_kw_call_value_0_14);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_5_14);
            Py_DECREF(tmp_kw_call_value_8_14);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            tmp_kw_call_value_9_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_9_6 == NULL)) {
                tmp_kw_call_value_9_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_9_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);
                Py_DECREF(tmp_kw_call_value_1_14);
                Py_DECREF(tmp_kw_call_value_5_14);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 268;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14, tmp_kw_call_value_6_14, tmp_kw_call_value_7_14, tmp_kw_call_value_8_14, tmp_kw_call_value_9_6};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_value_0_14);
            Py_DECREF(tmp_kw_call_value_1_14);
            Py_DECREF(tmp_kw_call_value_5_14);
            Py_DECREF(tmp_kw_call_value_8_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_ass_subvalue_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_ass_subvalue_16 == NULL)) {
                tmp_ass_subvalue_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_ass_subvalue_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_16 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_16 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_kw_call_value_0_15;
            PyObject *tmp_called_instance_55;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_kw_call_value_1_15;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_kw_call_value_2_15;
            PyObject *tmp_kw_call_value_3_15;
            PyObject *tmp_kw_call_value_4_15;
            PyObject *tmp_kw_call_value_5_15;
            PyObject *tmp_called_value_20;
            PyObject *tmp_kw_call_value_6_15;
            PyObject *tmp_called_instance_56;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_kw_call_value_7_15;
            PyObject *tmp_kw_call_value_8_15;
            PyObject *tmp_kw_call_value_9_7;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_called_instance_57;
            PyObject *tmp_expression_value_72;
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[73]);
            if (tmp_called_instance_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 291;
            tmp_kw_call_value_0_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_55, mod_consts[39]);
            Py_DECREF(tmp_called_instance_55);
            if (tmp_kw_call_value_0_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);

                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[74]);
            if (tmp_kw_call_value_1_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);

                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_15 = Py_False;
            tmp_kw_call_value_3_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_15 == NULL)) {
                tmp_kw_call_value_3_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);

                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_15 == NULL)) {
                tmp_kw_call_value_4_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);

                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 296;
            tmp_kw_call_value_5_15 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_20, mod_consts[75]);

            if (tmp_kw_call_value_5_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);

                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[73]);
            if (tmp_called_instance_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 298;
            tmp_kw_call_value_6_15 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_56,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_56);
            if (tmp_kw_call_value_6_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_7_15 == NULL)) {
                tmp_kw_call_value_7_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_7_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);
                Py_DECREF(tmp_kw_call_value_6_15);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_8_15 == NULL)) {
                tmp_kw_call_value_8_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_8_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);
                Py_DECREF(tmp_kw_call_value_6_15);

                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[76];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);
                Py_DECREF(tmp_kw_call_value_6_15);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[73]);
            if (tmp_called_instance_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);
                Py_DECREF(tmp_kw_call_value_6_15);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 302;
            tmp_dict_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_57,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_57);
            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_15);
                Py_DECREF(tmp_kw_call_value_1_15);
                Py_DECREF(tmp_kw_call_value_5_15);
                Py_DECREF(tmp_kw_call_value_6_15);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_9_7 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_58;
                PyObject *tmp_expression_value_73;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_9_7, tmp_dict_key_27, tmp_dict_value_27);
                Py_DECREF(tmp_dict_value_27);
                assert(!(tmp_res != 0));
                tmp_dict_key_27 = mod_consts[77];
                tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_73 == NULL)) {
                    tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[73]);
                if (tmp_called_instance_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 303;
                tmp_dict_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_58,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[78], 0)
                );

                Py_DECREF(tmp_called_instance_58);
                if (tmp_dict_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_9_7, tmp_dict_key_27, tmp_dict_value_27);
                Py_DECREF(tmp_dict_value_27);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_kw_call_value_0_15);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_5_15);
            Py_DECREF(tmp_kw_call_value_6_15);
            Py_DECREF(tmp_kw_call_value_9_7);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 290;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15, tmp_kw_call_value_6_15, tmp_kw_call_value_7_15, tmp_kw_call_value_8_15, tmp_kw_call_value_9_7};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, kw_values, mod_consts[79]);
            }

            Py_DECREF(tmp_kw_call_value_0_15);
            Py_DECREF(tmp_kw_call_value_1_15);
            Py_DECREF(tmp_kw_call_value_5_15);
            Py_DECREF(tmp_kw_call_value_6_15);
            Py_DECREF(tmp_kw_call_value_9_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_ass_subvalue_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_ass_subvalue_17 == NULL)) {
                tmp_ass_subvalue_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_ass_subvalue_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_17 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_17 = mod_consts[73];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_kw_call_value_0_16;
            PyObject *tmp_called_instance_59;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_kw_call_value_1_16;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_kw_call_value_2_16;
            PyObject *tmp_kw_call_value_3_16;
            PyObject *tmp_kw_call_value_4_16;
            PyObject *tmp_called_value_22;
            PyObject *tmp_kw_call_value_5_16;
            PyObject *tmp_called_value_23;
            PyObject *tmp_kw_call_value_6_16;
            PyObject *tmp_called_instance_60;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_kw_call_value_7_16;
            PyObject *tmp_kw_call_value_8_16;
            PyObject *tmp_kw_call_value_9_8;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_called_instance_61;
            PyObject *tmp_expression_value_77;
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[80]);
            if (tmp_called_instance_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 308;
            tmp_kw_call_value_0_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_59, mod_consts[39]);
            Py_DECREF(tmp_called_instance_59);
            if (tmp_kw_call_value_0_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[47]);
            if (tmp_kw_call_value_1_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_16 = Py_True;
            tmp_kw_call_value_3_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_16 == NULL)) {
                tmp_kw_call_value_3_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);

                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);

                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 312;
            tmp_kw_call_value_4_16 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_22, mod_consts[81]);

            if (tmp_kw_call_value_4_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);

                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 314;
            tmp_kw_call_value_5_16 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_23, mod_consts[81]);

            if (tmp_kw_call_value_5_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);

                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[80]);
            if (tmp_called_instance_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);

                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 316;
            tmp_kw_call_value_6_16 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_60,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_60);
            if (tmp_kw_call_value_6_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);

                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_7_16 == NULL)) {
                tmp_kw_call_value_7_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_7_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);
                Py_DECREF(tmp_kw_call_value_6_16);

                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_8_16 == NULL)) {
                tmp_kw_call_value_8_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_8_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);
                Py_DECREF(tmp_kw_call_value_6_16);

                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_28 = mod_consts[76];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);
                Py_DECREF(tmp_kw_call_value_6_16);

                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[80]);
            if (tmp_called_instance_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);
                Py_DECREF(tmp_kw_call_value_6_16);

                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 320;
            tmp_dict_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_61,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[51], 0)
            );

            Py_DECREF(tmp_called_instance_61);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_16);
                Py_DECREF(tmp_kw_call_value_1_16);
                Py_DECREF(tmp_kw_call_value_4_16);
                Py_DECREF(tmp_kw_call_value_5_16);
                Py_DECREF(tmp_kw_call_value_6_16);

                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_9_8 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_instance_62;
                PyObject *tmp_expression_value_78;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_9_8, tmp_dict_key_28, tmp_dict_value_28);
                Py_DECREF(tmp_dict_value_28);
                assert(!(tmp_res != 0));
                tmp_dict_key_28 = mod_consts[77];
                tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_78 == NULL)) {
                    tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_expression_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_called_instance_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[80]);
                if (tmp_called_instance_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 321;
                tmp_dict_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
                    tstate,
                    tmp_called_instance_62,
                    mod_consts[41],
                    PyTuple_GET_ITEM(mod_consts[78], 0)
                );

                Py_DECREF(tmp_called_instance_62);
                if (tmp_dict_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_9_8, tmp_dict_key_28, tmp_dict_value_28);
                Py_DECREF(tmp_dict_value_28);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_kw_call_value_0_16);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_4_16);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_kw_call_value_6_16);
            Py_DECREF(tmp_kw_call_value_9_8);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 307;
            {
                PyObject *kw_values[10] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_16, tmp_kw_call_value_7_16, tmp_kw_call_value_8_16, tmp_kw_call_value_9_8};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, kw_values, mod_consts[79]);
            }

            Py_DECREF(tmp_kw_call_value_0_16);
            Py_DECREF(tmp_kw_call_value_1_16);
            Py_DECREF(tmp_kw_call_value_4_16);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_kw_call_value_6_16);
            Py_DECREF(tmp_kw_call_value_9_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_ass_subvalue_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_ass_subvalue_18 == NULL)) {
                tmp_ass_subvalue_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_ass_subvalue_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_18 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_18 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_kw_call_value_0_17;
            PyObject *tmp_called_instance_63;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_kw_call_value_1_17;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_kw_call_value_2_17;
            PyObject *tmp_kw_call_value_3_17;
            PyObject *tmp_kw_call_value_4_17;
            PyObject *tmp_kw_call_value_5_17;
            PyObject *tmp_called_instance_64;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_kw_call_value_6_17;
            PyObject *tmp_kw_call_value_7_17;
            PyObject *tmp_kw_call_value_8_17;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_called_instance_65;
            PyObject *tmp_expression_value_82;
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[82]);
            if (tmp_called_instance_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 327;
            tmp_kw_call_value_0_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_63, mod_consts[39]);
            Py_DECREF(tmp_called_instance_63);
            if (tmp_kw_call_value_0_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);

                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[83]);
            if (tmp_kw_call_value_1_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);

                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_17 = Py_False;
            tmp_kw_call_value_3_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_17 == NULL)) {
                tmp_kw_call_value_3_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);

                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_kw_call_value_4_17 == NULL)) {
                tmp_kw_call_value_4_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_kw_call_value_4_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);

                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);

                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[82]);
            if (tmp_called_instance_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);

                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 332;
            tmp_kw_call_value_5_17 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_64,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_64);
            if (tmp_kw_call_value_5_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);

                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_17 == NULL)) {
                tmp_kw_call_value_6_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);
                Py_DECREF(tmp_kw_call_value_5_17);

                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_17 == NULL)) {
                tmp_kw_call_value_7_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);
                Py_DECREF(tmp_kw_call_value_5_17);

                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[43];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);
                Py_DECREF(tmp_kw_call_value_5_17);

                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[82]);
            if (tmp_called_instance_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);
                Py_DECREF(tmp_kw_call_value_5_17);

                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 336;
            tmp_dict_value_29 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_65,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_65);
            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_17);
                Py_DECREF(tmp_kw_call_value_1_17);
                Py_DECREF(tmp_kw_call_value_5_17);

                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_17, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 326;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_17, tmp_kw_call_value_5_17, tmp_kw_call_value_6_17, tmp_kw_call_value_7_17, tmp_kw_call_value_8_17};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_kw_call_value_1_17);
            Py_DECREF(tmp_kw_call_value_5_17);
            Py_DECREF(tmp_kw_call_value_8_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_ass_subvalue_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_19 == NULL)) {
                tmp_ass_subvalue_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_19 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_19 = mod_consts[82];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_kw_call_value_0_18;
            PyObject *tmp_called_instance_66;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_kw_call_value_1_18;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_kw_call_value_2_18;
            PyObject *tmp_kw_call_value_3_18;
            PyObject *tmp_kw_call_value_4_18;
            PyObject *tmp_kw_call_value_5_18;
            PyObject *tmp_called_instance_67;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_kw_call_value_6_18;
            PyObject *tmp_kw_call_value_7_18;
            PyObject *tmp_kw_call_value_8_18;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_called_instance_68;
            PyObject *tmp_expression_value_86;
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[84]);
            if (tmp_called_instance_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 341;
            tmp_kw_call_value_0_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_66, mod_consts[39]);
            Py_DECREF(tmp_called_instance_66);
            if (tmp_kw_call_value_0_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);

                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[47]);
            if (tmp_kw_call_value_1_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);

                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_2_18 = Py_True;
            tmp_kw_call_value_3_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_kw_call_value_3_18 == NULL)) {
                tmp_kw_call_value_3_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_kw_call_value_3_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_4_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_kw_call_value_4_18 == NULL)) {
                tmp_kw_call_value_4_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_kw_call_value_4_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[84]);
            if (tmp_called_instance_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 346;
            tmp_kw_call_value_5_18 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_67,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[42], 0)
            );

            Py_DECREF(tmp_called_instance_67);
            if (tmp_kw_call_value_5_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_6_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_kw_call_value_6_18 == NULL)) {
                tmp_kw_call_value_6_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_kw_call_value_6_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);
                Py_DECREF(tmp_kw_call_value_5_18);

                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_7_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_kw_call_value_7_18 == NULL)) {
                tmp_kw_call_value_7_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_kw_call_value_7_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);
                Py_DECREF(tmp_kw_call_value_5_18);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_30 = mod_consts[43];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);
                Py_DECREF(tmp_kw_call_value_5_18);

                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[84]);
            if (tmp_called_instance_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);
                Py_DECREF(tmp_kw_call_value_5_18);

                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 350;
            tmp_dict_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_68,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[44], 0)
            );

            Py_DECREF(tmp_called_instance_68);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_18);
                Py_DECREF(tmp_kw_call_value_1_18);
                Py_DECREF(tmp_kw_call_value_5_18);

                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_8_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_8_18, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            frame_2665758e8036b2c19f7c070840806915_2->m_frame.f_lineno = 340;
            {
                PyObject *kw_values[9] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_18, tmp_kw_call_value_5_18, tmp_kw_call_value_6_18, tmp_kw_call_value_7_18, tmp_kw_call_value_8_18};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_kw_call_value_0_18);
            Py_DECREF(tmp_kw_call_value_1_18);
            Py_DECREF(tmp_kw_call_value_5_18);
            Py_DECREF(tmp_kw_call_value_8_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_ass_subvalue_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_ass_subvalue_20 == NULL)) {
                tmp_ass_subvalue_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_ass_subvalue_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_20 = DICT_GET_ITEM0(tstate, locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_20 = mod_consts[84];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2665758e8036b2c19f7c070840806915_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2665758e8036b2c19f7c070840806915_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2665758e8036b2c19f7c070840806915_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2665758e8036b2c19f7c070840806915_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_2665758e8036b2c19f7c070840806915_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_26 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[36];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_bbe337dd226637aeb1ed294597ee1d25->m_frame.f_lineno = 39;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39);
        locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39);
        locals_bip_utils$bip$conf$bip49$bip49_conf$$$class__1_Bip49Conf_39 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 39;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_22);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbe337dd226637aeb1ed294597ee1d25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbe337dd226637aeb1ed294597ee1d25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbe337dd226637aeb1ed294597ee1d25, exception_lineno);
    }



    assertFrameObject(frame_bbe337dd226637aeb1ed294597ee1d25);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("bip_utils.bip.conf.bip49.bip49_conf", false);

    Py_INCREF(module_bip_utils$bip$conf$bip49$bip49_conf);
    return module_bip_utils$bip$conf$bip49$bip49_conf;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$bip$conf$bip49$bip49_conf, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("bip_utils$bip$conf$bip49$bip49_conf", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
