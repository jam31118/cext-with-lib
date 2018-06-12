from distutils.core import setup, Extension
#import numpy.distutils.misc_util

extension_modules = [
    Extension("_program", [
        "./src/pyc/_program.c",
        "./src/program/prog.c"],
        include_dirs=['./src/include'],
        libraries=['lib'],
        library_dirs=['./src/lib']),
]


setup(
    ext_modules=extension_modules,
)


