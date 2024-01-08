add_library(operation STATIC addition.c subtraction.c modulus.c multiplication.c division.c)
target_include_directories(operation INTERFACE ${CMAKE_HOME_DIRECTORY}/Include)
