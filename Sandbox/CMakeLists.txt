add_executable(Sandbox src/Sandbox.cpp)

target_include_directories(Sandbox PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Engine/vendor/spdlog/include)

target_link_libraries(Sandbox PRIVATE Blaze)
