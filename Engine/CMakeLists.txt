add_library(Blaze SHARED src/Blaze/Application.cpp)

target_include_directories(Blaze PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Blaze PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/Blaze)
target_compile_definitions(Blaze PRIVATE ENGINE_BUILD)

set_target_properties(Blaze PROPERTIES
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN YES
)