#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( addOneWithReturn(0) == 1 );
    REQUIRE( addOneWithReturn(1) == 2 );
    REQUIRE( addOneWithReturn(2) == 3 );
    REQUIRE( addOneWithReturn(3) == 4 );
    REQUIRE( addOneWithReturn(4) == 5 );
    REQUIRE( addOneWithReturn(5) == 6 );

    int i = 0;
    addOne(i);
    REQUIRE( i == 1);
    addOne(i);
    REQUIRE( i == 2);
    addOne(i);
    REQUIRE( i == 3);
    int j = 1;
    addOne(j);
    REQUIRE( j == 2);
    addOne(j);
    REQUIRE( j == 3);
}
