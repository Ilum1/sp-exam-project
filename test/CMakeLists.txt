include("../cmake/doctest.cmake")

add_executable(symbol_table_test symbol_table_test.cpp)
target_link_libraries(symbol_table_test PRIVATE doctest::doctest_with_main stochastic-simulation)
add_test(NAME symbol_table_test COMMAND symbol_table_test)

add_executable(simulator_test simulator_test.cpp)
target_link_libraries(simulator_test PRIVATE doctest::doctest_with_main stochastic-simulation)
add_test(NAME simulator_test COMMAND simulator_test)

add_executable(reaction_test reaction_test.cpp)
target_link_libraries(reaction_test PRIVATE doctest::doctest_with_main stochastic-simulation)
add_test(NAME reaction_test COMMAND reaction_test)