#define BOOST_TEST_MODULE test_main
#include <boost/test/unit_test.hpp>

#include <foo.hpp>

BOOST_AUTO_TEST_SUITE(test_add)

BOOST_AUTO_TEST_CASE(basic) {
    BOOST_TEST(add(1, 2) == 3);
}

BOOST_AUTO_TEST_SUITE_END()
