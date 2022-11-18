cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Vendedor.cpp Vendedor.h VendedorZona.cpp VendedorZona.h Zona.cpp Zona.h Empresa.cpp Empresa.h)
