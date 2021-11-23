/**
 * @file test_display.c
 * @author Srikar Gade
 * @brief For testing display.c file
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include <stdio.h>
#include "display.h"
#include "unity.h"


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