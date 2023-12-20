cmake_minimum_required(VERSION 3.10.0)
project(bug_cmake_tools VERSION 0.1.0 LANGUAGES C CXX)


option(ENABLE_CODEVIEW "Set to ON for enable Codeview Debugger" ON)

if(ENABLE_CODEVIEW)
	if(MINGW)
		include(CheckCXXCompilerFlag)
		check_cxx_compiler_flag(-gcodeview SUPPORT_WINDOWS_DEBUG_INFO)
		if(SUPPORT_WINDOWS_DEBUG_INFO)
			set(CMAKE_EXE_LINKER_FLAGS "-Wl,--pdb= ")
			add_compile_options(-gcodeview)
		endif()
	endif()
endif()

add_executable(bug_cmake_tools main.cpp)


