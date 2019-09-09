/***********************************************************************************
 *                                                                                 *
 * NAME: test.cc                                                                   *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * PURPOSE:                                                                        *
 *                                                                                 *
 * The majority of the file will be a series of test functions. Test functions     *
 * follow the convention of starting with the word "test_" or "spec_". You don't   *
 * HAVE to name them this way, but it makes it clear what functions are tests for  *
 * other developers.  Also, the automated scripts that come with Unity or Ceedling *
 * will default to looking for test functions to be prefixed this way. Test        *
 * functions take no arguments and return nothing. All test accounting is handled  *
 * internally in Unity.                                                            *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 *
 *                                                                                 *
 ***********************************************************************************/
#include <unity.h>
#include "project.hpp"

/*
 *  Prototype functions for setup and teardown.
 */
void setUp(void)
{
    // TODO.
}//end of function setUp

void tearDown(void)
{
    // TODO.
}//end of function tearDown

/*
 *  Prototype functions from the external test file.
 */
void test_simpleAssertTrue(void);
void test_simpleAssertNull(void);
void test_simpleAssertCall(void);

void test_simpleAssertTrue(void)
{
    TEST_ASSERT_TRUE(1);
}//end of test case

void test_simpleAssertNull(void)
{
    TEST_ASSERT_NULL(NULL);
}//end of test case

void test_simpleAssertCall(void)
{
    TEST_ASSERT_EQUAL_STRING("It works", itWorks());
}//end of test case
