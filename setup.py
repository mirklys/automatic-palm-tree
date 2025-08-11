import setuptools
from setuptools import setup, Extension
import pybind11

cpp_args = ['-std=c++17']

ext_modules = [
    Extension(
        'neuro',
        ['src/bindings.cpp', 'src/palm_trees.cpp', 'src/signal_processor.cpp'],
        include_dirs=[pybind11.get_include(), 'include'],
        language='c++',
        extra_compile_args=cpp_args,
    ),
]

setup(
    name='neuro',
    version='0.0.1',
    ext_modules=ext_modules,
)
