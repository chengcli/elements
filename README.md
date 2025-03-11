# Elements library

[![build](https://github.com/chengcli/elements/actions/workflows/linux.yml/badge.svg)](https://github.com/chengcli/elements/actions/workflows/linux.yml)
[![build](https://github.com/chengcli/elements/actions/workflows/mac.yml/badge.svg)](https://github.com/chengcli/elements/actions/workflows/mac.yml)
[![License](https://img.shields.io/badge/license-MIT-blue)](https://img.shields.io/badge/license-MIT-blue)

This is a small library contains functions for working with atomic data and chemical compounds.
It strips the functions and data from a customized [Cantera](https://github.com/chengcli/cantera) 
library. This repo provides a standalone library for working with just elements and compounds.

## Folder structure
```
├── CMakeLists.txt
├── LICENSE
├── README.md
├── cmake
│   ├── compilers.cmake
│   ├── macros
│   │   ├── macro_add_package.cmake
│   │   ├── macro_setup_problem.cmake
│   │   └── macro_setup_test.cmake
│   └── modules
├── examples
│   └── CMakeLists.txt
├── src
│   ├── CMakeLists.txt
│   ├── compound.cpp
│   ├── compound.hpp
│   ├── constants.hpp
│   ├── element.cpp
│   ├── element.hpp
│   ├── utils.cpp
│   └── utils.hpp
└── tests
    ├── CMakeLists.txt
    └── test_composition.cpp
```

## Main functions
- `elements::get_element_weight` - returns the weight of the element.
- `elements::get_element_name` - returns the name of the element.
- `elements::get_element_symbol` - returns the symbol of the element.
- `elements::get_atomic_number` - returns the atomic number of the element.
- `elements::get_composition` - returns the composition of the compound.
- `elements::get_compound_weight` - returns the molecular weight of the compound.
