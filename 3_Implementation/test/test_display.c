#include <stdio.h>
#include "../inc/display.h"
#include "../unity/unity.h"

void setUp()
{

}

void tearDown()
{

}

void test_display()
{
    TEST_ASSERT_EQUAL(0, display_circle(-1, -1, -1));
    TEST_ASSERT_EQUAL(1, display_circle(0, 5, 4));
    TEST_ASSERT_EQUAL(0, display_circle(0, 7, 3));
    TEST_ASSERT_EQUAL(1, display_circle(1, 0, 1));
    TEST_ASSERT_EQUAL(0, display_circle(-5, 5, 8));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_display);
    return UNITY_END();

}