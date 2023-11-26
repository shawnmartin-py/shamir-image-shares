/* Generated code for Python module 'bip_utils.coin_conf.coins_conf'
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

/* The "module_bip_utils$coin_conf$coins_conf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bip_utils$coin_conf$coins_conf;
PyDictObject *moduledict_bip_utils$coin_conf$coins_conf;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[307];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[307];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("bip_utils.coin_conf.coins_conf"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 307; i++) {
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
void checkModuleConstants_bip_utils$coin_conf$coins_conf(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 307; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1c4504fbfc40f3483a638e40ab3a1e58;
static PyCodeObject *codeobj_7ade4e17ade698056d38c6691e82d331;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[303]); CHECK_OBJECT(module_filename_obj);
    codeobj_1c4504fbfc40f3483a638e40ab3a1e58 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[304], mod_consts[304], NULL, NULL, 0, 0, 0);
    codeobj_7ade4e17ade698056d38c6691e82d331 = MAKE_CODE_OBJECT(module_filename_obj, 48, 0, mod_consts[44], mod_consts[44], mod_consts[305], NULL, 0, 0, 0);
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

function_impl_code functable_bip_utils$coin_conf$coins_conf[] = {

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

    function_impl_code *current = functable_bip_utils$coin_conf$coins_conf;
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

    if (offset > sizeof(functable_bip_utils$coin_conf$coins_conf) || offset < 0) {
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
        functable_bip_utils$coin_conf$coins_conf[offset],
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
        module_bip_utils$coin_conf$coins_conf,
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
PyObject *modulecode_bip_utils$coin_conf$coins_conf(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("bip_utils.coin_conf.coins_conf");

    // Store the module for future use.
    module_bip_utils$coin_conf$coins_conf = module;

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
        PRINT_STRING("bip_utils.coin_conf.coins_conf: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("bip_utils.coin_conf.coins_conf: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initbip_utils$coin_conf$coins_conf\n");

    moduledict_bip_utils$coin_conf$coins_conf = MODULE_DICT(module_bip_utils$coin_conf$coins_conf);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_bip_utils$coin_conf$coins_conf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_bip_utils$coin_conf$coins_conf,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[306]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_bip_utils$coin_conf$coins_conf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils$coin_conf$coins_conf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_bip_utils$coin_conf$coins_conf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_bip_utils$coin_conf$coins_conf);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_bip_utils$coin_conf$coins_conf);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_1c4504fbfc40f3483a638e40ab3a1e58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_7ade4e17ade698056d38c6691e82d331_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_1c4504fbfc40f3483a638e40ab3a1e58 = MAKE_MODULE_FRAME(codeobj_1c4504fbfc40f3483a638e40ab3a1e58, module_bip_utils$coin_conf$coins_conf);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c4504fbfc40f3483a638e40ab3a1e58);
    assert(Py_REFCNT(frame_1c4504fbfc40f3483a638e40ab3a1e58) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_bip_utils$coin_conf$coins_conf;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[9];
        tmp_level_value_1 = mod_consts[10];
        frame_1c4504fbfc40f3483a638e40ab3a1e58->m_frame.f_lineno = 24;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_bip_utils$coin_conf$coins_conf,
                mod_consts[11],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_bip_utils$coin_conf$coins_conf;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[10];
        frame_1c4504fbfc40f3483a638e40ab3a1e58->m_frame.f_lineno = 25;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_bip_utils$coin_conf$coins_conf,
                mod_consts[14],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[15];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_bip_utils$coin_conf$coins_conf;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[16];
        tmp_level_value_3 = mod_consts[10];
        frame_1c4504fbfc40f3483a638e40ab3a1e58->m_frame.f_lineno = 26;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_bip_utils$coin_conf$coins_conf,
                mod_consts[17],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[19];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[21];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[23];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = (PyObject *)&PyLong_Type;
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[25];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = (PyObject *)&PyLong_Type;
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[29];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[33];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[34]);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[35];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_18);
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = (PyObject *)&PyLong_Type;
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[36];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[34]);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = mod_consts[37];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = (PyObject *)&PyLong_Type;
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = (PyObject *)&PyBytes_Type;
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[40];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[42], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[45], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_7ade4e17ade698056d38c6691e82d331_2 = MAKE_CLASS_FRAME(tstate, codeobj_7ade4e17ade698056d38c6691e82d331, module_bip_utils$coin_conf$coins_conf, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7ade4e17ade698056d38c6691e82d331_2);
        assert(Py_REFCNT(frame_7ade4e17ade698056d38c6691e82d331_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_kw_call_value_1_1;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 53;
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[46]);

            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_1 = DICT_COPY(mod_consts[47]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 52;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_15 == NULL)) {
                tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_15 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_15 = mod_consts[49];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_5;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 61;
            tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_4, mod_consts[50]);

            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = mod_consts[51];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[52]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_2);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 60;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_ass_subvalue_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_16 == NULL)) {
                tmp_ass_subvalue_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_16 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_16 = mod_consts[53];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_called_value_6;
            PyObject *tmp_kw_call_value_1_3;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 69;
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[54]);

            if (tmp_kw_call_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_3 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 68;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_3);
            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_ass_subvalue_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_17 == NULL)) {
                tmp_ass_subvalue_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_17 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_17 = mod_consts[55];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_called_value_8;
            PyObject *tmp_kw_call_value_1_4;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 75;
            tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_8, mod_consts[56]);

            if (tmp_kw_call_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_4 = DICT_COPY(mod_consts[57]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 74;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_4);
            Py_DECREF(tmp_kw_call_value_1_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_ass_subvalue_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_18 == NULL)) {
                tmp_ass_subvalue_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_18 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_18 = mod_consts[58];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_called_value_10;
            PyObject *tmp_kw_call_value_1_5;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 83;
            tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_10, mod_consts[59]);

            if (tmp_kw_call_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_5 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 82;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_kw_call_value_1_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_ass_subvalue_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_19 == NULL)) {
                tmp_ass_subvalue_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_19 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_19 = mod_consts[60];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_called_value_12;
            PyObject *tmp_kw_call_value_1_6;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 89;
            tmp_kw_call_value_0_6 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_12, mod_consts[61]);

            if (tmp_kw_call_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_6 = DICT_COPY(mod_consts[62]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 88;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_6);
            Py_DECREF(tmp_kw_call_value_1_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_ass_subvalue_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_20 == NULL)) {
                tmp_ass_subvalue_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_20 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_20 = mod_consts[63];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_called_value_14;
            PyObject *tmp_kw_call_value_1_7;
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 98;
            tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_14, mod_consts[64]);

            if (tmp_kw_call_value_0_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_7 = DICT_COPY(mod_consts[65]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 97;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_13, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_7);
            Py_DECREF(tmp_kw_call_value_1_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_21;
            PyObject *tmp_ass_subscribed_21;
            PyObject *tmp_ass_subscript_21;
            tmp_ass_subvalue_21 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_21 == NULL)) {
                tmp_ass_subvalue_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_21 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_21 = mod_consts[66];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_called_value_16;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_6;
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 107;
            tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_16, mod_consts[67]);

            if (tmp_kw_call_value_0_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[51];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[68]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_8, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 106;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_15, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_8);
            Py_DECREF(tmp_kw_call_value_1_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_22;
            PyObject *tmp_ass_subscribed_22;
            PyObject *tmp_ass_subscript_22;
            tmp_ass_subvalue_22 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_22 == NULL)) {
                tmp_ass_subvalue_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_22 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_22 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_kw_call_value_0_9;
            PyObject *tmp_called_value_18;
            PyObject *tmp_kw_call_value_1_9;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_7;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 115;
            tmp_kw_call_value_0_9 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_18, mod_consts[70]);

            if (tmp_kw_call_value_0_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[51];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[71]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_9);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_9, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 114;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_17, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_9);
            Py_DECREF(tmp_kw_call_value_1_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_23;
            PyObject *tmp_ass_subscribed_23;
            PyObject *tmp_ass_subscript_23;
            tmp_ass_subvalue_23 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_23 == NULL)) {
                tmp_ass_subvalue_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_23 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_23 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_called_value_20;
            PyObject *tmp_kw_call_value_1_10;
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 123;
            tmp_kw_call_value_0_10 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_20, mod_consts[73]);

            if (tmp_kw_call_value_0_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_10 = DICT_COPY(mod_consts[74]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 122;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_10);
            Py_DECREF(tmp_kw_call_value_1_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_24;
            PyObject *tmp_ass_subscribed_24;
            PyObject *tmp_ass_subscript_24;
            tmp_ass_subvalue_24 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_24 == NULL)) {
                tmp_ass_subvalue_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_24 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_24 = mod_consts[75];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_called_value_22;
            PyObject *tmp_kw_call_value_1_11;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_8;
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 131;
            tmp_kw_call_value_0_11 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_22, mod_consts[76]);

            if (tmp_kw_call_value_0_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[51];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[77]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_11);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_11, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 130;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_11);
            Py_DECREF(tmp_kw_call_value_1_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_ass_subscript_25;
            tmp_ass_subvalue_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_25 == NULL)) {
                tmp_ass_subvalue_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_25 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_25 = mod_consts[78];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_kw_call_value_0_12;
            PyObject *tmp_called_value_24;
            PyObject *tmp_kw_call_value_1_12;
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 139;
            tmp_kw_call_value_0_12 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_24, mod_consts[79]);

            if (tmp_kw_call_value_0_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_12 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 138;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_23, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_12);
            Py_DECREF(tmp_kw_call_value_1_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_26;
            PyObject *tmp_ass_subscribed_26;
            PyObject *tmp_ass_subscript_26;
            tmp_ass_subvalue_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_26 == NULL)) {
                tmp_ass_subvalue_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_26 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_26 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_called_value_26;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 145;
            tmp_kw_call_value_0_13 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_26, mod_consts[81]);

            if (tmp_kw_call_value_0_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[82];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_13);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_13 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[83];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[84];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[85];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[86];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[87];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[88];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_13, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_kw_call_value_0_13);
            Py_DECREF(tmp_kw_call_value_1_13);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 144;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_13);
            Py_DECREF(tmp_kw_call_value_1_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_27;
            PyObject *tmp_ass_subscribed_27;
            PyObject *tmp_ass_subscript_27;
            tmp_ass_subvalue_27 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_27 == NULL)) {
                tmp_ass_subvalue_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_27 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_27 = mod_consts[89];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_kw_call_value_0_14;
            PyObject *tmp_called_value_28;
            PyObject *tmp_kw_call_value_1_14;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 159;
            tmp_kw_call_value_0_14 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_28, mod_consts[90]);

            if (tmp_kw_call_value_0_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[82];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_14);

                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_14 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[83];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[84];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[85];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[86];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[87];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[88];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_14, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_kw_call_value_0_14);
            Py_DECREF(tmp_kw_call_value_1_14);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 158;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_27, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_14);
            Py_DECREF(tmp_kw_call_value_1_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[91], tmp_dictset_value);
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
            PyObject *tmp_ass_subvalue_28;
            PyObject *tmp_ass_subscribed_28;
            PyObject *tmp_ass_subscript_28;
            tmp_ass_subvalue_28 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_28 == NULL)) {
                tmp_ass_subvalue_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_28 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_28 = mod_consts[91];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_kw_call_value_0_15;
            PyObject *tmp_called_value_30;
            PyObject *tmp_kw_call_value_1_15;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 173;
            tmp_kw_call_value_0_15 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_30, mod_consts[92]);

            if (tmp_kw_call_value_0_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[93];
            tmp_dict_value_7 = mod_consts[94];
            tmp_kw_call_value_1_15 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[95];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[96];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[97];
            tmp_dict_value_7 = mod_consts[94];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[98];
            tmp_dict_value_7 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[100];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[88];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_15, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_kw_call_value_0_15);
            Py_DECREF(tmp_kw_call_value_1_15);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 172;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_29, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_15);
            Py_DECREF(tmp_kw_call_value_1_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[101], tmp_dictset_value);
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
            PyObject *tmp_ass_subvalue_29;
            PyObject *tmp_ass_subscribed_29;
            PyObject *tmp_ass_subscript_29;
            tmp_ass_subvalue_29 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_29 == NULL)) {
                tmp_ass_subvalue_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_29 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_29 = mod_consts[101];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_kw_call_value_0_16;
            PyObject *tmp_called_value_32;
            PyObject *tmp_kw_call_value_1_16;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 187;
            tmp_kw_call_value_0_16 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_32, mod_consts[102]);

            if (tmp_kw_call_value_0_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[93];
            tmp_dict_value_8 = mod_consts[103];
            tmp_kw_call_value_1_16 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[95];
            tmp_dict_value_8 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[96];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[97];
            tmp_dict_value_8 = mod_consts[103];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[98];
            tmp_dict_value_8 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[100];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[88];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_16, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_kw_call_value_0_16);
            Py_DECREF(tmp_kw_call_value_1_16);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 186;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_31, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_16);
            Py_DECREF(tmp_kw_call_value_1_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_30;
            PyObject *tmp_ass_subscribed_30;
            PyObject *tmp_ass_subscript_30;
            tmp_ass_subvalue_30 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_30 == NULL)) {
                tmp_ass_subvalue_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_30 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_30 = mod_consts[104];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_kw_call_value_0_17;
            PyObject *tmp_called_value_34;
            PyObject *tmp_kw_call_value_1_17;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 201;
            tmp_kw_call_value_0_17 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_34, mod_consts[105]);

            if (tmp_kw_call_value_0_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_9 = mod_consts[93];
            tmp_dict_value_9 = mod_consts[106];
            tmp_kw_call_value_1_17 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[95];
            tmp_dict_value_9 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[96];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[97];
            tmp_dict_value_9 = mod_consts[106];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[98];
            tmp_dict_value_9 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[100];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[88];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_17, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_kw_call_value_1_17);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 200;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_33, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_17);
            Py_DECREF(tmp_kw_call_value_1_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_31;
            PyObject *tmp_ass_subscribed_31;
            PyObject *tmp_ass_subscript_31;
            tmp_ass_subvalue_31 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_31 == NULL)) {
                tmp_ass_subvalue_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_31 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_31 = mod_consts[107];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_kw_call_value_0_18;
            PyObject *tmp_called_value_36;
            PyObject *tmp_kw_call_value_1_18;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 215;
            tmp_kw_call_value_0_18 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_36, mod_consts[108]);

            if (tmp_kw_call_value_0_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[93];
            tmp_dict_value_10 = mod_consts[109];
            tmp_kw_call_value_1_18 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[95];
            tmp_dict_value_10 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[96];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[97];
            tmp_dict_value_10 = mod_consts[109];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[98];
            tmp_dict_value_10 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[100];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[88];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_18, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_kw_call_value_0_18);
            Py_DECREF(tmp_kw_call_value_1_18);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 214;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_18);
            Py_DECREF(tmp_kw_call_value_1_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_32;
            PyObject *tmp_ass_subscribed_32;
            PyObject *tmp_ass_subscript_32;
            tmp_ass_subvalue_32 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_32 == NULL)) {
                tmp_ass_subvalue_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_32 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_32 = mod_consts[110];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_kw_call_value_0_19;
            PyObject *tmp_called_value_38;
            PyObject *tmp_kw_call_value_1_19;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 229;
            tmp_kw_call_value_0_19 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_38, mod_consts[111]);

            if (tmp_kw_call_value_0_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[82];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_19);

                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_19 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_19, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[83];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_19, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[88];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_19, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_kw_call_value_0_19);
            Py_DECREF(tmp_kw_call_value_1_19);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 228;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_37, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_19);
            Py_DECREF(tmp_kw_call_value_1_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_33;
            PyObject *tmp_ass_subscribed_33;
            PyObject *tmp_ass_subscript_33;
            tmp_ass_subvalue_33 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_33 == NULL)) {
                tmp_ass_subvalue_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_33 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_33 = mod_consts[112];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_kw_call_value_0_20;
            PyObject *tmp_called_value_40;
            PyObject *tmp_kw_call_value_1_20;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 239;
            tmp_kw_call_value_0_20 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_40, mod_consts[113]);

            if (tmp_kw_call_value_0_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_12 = mod_consts[82];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_20);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_20 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_20, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[83];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_20, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[88];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_20, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_kw_call_value_0_20);
            Py_DECREF(tmp_kw_call_value_1_20);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 238;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_39, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_20);
            Py_DECREF(tmp_kw_call_value_1_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_34;
            PyObject *tmp_ass_subscribed_34;
            PyObject *tmp_ass_subscript_34;
            tmp_ass_subvalue_34 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_34 == NULL)) {
                tmp_ass_subvalue_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_34 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_34 = mod_consts[114];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_kw_call_value_0_21;
            PyObject *tmp_called_value_42;
            PyObject *tmp_kw_call_value_1_21;
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 249;
            tmp_kw_call_value_0_21 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_42, mod_consts[115]);

            if (tmp_kw_call_value_0_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_21 = DICT_COPY(mod_consts[116]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 248;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_41, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_21);
            Py_DECREF(tmp_kw_call_value_1_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_35;
            PyObject *tmp_ass_subscribed_35;
            PyObject *tmp_ass_subscript_35;
            tmp_ass_subvalue_35 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_35 == NULL)) {
                tmp_ass_subvalue_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_35 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_35 = mod_consts[117];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_kw_call_value_0_22;
            PyObject *tmp_called_value_44;
            PyObject *tmp_kw_call_value_1_22;
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 258;
            tmp_kw_call_value_0_22 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_44, mod_consts[118]);

            if (tmp_kw_call_value_0_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_22 = DICT_COPY(mod_consts[119]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 257;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_22);
            Py_DECREF(tmp_kw_call_value_1_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_36;
            PyObject *tmp_ass_subscribed_36;
            PyObject *tmp_ass_subscript_36;
            tmp_ass_subvalue_36 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_36 == NULL)) {
                tmp_ass_subvalue_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_36 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_36 = mod_consts[120];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_kw_call_value_0_23;
            PyObject *tmp_called_value_46;
            PyObject *tmp_kw_call_value_1_23;
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 267;
            tmp_kw_call_value_0_23 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_46, mod_consts[121]);

            if (tmp_kw_call_value_0_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_23 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 266;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_23);
            Py_DECREF(tmp_kw_call_value_1_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_37;
            PyObject *tmp_ass_subscribed_37;
            PyObject *tmp_ass_subscript_37;
            tmp_ass_subvalue_37 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_37 == NULL)) {
                tmp_ass_subvalue_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_37 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_37 = mod_consts[122];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_kw_call_value_0_24;
            PyObject *tmp_called_value_48;
            PyObject *tmp_kw_call_value_1_24;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_9;
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 273;
            tmp_kw_call_value_0_24 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_48, mod_consts[123]);

            if (tmp_kw_call_value_0_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[51];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_24);

                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[124]);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_24);

                exception_lineno = 275;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_24, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 272;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_47, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_24);
            Py_DECREF(tmp_kw_call_value_1_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_38;
            PyObject *tmp_ass_subscribed_38;
            PyObject *tmp_ass_subscript_38;
            tmp_ass_subvalue_38 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_38 == NULL)) {
                tmp_ass_subvalue_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_38 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_38 = mod_consts[125];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_kw_call_value_0_25;
            PyObject *tmp_called_value_50;
            PyObject *tmp_kw_call_value_1_25;
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 281;
            tmp_kw_call_value_0_25 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_50, mod_consts[126]);

            if (tmp_kw_call_value_0_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_25 = DICT_COPY(mod_consts[127]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 280;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_49, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_25);
            Py_DECREF(tmp_kw_call_value_1_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_39;
            PyObject *tmp_ass_subscribed_39;
            PyObject *tmp_ass_subscript_39;
            tmp_ass_subvalue_39 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_39 == NULL)) {
                tmp_ass_subvalue_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_39 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_39 = mod_consts[128];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_kw_call_value_0_26;
            PyObject *tmp_called_value_52;
            PyObject *tmp_kw_call_value_1_26;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_10;
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 289;
            tmp_kw_call_value_0_26 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_52, mod_consts[129]);

            if (tmp_kw_call_value_0_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[51];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_26);

                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[130]);
            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_26);

                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_26, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 288;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_26};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_51, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_26);
            Py_DECREF(tmp_kw_call_value_1_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_40;
            PyObject *tmp_ass_subscribed_40;
            PyObject *tmp_ass_subscript_40;
            tmp_ass_subvalue_40 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_40 == NULL)) {
                tmp_ass_subvalue_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_40 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_40 = mod_consts[131];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_53;
            PyObject *tmp_kw_call_value_0_27;
            PyObject *tmp_called_value_54;
            PyObject *tmp_kw_call_value_1_27;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_11;
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 297;
            tmp_kw_call_value_0_27 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_54, mod_consts[132]);

            if (tmp_kw_call_value_0_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_15 = mod_consts[51];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_27);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[133]);
            if (tmp_dict_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_27);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_27, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 296;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_27, tmp_kw_call_value_1_27};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_53, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_27);
            Py_DECREF(tmp_kw_call_value_1_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_41;
            PyObject *tmp_ass_subscribed_41;
            PyObject *tmp_ass_subscript_41;
            tmp_ass_subvalue_41 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_41 == NULL)) {
                tmp_ass_subvalue_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_41 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_41 = mod_consts[134];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_kw_call_value_0_28;
            PyObject *tmp_called_value_56;
            PyObject *tmp_kw_call_value_1_28;
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 305;
            tmp_kw_call_value_0_28 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_56, mod_consts[135]);

            if (tmp_kw_call_value_0_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_28 = DICT_COPY(mod_consts[136]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 304;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_28};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_55, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_28);
            Py_DECREF(tmp_kw_call_value_1_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_42;
            PyObject *tmp_ass_subscribed_42;
            PyObject *tmp_ass_subscript_42;
            tmp_ass_subvalue_42 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_42 == NULL)) {
                tmp_ass_subvalue_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_42 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_42 = mod_consts[137];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_kw_call_value_0_29;
            PyObject *tmp_called_value_58;
            PyObject *tmp_kw_call_value_1_29;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 315;
            tmp_kw_call_value_0_29 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_58, mod_consts[138]);

            if (tmp_kw_call_value_0_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[82];
            tmp_dict_value_16 = mod_consts[139];
            tmp_kw_call_value_1_29 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_29, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[83];
            tmp_dict_value_16 = mod_consts[140];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_29, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[88];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_29, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_kw_call_value_0_29);
            Py_DECREF(tmp_kw_call_value_1_29);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 314;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_29, tmp_kw_call_value_1_29};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_57, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_29);
            Py_DECREF(tmp_kw_call_value_1_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_43;
            PyObject *tmp_ass_subscribed_43;
            PyObject *tmp_ass_subscript_43;
            tmp_ass_subvalue_43 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_43 == NULL)) {
                tmp_ass_subvalue_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_43 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_43 = mod_consts[141];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_59;
            PyObject *tmp_kw_call_value_0_30;
            PyObject *tmp_called_value_60;
            PyObject *tmp_kw_call_value_1_30;
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 325;
            tmp_kw_call_value_0_30 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_60, mod_consts[142]);

            if (tmp_kw_call_value_0_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_30 = DICT_COPY(mod_consts[143]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 324;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_30};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_59, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_30);
            Py_DECREF(tmp_kw_call_value_1_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_44;
            PyObject *tmp_ass_subscribed_44;
            PyObject *tmp_ass_subscript_44;
            tmp_ass_subvalue_44 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_44 == NULL)) {
                tmp_ass_subvalue_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_44 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_44 = mod_consts[144];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_61;
            PyObject *tmp_kw_call_value_0_31;
            PyObject *tmp_called_value_62;
            PyObject *tmp_kw_call_value_1_31;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 335;
            tmp_kw_call_value_0_31 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_62, mod_consts[145]);

            if (tmp_kw_call_value_0_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[82];
            tmp_dict_value_17 = mod_consts[146];
            tmp_kw_call_value_1_31 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_31, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[83];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_31, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[88];
            tmp_dict_value_17 = mod_consts[147];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_31, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_kw_call_value_0_31);
            Py_DECREF(tmp_kw_call_value_1_31);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 334;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_31, tmp_kw_call_value_1_31};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_61, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_31);
            Py_DECREF(tmp_kw_call_value_1_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_45;
            PyObject *tmp_ass_subscribed_45;
            PyObject *tmp_ass_subscript_45;
            tmp_ass_subvalue_45 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_45 == NULL)) {
                tmp_ass_subvalue_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_45 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_45 = mod_consts[148];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_63;
            PyObject *tmp_kw_call_value_0_32;
            PyObject *tmp_called_value_64;
            PyObject *tmp_kw_call_value_1_32;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 345;
            tmp_kw_call_value_0_32 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_64, mod_consts[149]);

            if (tmp_kw_call_value_0_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_18 = mod_consts[93];
            tmp_dict_value_18 = mod_consts[150];
            tmp_kw_call_value_1_32 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[95];
            tmp_dict_value_18 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[96];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[97];
            tmp_dict_value_18 = mod_consts[150];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[98];
            tmp_dict_value_18 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[100];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[88];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_32, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_kw_call_value_0_32);
            Py_DECREF(tmp_kw_call_value_1_32);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 344;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_32, tmp_kw_call_value_1_32};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_63, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_32);
            Py_DECREF(tmp_kw_call_value_1_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_46;
            PyObject *tmp_ass_subscribed_46;
            PyObject *tmp_ass_subscript_46;
            tmp_ass_subvalue_46 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_46 == NULL)) {
                tmp_ass_subvalue_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_46 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_46 = mod_consts[151];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_65;
            PyObject *tmp_kw_call_value_0_33;
            PyObject *tmp_called_value_66;
            PyObject *tmp_kw_call_value_1_33;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 359;
            tmp_kw_call_value_0_33 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_66, mod_consts[152]);

            if (tmp_kw_call_value_0_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[93];
            tmp_dict_value_19 = mod_consts[153];
            tmp_kw_call_value_1_33 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[95];
            tmp_dict_value_19 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[96];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[97];
            tmp_dict_value_19 = mod_consts[153];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[98];
            tmp_dict_value_19 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[100];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_2 = "o";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[88];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_33, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_kw_call_value_0_33);
            Py_DECREF(tmp_kw_call_value_1_33);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 358;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_33, tmp_kw_call_value_1_33};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_65, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_33);
            Py_DECREF(tmp_kw_call_value_1_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_47;
            PyObject *tmp_ass_subscribed_47;
            PyObject *tmp_ass_subscript_47;
            tmp_ass_subvalue_47 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_47 == NULL)) {
                tmp_ass_subvalue_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_47 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_47 = mod_consts[154];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_67;
            PyObject *tmp_kw_call_value_0_34;
            PyObject *tmp_called_value_68;
            PyObject *tmp_kw_call_value_1_34;
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 373;
            tmp_kw_call_value_0_34 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_68, mod_consts[155]);

            if (tmp_kw_call_value_0_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_34 = DICT_COPY(mod_consts[156]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 372;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_34, tmp_kw_call_value_1_34};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_67, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_34);
            Py_DECREF(tmp_kw_call_value_1_34);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_48;
            PyObject *tmp_ass_subscribed_48;
            PyObject *tmp_ass_subscript_48;
            tmp_ass_subvalue_48 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_48 == NULL)) {
                tmp_ass_subvalue_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_48 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_48 = mod_consts[157];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_69;
            PyObject *tmp_kw_call_value_0_35;
            PyObject *tmp_called_value_70;
            PyObject *tmp_kw_call_value_1_35;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_12;
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 381;
            tmp_kw_call_value_0_35 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_70, mod_consts[158]);

            if (tmp_kw_call_value_0_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[51];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_35);

                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[159]);
            if (tmp_dict_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_35);

                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_35, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 380;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_35, tmp_kw_call_value_1_35};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_69, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_35);
            Py_DECREF(tmp_kw_call_value_1_35);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_49;
            PyObject *tmp_ass_subscribed_49;
            PyObject *tmp_ass_subscript_49;
            tmp_ass_subvalue_49 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_49 == NULL)) {
                tmp_ass_subvalue_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_49 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_49 = mod_consts[160];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_71;
            PyObject *tmp_kw_call_value_0_36;
            PyObject *tmp_called_value_72;
            PyObject *tmp_kw_call_value_1_36;
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 389;
            tmp_kw_call_value_0_36 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_72, mod_consts[161]);

            if (tmp_kw_call_value_0_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_36 = DICT_COPY(mod_consts[162]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 388;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_36, tmp_kw_call_value_1_36};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_71, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_36);
            Py_DECREF(tmp_kw_call_value_1_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_50;
            PyObject *tmp_ass_subscribed_50;
            PyObject *tmp_ass_subscript_50;
            tmp_ass_subvalue_50 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_50 == NULL)) {
                tmp_ass_subvalue_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_50 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_50 = mod_consts[163];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_73;
            PyObject *tmp_kw_call_value_0_37;
            PyObject *tmp_called_value_74;
            PyObject *tmp_kw_call_value_1_37;
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 397;
            tmp_kw_call_value_0_37 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_74, mod_consts[164]);

            if (tmp_kw_call_value_0_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_37 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 396;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_37, tmp_kw_call_value_1_37};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_73, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_37);
            Py_DECREF(tmp_kw_call_value_1_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_51;
            PyObject *tmp_ass_subscribed_51;
            PyObject *tmp_ass_subscript_51;
            tmp_ass_subvalue_51 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_51 == NULL)) {
                tmp_ass_subvalue_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_51 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_51 = mod_consts[165];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_75;
            PyObject *tmp_kw_call_value_0_38;
            PyObject *tmp_called_value_76;
            PyObject *tmp_kw_call_value_1_38;
            tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_75 == NULL)) {
                tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_76 == NULL)) {
                tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 403;
            tmp_kw_call_value_0_38 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_76, mod_consts[166]);

            if (tmp_kw_call_value_0_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_38 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 402;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_38, tmp_kw_call_value_1_38};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_75, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_38);
            Py_DECREF(tmp_kw_call_value_1_38);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_52;
            PyObject *tmp_ass_subscribed_52;
            PyObject *tmp_ass_subscript_52;
            tmp_ass_subvalue_52 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_52 == NULL)) {
                tmp_ass_subvalue_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_52 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_52 = mod_consts[167];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_77;
            PyObject *tmp_kw_call_value_0_39;
            PyObject *tmp_called_value_78;
            PyObject *tmp_kw_call_value_1_39;
            tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_77 == NULL)) {
                tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_78 == NULL)) {
                tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 409;
            tmp_kw_call_value_0_39 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_78, mod_consts[168]);

            if (tmp_kw_call_value_0_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_39 = DICT_COPY(mod_consts[57]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 408;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_39, tmp_kw_call_value_1_39};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_77, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_39);
            Py_DECREF(tmp_kw_call_value_1_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_53;
            PyObject *tmp_ass_subscribed_53;
            PyObject *tmp_ass_subscript_53;
            tmp_ass_subvalue_53 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_53 == NULL)) {
                tmp_ass_subvalue_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_53 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_53 = mod_consts[169];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_79;
            PyObject *tmp_kw_call_value_0_40;
            PyObject *tmp_called_value_80;
            PyObject *tmp_kw_call_value_1_40;
            tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_79 == NULL)) {
                tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_80 == NULL)) {
                tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 417;
            tmp_kw_call_value_0_40 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_80, mod_consts[170]);

            if (tmp_kw_call_value_0_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_40 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 416;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_40, tmp_kw_call_value_1_40};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_79, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_40);
            Py_DECREF(tmp_kw_call_value_1_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_54;
            PyObject *tmp_ass_subscribed_54;
            PyObject *tmp_ass_subscript_54;
            tmp_ass_subvalue_54 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_54 == NULL)) {
                tmp_ass_subvalue_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_54 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_54 = mod_consts[171];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_81;
            PyObject *tmp_kw_call_value_0_41;
            PyObject *tmp_called_value_82;
            PyObject *tmp_kw_call_value_1_41;
            tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_81 == NULL)) {
                tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 423;
            tmp_kw_call_value_0_41 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_82, mod_consts[172]);

            if (tmp_kw_call_value_0_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_41 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 422;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_41, tmp_kw_call_value_1_41};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_81, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_41);
            Py_DECREF(tmp_kw_call_value_1_41);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[173], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_55;
            PyObject *tmp_ass_subscribed_55;
            PyObject *tmp_ass_subscript_55;
            tmp_ass_subvalue_55 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_55 == NULL)) {
                tmp_ass_subvalue_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_55 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_55 = mod_consts[173];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_83;
            PyObject *tmp_kw_call_value_0_42;
            PyObject *tmp_called_value_84;
            PyObject *tmp_kw_call_value_1_42;
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_84 == NULL)) {
                tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 429;
            tmp_kw_call_value_0_42 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_84, mod_consts[174]);

            if (tmp_kw_call_value_0_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_42 = DICT_COPY(mod_consts[175]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 428;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_42, tmp_kw_call_value_1_42};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_83, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_42);
            Py_DECREF(tmp_kw_call_value_1_42);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_56;
            PyObject *tmp_ass_subscribed_56;
            PyObject *tmp_ass_subscript_56;
            tmp_ass_subvalue_56 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_56 == NULL)) {
                tmp_ass_subvalue_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_56 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_56 = mod_consts[176];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_85;
            PyObject *tmp_kw_call_value_0_43;
            PyObject *tmp_called_value_86;
            PyObject *tmp_kw_call_value_1_43;
            tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_85 == NULL)) {
                tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 437;
            tmp_kw_call_value_0_43 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_86, mod_consts[177]);

            if (tmp_kw_call_value_0_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_43 = DICT_COPY(mod_consts[178]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 436;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_43, tmp_kw_call_value_1_43};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_85, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_43);
            Py_DECREF(tmp_kw_call_value_1_43);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_57;
            PyObject *tmp_ass_subscribed_57;
            PyObject *tmp_ass_subscript_57;
            tmp_ass_subvalue_57 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_57 == NULL)) {
                tmp_ass_subvalue_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_57 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_57 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_57 = mod_consts[179];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_87;
            PyObject *tmp_kw_call_value_0_44;
            PyObject *tmp_called_value_88;
            PyObject *tmp_kw_call_value_1_44;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_13;
            tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_87 == NULL)) {
                tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_88 == NULL)) {
                tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 445;
            tmp_kw_call_value_0_44 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_88, mod_consts[180]);

            if (tmp_kw_call_value_0_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_21 = mod_consts[51];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_44);

                exception_lineno = 447;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[181]);
            if (tmp_dict_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_44);

                exception_lineno = 447;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_44, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 444;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_44, tmp_kw_call_value_1_44};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_87, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_44);
            Py_DECREF(tmp_kw_call_value_1_44);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_58;
            PyObject *tmp_ass_subscribed_58;
            PyObject *tmp_ass_subscript_58;
            tmp_ass_subvalue_58 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_58 == NULL)) {
                tmp_ass_subvalue_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_58 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_58 = mod_consts[182];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_89;
            PyObject *tmp_kw_call_value_0_45;
            PyObject *tmp_called_value_90;
            PyObject *tmp_kw_call_value_1_45;
            tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_89 == NULL)) {
                tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_90 == NULL)) {
                tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 453;
            tmp_kw_call_value_0_45 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_90, mod_consts[183]);

            if (tmp_kw_call_value_0_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_45 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 452;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_45, tmp_kw_call_value_1_45};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_89, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_45);
            Py_DECREF(tmp_kw_call_value_1_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_59;
            PyObject *tmp_ass_subscribed_59;
            PyObject *tmp_ass_subscript_59;
            tmp_ass_subvalue_59 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_59 == NULL)) {
                tmp_ass_subvalue_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_59 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_59 = mod_consts[184];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_91;
            PyObject *tmp_kw_call_value_0_46;
            PyObject *tmp_called_value_92;
            PyObject *tmp_kw_call_value_1_46;
            tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_91 == NULL)) {
                tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_92 == NULL)) {
                tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 459;
            tmp_kw_call_value_0_46 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_92, mod_consts[185]);

            if (tmp_kw_call_value_0_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_46 = DICT_COPY(mod_consts[186]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 458;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_46, tmp_kw_call_value_1_46};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_91, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_46);
            Py_DECREF(tmp_kw_call_value_1_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[187], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_60;
            PyObject *tmp_ass_subscribed_60;
            PyObject *tmp_ass_subscript_60;
            tmp_ass_subvalue_60 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_60 == NULL)) {
                tmp_ass_subvalue_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_60 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_60 = mod_consts[187];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_93;
            PyObject *tmp_kw_call_value_0_47;
            PyObject *tmp_called_value_94;
            PyObject *tmp_kw_call_value_1_47;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_14;
            tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_93 == NULL)) {
                tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_94 == NULL)) {
                tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 467;
            tmp_kw_call_value_0_47 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_94, mod_consts[188]);

            if (tmp_kw_call_value_0_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[51];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_47);

                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[189]);
            if (tmp_dict_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_47);

                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_47, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 466;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_47, tmp_kw_call_value_1_47};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_93, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_47);
            Py_DECREF(tmp_kw_call_value_1_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_61;
            PyObject *tmp_ass_subscribed_61;
            PyObject *tmp_ass_subscript_61;
            tmp_ass_subvalue_61 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_61 == NULL)) {
                tmp_ass_subvalue_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_61 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_61 = mod_consts[190];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_kw_call_value_0_48;
            PyObject *tmp_called_value_96;
            PyObject *tmp_kw_call_value_1_48;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_15;
            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_95 == NULL)) {
                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_96 == NULL)) {
                tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 475;
            tmp_kw_call_value_0_48 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_96, mod_consts[191]);

            if (tmp_kw_call_value_0_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[51];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_48);

                exception_lineno = 477;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[192]);
            if (tmp_dict_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_48);

                exception_lineno = 477;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_48, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 474;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_48, tmp_kw_call_value_1_48};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_95, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_48);
            Py_DECREF(tmp_kw_call_value_1_48);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_62;
            PyObject *tmp_ass_subscribed_62;
            PyObject *tmp_ass_subscript_62;
            tmp_ass_subvalue_62 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_62 == NULL)) {
                tmp_ass_subvalue_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_62 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_62 = mod_consts[193];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_kw_call_value_0_49;
            PyObject *tmp_called_value_98;
            PyObject *tmp_kw_call_value_1_49;
            tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_97 == NULL)) {
                tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_98 == NULL)) {
                tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 483;
            tmp_kw_call_value_0_49 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_98, mod_consts[194]);

            if (tmp_kw_call_value_0_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_49 = DICT_COPY(mod_consts[195]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 482;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_49, tmp_kw_call_value_1_49};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_97, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_49);
            Py_DECREF(tmp_kw_call_value_1_49);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_63;
            PyObject *tmp_ass_subscribed_63;
            PyObject *tmp_ass_subscript_63;
            tmp_ass_subvalue_63 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_63 == NULL)) {
                tmp_ass_subvalue_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_63 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_63 = mod_consts[196];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_99;
            PyObject *tmp_kw_call_value_0_50;
            PyObject *tmp_called_value_100;
            PyObject *tmp_kw_call_value_1_50;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_16;
            tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_99 == NULL)) {
                tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_100 == NULL)) {
                tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 491;
            tmp_kw_call_value_0_50 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_100, mod_consts[197]);

            if (tmp_kw_call_value_0_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_24 = mod_consts[51];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_50);

                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[198]);
            if (tmp_dict_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_50);

                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_50 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_50, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 490;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_50, tmp_kw_call_value_1_50};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_99, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_50);
            Py_DECREF(tmp_kw_call_value_1_50);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[199], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_64;
            PyObject *tmp_ass_subscribed_64;
            PyObject *tmp_ass_subscript_64;
            tmp_ass_subvalue_64 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_64 == NULL)) {
                tmp_ass_subvalue_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_64 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_64 = mod_consts[199];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_101;
            PyObject *tmp_kw_call_value_0_51;
            PyObject *tmp_called_value_102;
            PyObject *tmp_kw_call_value_1_51;
            tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_101 == NULL)) {
                tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 499;
            tmp_kw_call_value_0_51 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_102, mod_consts[200]);

            if (tmp_kw_call_value_0_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_51 = DICT_COPY(mod_consts[201]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 498;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_51, tmp_kw_call_value_1_51};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_101, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_51);
            Py_DECREF(tmp_kw_call_value_1_51);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[202], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_65;
            PyObject *tmp_ass_subscribed_65;
            PyObject *tmp_ass_subscript_65;
            tmp_ass_subvalue_65 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_65 == NULL)) {
                tmp_ass_subvalue_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_65 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_65 = mod_consts[202];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_kw_call_value_0_52;
            PyObject *tmp_called_value_104;
            PyObject *tmp_kw_call_value_1_52;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_103 == NULL)) {
                tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_104 == NULL)) {
                tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 507;
            tmp_kw_call_value_0_52 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_104, mod_consts[203]);

            if (tmp_kw_call_value_0_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[95];
            tmp_dict_value_25 = mod_consts[204];
            tmp_kw_call_value_1_52 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_17;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[205];
                tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_dict_value_25 == NULL)) {
                    tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_dict_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 510;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[98];
                tmp_dict_value_25 = mod_consts[206];
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[207];
                tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_dict_value_25 == NULL)) {
                    tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                }

                if (tmp_dict_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 512;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[84];
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[208]);
                if (tmp_dict_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                Py_DECREF(tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[85];
                tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_dict_value_25 == NULL)) {
                    tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                }

                if (tmp_dict_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 514;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
                tmp_dict_key_25 = mod_consts[88];
                tmp_dict_value_25 = mod_consts[209];
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_52, tmp_dict_key_25, tmp_dict_value_25);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_kw_call_value_0_52);
            Py_DECREF(tmp_kw_call_value_1_52);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 506;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_52, tmp_kw_call_value_1_52};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_103, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_52);
            Py_DECREF(tmp_kw_call_value_1_52);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[210], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_66;
            PyObject *tmp_ass_subscribed_66;
            PyObject *tmp_ass_subscript_66;
            tmp_ass_subvalue_66 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_66 == NULL)) {
                tmp_ass_subvalue_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_66 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_66 = mod_consts[210];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_105;
            PyObject *tmp_kw_call_value_0_53;
            PyObject *tmp_called_value_106;
            PyObject *tmp_kw_call_value_1_53;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_105 == NULL)) {
                tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_106 == NULL)) {
                tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 521;
            tmp_kw_call_value_0_53 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_106, mod_consts[211]);

            if (tmp_kw_call_value_0_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[95];
            tmp_dict_value_26 = mod_consts[30];
            tmp_kw_call_value_1_53 = _PyDict_NewPresized( 7 );
            {
                PyObject *tmp_expression_value_18;
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[205];
                tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[31]);

                if (unlikely(tmp_dict_value_26 == NULL)) {
                    tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                }

                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 524;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[98];
                tmp_dict_value_26 = mod_consts[212];
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[207];
                tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[33]);

                if (unlikely(tmp_dict_value_26 == NULL)) {
                    tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                }

                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 526;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[84];
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                }

                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 527;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[213]);
                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 527;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                Py_DECREF(tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[85];
                tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[36]);

                if (unlikely(tmp_dict_value_26 == NULL)) {
                    tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                }

                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 528;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
                tmp_dict_key_26 = mod_consts[88];
                tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_dict_value_26 == NULL)) {
                    tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
                }

                if (tmp_dict_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 529;
                    type_description_2 = "o";
                    goto dict_build_exception_14;
                }
                tmp_res = PyDict_SetItem(tmp_kw_call_value_1_53, tmp_dict_key_26, tmp_dict_value_26);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_kw_call_value_0_53);
            Py_DECREF(tmp_kw_call_value_1_53);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 520;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_53, tmp_kw_call_value_1_53};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_105, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_53);
            Py_DECREF(tmp_kw_call_value_1_53);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_67;
            PyObject *tmp_ass_subscribed_67;
            PyObject *tmp_ass_subscript_67;
            tmp_ass_subvalue_67 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_67 == NULL)) {
                tmp_ass_subvalue_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_67 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_67 = mod_consts[214];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_107;
            PyObject *tmp_kw_call_value_0_54;
            PyObject *tmp_called_value_108;
            PyObject *tmp_kw_call_value_1_54;
            tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_107 == NULL)) {
                tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_108 == NULL)) {
                tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 535;
            tmp_kw_call_value_0_54 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_108, mod_consts[215]);

            if (tmp_kw_call_value_0_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_54 = DICT_COPY(mod_consts[216]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 534;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_54, tmp_kw_call_value_1_54};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_107, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_54);
            Py_DECREF(tmp_kw_call_value_1_54);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[217], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_68;
            PyObject *tmp_ass_subscribed_68;
            PyObject *tmp_ass_subscript_68;
            tmp_ass_subvalue_68 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_68 == NULL)) {
                tmp_ass_subvalue_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_68 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_68 = mod_consts[217];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_109;
            PyObject *tmp_kw_call_value_0_55;
            PyObject *tmp_called_value_110;
            PyObject *tmp_kw_call_value_1_55;
            tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_109 == NULL)) {
                tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_110 == NULL)) {
                tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 545;
            tmp_kw_call_value_0_55 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_110, mod_consts[218]);

            if (tmp_kw_call_value_0_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_55 = DICT_COPY(mod_consts[219]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 544;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_55, tmp_kw_call_value_1_55};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_109, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_55);
            Py_DECREF(tmp_kw_call_value_1_55);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[220], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_69;
            PyObject *tmp_ass_subscribed_69;
            PyObject *tmp_ass_subscript_69;
            tmp_ass_subvalue_69 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_69 == NULL)) {
                tmp_ass_subvalue_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_69 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_69 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_69 = mod_consts[220];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_111;
            PyObject *tmp_kw_call_value_0_56;
            PyObject *tmp_called_value_112;
            PyObject *tmp_kw_call_value_1_56;
            tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_111 == NULL)) {
                tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_112 == NULL)) {
                tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 555;
            tmp_kw_call_value_0_56 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_112, mod_consts[221]);

            if (tmp_kw_call_value_0_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_56 = DICT_COPY(mod_consts[222]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 554;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_56, tmp_kw_call_value_1_56};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_111, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_56);
            Py_DECREF(tmp_kw_call_value_1_56);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[223], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_70;
            PyObject *tmp_ass_subscribed_70;
            PyObject *tmp_ass_subscript_70;
            tmp_ass_subvalue_70 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_70 == NULL)) {
                tmp_ass_subvalue_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_70 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_70 = mod_consts[223];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_113;
            PyObject *tmp_kw_call_value_0_57;
            PyObject *tmp_called_value_114;
            PyObject *tmp_kw_call_value_1_57;
            tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_113 == NULL)) {
                tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_114 == NULL)) {
                tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 565;
            tmp_kw_call_value_0_57 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_114, mod_consts[224]);

            if (tmp_kw_call_value_0_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_57 = DICT_COPY(mod_consts[225]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 564;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_57, tmp_kw_call_value_1_57};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_113, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_57);
            Py_DECREF(tmp_kw_call_value_1_57);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_71;
            PyObject *tmp_ass_subscribed_71;
            PyObject *tmp_ass_subscript_71;
            tmp_ass_subvalue_71 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_71 == NULL)) {
                tmp_ass_subvalue_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_71 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_71 = mod_consts[226];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_115;
            PyObject *tmp_kw_call_value_0_58;
            PyObject *tmp_called_value_116;
            PyObject *tmp_kw_call_value_1_58;
            tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_115 == NULL)) {
                tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_116 == NULL)) {
                tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 573;
            tmp_kw_call_value_0_58 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_116, mod_consts[227]);

            if (tmp_kw_call_value_0_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 573;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_58 = DICT_COPY(mod_consts[228]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 572;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_58, tmp_kw_call_value_1_58};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_115, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_58);
            Py_DECREF(tmp_kw_call_value_1_58);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[229], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_72;
            PyObject *tmp_ass_subscribed_72;
            PyObject *tmp_ass_subscript_72;
            tmp_ass_subvalue_72 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_72 == NULL)) {
                tmp_ass_subvalue_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_72 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_72 = mod_consts[229];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_117;
            PyObject *tmp_kw_call_value_0_59;
            PyObject *tmp_called_value_118;
            PyObject *tmp_kw_call_value_1_59;
            tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_117 == NULL)) {
                tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_118 == NULL)) {
                tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 581;
            tmp_kw_call_value_0_59 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_118, mod_consts[230]);

            if (tmp_kw_call_value_0_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_59 = DICT_COPY(mod_consts[231]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 580;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_59, tmp_kw_call_value_1_59};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_117, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_59);
            Py_DECREF(tmp_kw_call_value_1_59);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[232], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_73;
            PyObject *tmp_ass_subscribed_73;
            PyObject *tmp_ass_subscript_73;
            tmp_ass_subvalue_73 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_73 == NULL)) {
                tmp_ass_subvalue_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_73 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_73 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_73 = mod_consts[232];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_119;
            PyObject *tmp_kw_call_value_0_60;
            PyObject *tmp_called_value_120;
            PyObject *tmp_kw_call_value_1_60;
            tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_119 == NULL)) {
                tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_120 == NULL)) {
                tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 589;
            tmp_kw_call_value_0_60 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_120, mod_consts[233]);

            if (tmp_kw_call_value_0_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_60 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 588;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_60, tmp_kw_call_value_1_60};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_119, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_60);
            Py_DECREF(tmp_kw_call_value_1_60);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[234], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_74;
            PyObject *tmp_ass_subscribed_74;
            PyObject *tmp_ass_subscript_74;
            tmp_ass_subvalue_74 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_74 == NULL)) {
                tmp_ass_subvalue_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_74 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_74 = mod_consts[234];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_121;
            PyObject *tmp_kw_call_value_0_61;
            PyObject *tmp_called_value_122;
            PyObject *tmp_kw_call_value_1_61;
            tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_121 == NULL)) {
                tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_122 == NULL)) {
                tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 595;
            tmp_kw_call_value_0_61 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_122, mod_consts[235]);

            if (tmp_kw_call_value_0_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_61 = DICT_COPY(mod_consts[236]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 594;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_61, tmp_kw_call_value_1_61};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_121, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_61);
            Py_DECREF(tmp_kw_call_value_1_61);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[237], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_75;
            PyObject *tmp_ass_subscribed_75;
            PyObject *tmp_ass_subscript_75;
            tmp_ass_subvalue_75 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_75 == NULL)) {
                tmp_ass_subvalue_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_75 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_75 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_75 = mod_consts[237];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_123;
            PyObject *tmp_kw_call_value_0_62;
            PyObject *tmp_called_value_124;
            PyObject *tmp_kw_call_value_1_62;
            tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_123 == NULL)) {
                tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_124 == NULL)) {
                tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 603;
            tmp_kw_call_value_0_62 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_124, mod_consts[238]);

            if (tmp_kw_call_value_0_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 603;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_62 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 602;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_62, tmp_kw_call_value_1_62};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_123, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_62);
            Py_DECREF(tmp_kw_call_value_1_62);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[239], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_76;
            PyObject *tmp_ass_subscribed_76;
            PyObject *tmp_ass_subscript_76;
            tmp_ass_subvalue_76 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_76 == NULL)) {
                tmp_ass_subvalue_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_76 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_76 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_76 = mod_consts[239];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_125;
            PyObject *tmp_kw_call_value_0_63;
            PyObject *tmp_called_value_126;
            PyObject *tmp_kw_call_value_1_63;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_19;
            tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_125 == NULL)) {
                tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_126 == NULL)) {
                tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 609;
            tmp_kw_call_value_0_63 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_126, mod_consts[240]);

            if (tmp_kw_call_value_0_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 609;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[51];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_63);

                exception_lineno = 611;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[241]);
            if (tmp_dict_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_63);

                exception_lineno = 611;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_63 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_63, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 608;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_63, tmp_kw_call_value_1_63};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_125, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_63);
            Py_DECREF(tmp_kw_call_value_1_63);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[242], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_77;
            PyObject *tmp_ass_subscribed_77;
            PyObject *tmp_ass_subscript_77;
            tmp_ass_subvalue_77 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_77 == NULL)) {
                tmp_ass_subvalue_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_77 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_77 = mod_consts[242];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_127;
            PyObject *tmp_kw_call_value_0_64;
            PyObject *tmp_called_value_128;
            PyObject *tmp_kw_call_value_1_64;
            tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_127 == NULL)) {
                tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_128 == NULL)) {
                tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 617;
            tmp_kw_call_value_0_64 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_128, mod_consts[243]);

            if (tmp_kw_call_value_0_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_64 = DICT_COPY(mod_consts[236]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 616;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_64, tmp_kw_call_value_1_64};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_127, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_64);
            Py_DECREF(tmp_kw_call_value_1_64);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[244], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_78;
            PyObject *tmp_ass_subscribed_78;
            PyObject *tmp_ass_subscript_78;
            tmp_ass_subvalue_78 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_78 == NULL)) {
                tmp_ass_subvalue_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_78 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_78 = mod_consts[244];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_129;
            PyObject *tmp_kw_call_value_0_65;
            PyObject *tmp_called_value_130;
            PyObject *tmp_kw_call_value_1_65;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_20;
            tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_129 == NULL)) {
                tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_130 == NULL)) {
                tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 625;
            tmp_kw_call_value_0_65 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_130, mod_consts[245]);

            if (tmp_kw_call_value_0_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_28 = mod_consts[51];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_65);

                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[246]);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_65);

                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_65 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_65, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 624;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_65, tmp_kw_call_value_1_65};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_129, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_65);
            Py_DECREF(tmp_kw_call_value_1_65);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[247], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_79;
            PyObject *tmp_ass_subscribed_79;
            PyObject *tmp_ass_subscript_79;
            tmp_ass_subvalue_79 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_79 == NULL)) {
                tmp_ass_subvalue_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_79 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_79 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_79 = mod_consts[247];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_131;
            PyObject *tmp_kw_call_value_0_66;
            PyObject *tmp_called_value_132;
            PyObject *tmp_kw_call_value_1_66;
            tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_131 == NULL)) {
                tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_132 == NULL)) {
                tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 633;
            tmp_kw_call_value_0_66 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_132, mod_consts[248]);

            if (tmp_kw_call_value_0_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_66 = DICT_COPY(mod_consts[249]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 632;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_66, tmp_kw_call_value_1_66};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_131, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_66);
            Py_DECREF(tmp_kw_call_value_1_66);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[250], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_80;
            PyObject *tmp_ass_subscribed_80;
            PyObject *tmp_ass_subscript_80;
            tmp_ass_subvalue_80 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_80 == NULL)) {
                tmp_ass_subvalue_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_80 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_80 = mod_consts[250];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_133;
            PyObject *tmp_kw_call_value_0_67;
            PyObject *tmp_called_value_134;
            PyObject *tmp_kw_call_value_1_67;
            tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_133 == NULL)) {
                tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_134 == NULL)) {
                tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 641;
            tmp_kw_call_value_0_67 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_134, mod_consts[251]);

            if (tmp_kw_call_value_0_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_67 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 640;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_67, tmp_kw_call_value_1_67};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_133, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_67);
            Py_DECREF(tmp_kw_call_value_1_67);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_81;
            PyObject *tmp_ass_subscribed_81;
            PyObject *tmp_ass_subscript_81;
            tmp_ass_subvalue_81 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_81 == NULL)) {
                tmp_ass_subvalue_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_81 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_81 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_81 = mod_consts[252];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_135;
            PyObject *tmp_kw_call_value_0_68;
            PyObject *tmp_called_value_136;
            PyObject *tmp_kw_call_value_1_68;
            tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_135 == NULL)) {
                tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_136 == NULL)) {
                tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 647;
            tmp_kw_call_value_0_68 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_136, mod_consts[253]);

            if (tmp_kw_call_value_0_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_68 = DICT_COPY(mod_consts[254]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 646;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_68, tmp_kw_call_value_1_68};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_135, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_68);
            Py_DECREF(tmp_kw_call_value_1_68);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[255], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_82;
            PyObject *tmp_ass_subscribed_82;
            PyObject *tmp_ass_subscript_82;
            tmp_ass_subvalue_82 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_82 == NULL)) {
                tmp_ass_subvalue_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_82 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_82 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_82 = mod_consts[255];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_137;
            PyObject *tmp_kw_call_value_0_69;
            PyObject *tmp_called_value_138;
            PyObject *tmp_kw_call_value_1_69;
            tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_137 == NULL)) {
                tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_138 == NULL)) {
                tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 655;
            tmp_kw_call_value_0_69 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_138, mod_consts[256]);

            if (tmp_kw_call_value_0_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_69 = DICT_COPY(mod_consts[257]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 654;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_69, tmp_kw_call_value_1_69};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_137, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_69);
            Py_DECREF(tmp_kw_call_value_1_69);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[258], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_83;
            PyObject *tmp_ass_subscribed_83;
            PyObject *tmp_ass_subscript_83;
            tmp_ass_subvalue_83 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_83 == NULL)) {
                tmp_ass_subvalue_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_83 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_83 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_83 = mod_consts[258];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_139;
            PyObject *tmp_kw_call_value_0_70;
            PyObject *tmp_called_value_140;
            PyObject *tmp_kw_call_value_1_70;
            tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_139 == NULL)) {
                tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_140 == NULL)) {
                tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 663;
            tmp_kw_call_value_0_70 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_140, mod_consts[259]);

            if (tmp_kw_call_value_0_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 663;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_70 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 662;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_70, tmp_kw_call_value_1_70};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_139, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_70);
            Py_DECREF(tmp_kw_call_value_1_70);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[260], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_84;
            PyObject *tmp_ass_subscribed_84;
            PyObject *tmp_ass_subscript_84;
            tmp_ass_subvalue_84 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_84 == NULL)) {
                tmp_ass_subvalue_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_84 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_84 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_84 = mod_consts[260];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 662;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_141;
            PyObject *tmp_kw_call_value_0_71;
            PyObject *tmp_called_value_142;
            PyObject *tmp_kw_call_value_1_71;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_141 == NULL)) {
                tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_142 == NULL)) {
                tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 669;
            tmp_kw_call_value_0_71 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_142, mod_consts[261]);

            if (tmp_kw_call_value_0_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[82];
            tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_29 == NULL)) {
                tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_71);

                exception_lineno = 671;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_71 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_71, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 668;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_71, tmp_kw_call_value_1_71};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_141, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_71);
            Py_DECREF(tmp_kw_call_value_1_71);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[262], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_85;
            PyObject *tmp_ass_subscribed_85;
            PyObject *tmp_ass_subscript_85;
            tmp_ass_subvalue_85 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_85 == NULL)) {
                tmp_ass_subvalue_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_85 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_85 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_85 = mod_consts[262];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_143;
            PyObject *tmp_kw_call_value_0_72;
            PyObject *tmp_called_value_144;
            PyObject *tmp_kw_call_value_1_72;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_21;
            tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_143 == NULL)) {
                tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_144 == NULL)) {
                tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 677;
            tmp_kw_call_value_0_72 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_144, mod_consts[263]);

            if (tmp_kw_call_value_0_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_30 = mod_consts[51];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_72);

                exception_lineno = 679;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[264]);
            if (tmp_dict_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_72);

                exception_lineno = 679;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_72 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_72, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 676;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_72, tmp_kw_call_value_1_72};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_143, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_72);
            Py_DECREF(tmp_kw_call_value_1_72);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[265], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_86;
            PyObject *tmp_ass_subscribed_86;
            PyObject *tmp_ass_subscript_86;
            tmp_ass_subvalue_86 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_86 == NULL)) {
                tmp_ass_subvalue_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_86 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_86 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_86 = mod_consts[265];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_145;
            PyObject *tmp_kw_call_value_0_73;
            PyObject *tmp_called_value_146;
            PyObject *tmp_kw_call_value_1_73;
            tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_145 == NULL)) {
                tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_146 == NULL)) {
                tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 685;
            tmp_kw_call_value_0_73 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_146, mod_consts[266]);

            if (tmp_kw_call_value_0_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_73 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 684;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_73, tmp_kw_call_value_1_73};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_145, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_73);
            Py_DECREF(tmp_kw_call_value_1_73);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_87;
            PyObject *tmp_ass_subscribed_87;
            PyObject *tmp_ass_subscript_87;
            tmp_ass_subvalue_87 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_87 == NULL)) {
                tmp_ass_subvalue_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_87 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_87 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_87 = mod_consts[267];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_147;
            PyObject *tmp_kw_call_value_0_74;
            PyObject *tmp_called_value_148;
            PyObject *tmp_kw_call_value_1_74;
            tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_147 == NULL)) {
                tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_148 == NULL)) {
                tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 691;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 691;
            tmp_kw_call_value_0_74 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_148, mod_consts[268]);

            if (tmp_kw_call_value_0_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 691;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_74 = DICT_COPY(mod_consts[269]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 690;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_74, tmp_kw_call_value_1_74};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_147, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_74);
            Py_DECREF(tmp_kw_call_value_1_74);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[270], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_88;
            PyObject *tmp_ass_subscribed_88;
            PyObject *tmp_ass_subscript_88;
            tmp_ass_subvalue_88 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_88 == NULL)) {
                tmp_ass_subvalue_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_88 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_88 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_88 = mod_consts[270];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_149;
            PyObject *tmp_kw_call_value_0_75;
            PyObject *tmp_called_value_150;
            PyObject *tmp_kw_call_value_1_75;
            tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_149 == NULL)) {
                tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_150 == NULL)) {
                tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 699;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 699;
            tmp_kw_call_value_0_75 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_150, mod_consts[271]);

            if (tmp_kw_call_value_0_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 699;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_75 = DICT_COPY(mod_consts[272]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 698;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_75, tmp_kw_call_value_1_75};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_149, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_75);
            Py_DECREF(tmp_kw_call_value_1_75);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[273], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_89;
            PyObject *tmp_ass_subscribed_89;
            PyObject *tmp_ass_subscript_89;
            tmp_ass_subvalue_89 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_89 == NULL)) {
                tmp_ass_subvalue_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_89 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_89 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_89 = mod_consts[273];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_89, tmp_ass_subscript_89, tmp_ass_subvalue_89);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_151;
            PyObject *tmp_kw_call_value_0_76;
            PyObject *tmp_called_value_152;
            PyObject *tmp_kw_call_value_1_76;
            tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_151 == NULL)) {
                tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_152 == NULL)) {
                tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 707;
            tmp_kw_call_value_0_76 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_152, mod_consts[274]);

            if (tmp_kw_call_value_0_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_76 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 706;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_76, tmp_kw_call_value_1_76};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_151, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_76);
            Py_DECREF(tmp_kw_call_value_1_76);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[275], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_90;
            PyObject *tmp_ass_subscribed_90;
            PyObject *tmp_ass_subscript_90;
            tmp_ass_subvalue_90 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_90 == NULL)) {
                tmp_ass_subvalue_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_90 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_90 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_90 = mod_consts[275];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_90, tmp_ass_subscript_90, tmp_ass_subvalue_90);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_153;
            PyObject *tmp_kw_call_value_0_77;
            PyObject *tmp_called_value_154;
            PyObject *tmp_kw_call_value_1_77;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_22;
            tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_153 == NULL)) {
                tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_154 == NULL)) {
                tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 713;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 713;
            tmp_kw_call_value_0_77 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_154, mod_consts[276]);

            if (tmp_kw_call_value_0_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 713;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_31 = mod_consts[51];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_77);

                exception_lineno = 715;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[277]);
            if (tmp_dict_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_77);

                exception_lineno = 715;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_77 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_77, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 712;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_77, tmp_kw_call_value_1_77};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_153, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_77);
            Py_DECREF(tmp_kw_call_value_1_77);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[278], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_91;
            PyObject *tmp_ass_subscribed_91;
            PyObject *tmp_ass_subscript_91;
            tmp_ass_subvalue_91 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_91 == NULL)) {
                tmp_ass_subvalue_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_91 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_91 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_91 = mod_consts[278];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_91, tmp_ass_subscript_91, tmp_ass_subvalue_91);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_155;
            PyObject *tmp_kw_call_value_0_78;
            PyObject *tmp_called_value_156;
            PyObject *tmp_kw_call_value_1_78;
            tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_155 == NULL)) {
                tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_156 == NULL)) {
                tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 721;
            tmp_kw_call_value_0_78 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_156, mod_consts[279]);

            if (tmp_kw_call_value_0_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_78 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 720;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_78, tmp_kw_call_value_1_78};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_155, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_78);
            Py_DECREF(tmp_kw_call_value_1_78);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[280], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_92;
            PyObject *tmp_ass_subscribed_92;
            PyObject *tmp_ass_subscript_92;
            tmp_ass_subvalue_92 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_92 == NULL)) {
                tmp_ass_subvalue_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_92 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_92 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_92 = mod_consts[280];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_92, tmp_ass_subscript_92, tmp_ass_subvalue_92);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_157;
            PyObject *tmp_kw_call_value_0_79;
            PyObject *tmp_called_value_158;
            PyObject *tmp_kw_call_value_1_79;
            tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_157 == NULL)) {
                tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_158 == NULL)) {
                tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 727;
            tmp_kw_call_value_0_79 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_158, mod_consts[281]);

            if (tmp_kw_call_value_0_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_79 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 726;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_79, tmp_kw_call_value_1_79};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_157, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_79);
            Py_DECREF(tmp_kw_call_value_1_79);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[282], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_93;
            PyObject *tmp_ass_subscribed_93;
            PyObject *tmp_ass_subscript_93;
            tmp_ass_subvalue_93 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_93 == NULL)) {
                tmp_ass_subvalue_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_93 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_93 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_93 = mod_consts[282];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_93, tmp_ass_subscript_93, tmp_ass_subvalue_93);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_159;
            PyObject *tmp_kw_call_value_0_80;
            PyObject *tmp_called_value_160;
            PyObject *tmp_kw_call_value_1_80;
            tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_159 == NULL)) {
                tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_160 == NULL)) {
                tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 733;
            tmp_kw_call_value_0_80 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_160, mod_consts[283]);

            if (tmp_kw_call_value_0_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_80 = DICT_COPY(mod_consts[284]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 732;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_80, tmp_kw_call_value_1_80};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_159, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_80);
            Py_DECREF(tmp_kw_call_value_1_80);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[285], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_94;
            PyObject *tmp_ass_subscribed_94;
            PyObject *tmp_ass_subscript_94;
            tmp_ass_subvalue_94 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_94 == NULL)) {
                tmp_ass_subvalue_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_94 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_94 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_94 = mod_consts[285];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_94, tmp_ass_subscript_94, tmp_ass_subvalue_94);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_161;
            PyObject *tmp_kw_call_value_0_81;
            PyObject *tmp_called_value_162;
            PyObject *tmp_kw_call_value_1_81;
            tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_161 == NULL)) {
                tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_162 == NULL)) {
                tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 741;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 741;
            tmp_kw_call_value_0_81 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_162, mod_consts[286]);

            if (tmp_kw_call_value_0_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 741;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_81 = MAKE_DICT_EMPTY();
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 740;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_81, tmp_kw_call_value_1_81};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_161, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_81);
            Py_DECREF(tmp_kw_call_value_1_81);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[287], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_95;
            PyObject *tmp_ass_subscribed_95;
            PyObject *tmp_ass_subscript_95;
            tmp_ass_subvalue_95 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_95 == NULL)) {
                tmp_ass_subvalue_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_95 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_95 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_95 = mod_consts[287];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_163;
            PyObject *tmp_kw_call_value_0_82;
            PyObject *tmp_called_value_164;
            PyObject *tmp_kw_call_value_1_82;
            tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_163 == NULL)) {
                tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_164 == NULL)) {
                tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 747;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 747;
            tmp_kw_call_value_0_82 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_164, mod_consts[288]);

            if (tmp_kw_call_value_0_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 747;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_82 = DICT_COPY(mod_consts[289]);
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 746;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_82, tmp_kw_call_value_1_82};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_163, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_82);
            Py_DECREF(tmp_kw_call_value_1_82);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[290], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_96;
            PyObject *tmp_ass_subscribed_96;
            PyObject *tmp_ass_subscript_96;
            tmp_ass_subvalue_96 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_96 == NULL)) {
                tmp_ass_subvalue_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_96 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_96 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_96 = mod_consts[290];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_165;
            PyObject *tmp_kw_call_value_0_83;
            PyObject *tmp_called_value_166;
            PyObject *tmp_kw_call_value_1_83;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_165 == NULL)) {
                tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_166 == NULL)) {
                tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 756;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 756;
            tmp_kw_call_value_0_83 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_166, mod_consts[291]);

            if (tmp_kw_call_value_0_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 756;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[82];
            tmp_dict_value_32 = mod_consts[292];
            tmp_kw_call_value_1_83 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_83, tmp_dict_key_32, tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[83];
            tmp_dict_value_32 = mod_consts[293];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_83, tmp_dict_key_32, tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[88];
            tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_dict_value_32 == NULL)) {
                tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_dict_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 760;
                type_description_2 = "o";
                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_83, tmp_dict_key_32, tmp_dict_value_32);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_15;
            // Exception handling pass through code for dict_build:
            dict_build_exception_15:;
            Py_DECREF(tmp_kw_call_value_0_83);
            Py_DECREF(tmp_kw_call_value_1_83);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_15:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 755;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_83, tmp_kw_call_value_1_83};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_165, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_83);
            Py_DECREF(tmp_kw_call_value_1_83);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[294], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_97;
            PyObject *tmp_ass_subscribed_97;
            PyObject *tmp_ass_subscript_97;
            tmp_ass_subvalue_97 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_97 == NULL)) {
                tmp_ass_subvalue_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_97 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_97 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_97 = mod_consts[294];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_167;
            PyObject *tmp_kw_call_value_0_84;
            PyObject *tmp_called_value_168;
            PyObject *tmp_kw_call_value_1_84;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_167 == NULL)) {
                tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_168 == NULL)) {
                tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_168 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 766;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 766;
            tmp_kw_call_value_0_84 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_168, mod_consts[295]);

            if (tmp_kw_call_value_0_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 766;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_33 = mod_consts[82];
            tmp_dict_value_33 = mod_consts[296];
            tmp_kw_call_value_1_84 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_84, tmp_dict_key_33, tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = mod_consts[83];
            tmp_dict_value_33 = mod_consts[297];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_84, tmp_dict_key_33, tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = mod_consts[88];
            tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_33 == NULL)) {
                tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
            }

            if (tmp_dict_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 770;
                type_description_2 = "o";
                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_84, tmp_dict_key_33, tmp_dict_value_33);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_16;
            // Exception handling pass through code for dict_build:
            dict_build_exception_16:;
            Py_DECREF(tmp_kw_call_value_0_84);
            Py_DECREF(tmp_kw_call_value_1_84);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_16:;
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 765;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_84, tmp_kw_call_value_1_84};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_167, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_84);
            Py_DECREF(tmp_kw_call_value_1_84);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[298], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_98;
            PyObject *tmp_ass_subscribed_98;
            PyObject *tmp_ass_subscript_98;
            tmp_ass_subvalue_98 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_98 == NULL)) {
                tmp_ass_subvalue_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_98 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_98 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_98 = mod_consts[298];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_169;
            PyObject *tmp_kw_call_value_0_85;
            PyObject *tmp_called_value_170;
            PyObject *tmp_kw_call_value_1_85;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_23;
            tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_called_value_169 == NULL)) {
                tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_called_value_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_170 == NULL)) {
                tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_called_value_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 776;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 776;
            tmp_kw_call_value_0_85 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_170, mod_consts[299]);

            if (tmp_kw_call_value_0_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 776;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_34 = mod_consts[51];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_85);

                exception_lineno = 778;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[300]);
            if (tmp_dict_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_85);

                exception_lineno = 778;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_value_1_85 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_85, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));
            frame_7ade4e17ade698056d38c6691e82d331_2->m_frame.f_lineno = 775;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_85, tmp_kw_call_value_1_85};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_169, kw_values, mod_consts[48]);
            }

            Py_DECREF(tmp_kw_call_value_0_85);
            Py_DECREF(tmp_kw_call_value_1_85);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[301], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_99;
            PyObject *tmp_ass_subscribed_99;
            PyObject *tmp_ass_subscript_99;
            tmp_ass_subvalue_99 = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_ass_subvalue_99 == NULL)) {
                tmp_ass_subvalue_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_ass_subvalue_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_99 = DICT_GET_ITEM0(tstate, locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48, mod_consts[7]);

            if (unlikely(tmp_ass_subscribed_99 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_99 = mod_consts[301];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ade4e17ade698056d38c6691e82d331_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ade4e17ade698056d38c6691e82d331_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ade4e17ade698056d38c6691e82d331_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ade4e17ade698056d38c6691e82d331_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_7ade4e17ade698056d38c6691e82d331_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_171;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_171 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[44];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[302];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_1c4504fbfc40f3483a638e40ab3a1e58->m_frame.f_lineno = 48;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_171, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48);
        locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48);
        locals_bip_utils$coin_conf$coins_conf$$$class__1_CoinsConf_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 48;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_24);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c4504fbfc40f3483a638e40ab3a1e58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c4504fbfc40f3483a638e40ab3a1e58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c4504fbfc40f3483a638e40ab3a1e58, exception_lineno);
    }



    assertFrameObject(frame_1c4504fbfc40f3483a638e40ab3a1e58);

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
    PGO_onModuleExit("bip_utils.coin_conf.coins_conf", false);

    Py_INCREF(module_bip_utils$coin_conf$coins_conf);
    return module_bip_utils$coin_conf$coins_conf;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bip_utils$coin_conf$coins_conf, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("bip_utils$coin_conf$coins_conf", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
