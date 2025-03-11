# Elements library
This is a small library contains functions for working with atomic data.
It strips the functions and data from the `Cantera` library and provides a 
standalone library for working with elements and atomic data.

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
└── src
    ├── CMakeLists.txt
    ├── constants.hpp
    ├── elements.cpp
    ├── elements.hpp
    ├── to_lower_copy.cpp
    ├── to_lower_copy.hpp
    ├── trim_copy.cpp
    └── trim_copy.hpp
```

## Main functions
- `elements::get_element_weight` - returns the weight of the element.
- `elements::get_element_name` - returns the name of the element.
- `elements::get_element_symbol` - returns the symbol of the element.
- `elements::get_atomic_number` - returns the atomic number of the element.
