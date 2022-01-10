cmake_minimum_required(VERSION 3.19)

project(mfc2019 CXX)

add_definitions(-D_AFXDLL)
set(CMAKE_MFC_FLAG 2)

add_executable(mfc2019 WIN32
    MainFrm.cpp
    framework.h
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

# target_precompile_headers(mfc2019
# )

# source_group("Resource Files"
#     mfc2019.rc
#     res/mfc2019.ico
#     res/mfc2019.rc2
#     res/mfc2019Doc.ico
#     res/Toolbar.bmp
# )
