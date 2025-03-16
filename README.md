# Elements library

[![build](https://github.com/chengcli/elements/actions/workflows/main.yml/badge.svg)](https://github.com/chengcli/elements/actions/workflows/main.yml)
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
- `elements::get_element_weight`
This function takes an element symbol and returns the weight of the element.

- `elements::get_element_name`
This function takes an element symbol and returns the full name of the element.

- `elements::get_element_symbol`
This function takes an element name and returns the symbol of the element.

- `elements::get_atomic_number`
This function takes an element symbol and returns the atomic number of the element.

- `elements::get_composition`
This function takes a string of a chemical compound and returns a composition map, i.e., symbol and number pairs.

- `elements::get_compound_weight`
This function takes a composition map and returns the weight of the compound.
