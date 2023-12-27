# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.19)

project ("ROM")

# Включите подпроекты.
add_subdirectory ("ROM1")
