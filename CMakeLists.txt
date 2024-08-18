cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(ili9341shield)

target_sources(app PRIVATE src/main.c)

# Add the ili9341 library source file
target_sources(app PRIVATE src/lib/ili9341.c)
target_sources(app PRIVATE src/lib/font.c)

target_include_directories(app PRIVATE src/lib)