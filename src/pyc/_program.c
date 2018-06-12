#include <Python.h>
#include "prog.h"

// Declare each module method
static PyObject *_program_prog(PyObject *self, PyObject *args);

// Define an array of module methods
static PyMethodDef module_methods[] = {
	{"prog", _program_prog, METH_VARARGS, "A Test Program"}
};

// Define this module
static struct PyModuleDef _program = {
	PyModuleDef_HEAD_INIT,
	"_program",
	"Try to run c main-like program",
	-1,
	module_methods
};

// Create module object
PyMODINIT_FUNC PyInit__program(void) {
	return PyModule_Create(&_program);
}

// Define module methods
static PyObject *_program_prog(PyObject *self, PyObject *args) {

	if (prog() != 0) {
		PyErr_SetString(PyExc_Exception, "Failed to execute program.");
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
};


