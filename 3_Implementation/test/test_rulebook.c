/**
 * @file test_rulebook.c
 * @author Srikar Gade
 * @brief to test rulebook.c file
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include "rulebook.h"
#include "unity.h"




void setUp()
{

}

void tearDown()
{

}

void test_rulebook()
{
    TEST_ASSERT_EQUAL(rulebook(), "Rules have been printed.");
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_rulebook);
    return UNITY_END();
}