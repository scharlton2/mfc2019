cmake_minimum_required(VERSION 3.19)

project(mfc2019 CXX)

set(CMAKE_MFC_FLAG 2)

add_executable(mfc2019 WIN32
    framework.h
    MainFrm.cpp
    MainFrm.h
    mfc2019.cpp
    mfc2019.h
    mfc2019.rc
    mfc2019Doc.cpp
    mfc2019Doc.h
    mfc2019View.cpp
    mfc2019View.h
    pch.cpp
    pch.h
    res/mfc2019.ico
    res/mfc2019.rc2
    res/mfc2019Doc.ico
    res/Toolbar.bmp
    Resource.h
    targetver.h
)

target_compile_definitions(mfc2019 PRIVATE _AFXDLL)

if(MSVC)
   set_target_properties(mfc2019 PROPERTIES COMPILE_FLAGS "/Yupch.h")
   set_source_files_properties(pch.cpp PROPERTIES COMPILE_FLAGS "/Ycpch.h")
endif(MSVC)

# source_group("Resource Files"
#     mfc2019.rc
#     res/mfc2019.ico
#     res/mfc2019.rc2
#     res/mfc2019Doc.ico
#     res/Toolbar.bmp
# )
