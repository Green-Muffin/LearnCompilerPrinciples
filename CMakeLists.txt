cmake_minimum_required(VERSION 4.1)
project(LearnCompilerPrinciples C)

set(CMAKE_C_STANDARD 11)

add_executable(LearnCompilerPrinciples
        common/common.h
        common/utils.c
        common/utils.h
        common/unicodeUTF8.c
        common/unicodeUTF8.h
        vm/core.c
        vm/core.h
        vm/vm.c
        vm/vm.h
        parser/parser.c
        parser/parser.h
        cli/cli.c
        cli/cli.h
        object/header_obj.c
        object/header_obj.h
        object/class.c
        object/class.h)

target_include_directories(LearnCompilerPrinciples PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})
