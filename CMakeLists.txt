
---

### **2. CMakeLists.txt** (сборка проекта)
Замените содержимое вашего файла на этот код (он автоматически скачает GoogleTest):

```cmake
cmake_minimum_required(VERSION 3.12)
project(data_structures_unittests)

# Настройка GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

# Добавляем исполняемый файл для тестов
add_executable(run_tests
    tests/test_queue.cpp
    tests/test_heap.cpp
    tests/test_bst.cpp
)

# Линкуем GoogleTest
target_link_libraries(run_tests
    GTest::gtest_main
)
