# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  color.cpp
  circle.cpp
  rectangle.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

# Build tests
add_executable(tests
  window.cpp
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  color.cpp
  circle.cpp
  rectangle.cpp)
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES})


