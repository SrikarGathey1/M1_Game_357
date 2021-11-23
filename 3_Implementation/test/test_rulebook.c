#include <stdio.h>
#include "../inc/rulebook.h"
#include "../unity/unity.h"

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