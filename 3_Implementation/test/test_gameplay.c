/**
 * @file test_gameplay.c
 * @author Srikar Gade
 * @brief To test gameplay function
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "gameplay.h"
#include "unity.h"


void setUp()
{

}

void tearDown()
{

}

void test_grid()
{
    TEST_ASSERT_EQUAL(3, take_grid(3, 5, 7));
    TEST_ASSERT_EQUAL(5, take_grid(3, 5, 7));
    TEST_ASSERT_EQUAL(7, take_grid(3, 5, 7));
    TEST_ASSERT_EQUAL(-1, take_grid(3, 5, 7));
    
}

void test_number()
{
    TEST_ASSERT_EQUAL(1, take_number(3, 5, 7, 3));
    TEST_ASSERT_EQUAL(3, take_number(3, 5, 7, 5));
    TEST_ASSERT_EQUAL(5, take_number(3, 5, 5, 7));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_grid);
    return UNITY_END();
}