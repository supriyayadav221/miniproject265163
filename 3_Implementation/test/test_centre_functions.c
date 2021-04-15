#include "unity.h"
#include "covid_vaccination_centre.h"


#define PROJECT_NAME    "CVC"

/* Prototypes for all the test functions */
void test_add(void);
void test_read(void);
void test_del(void);
void test_write(void);
void test_edit(void);
void test_search(void);
void test_view(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
// RUN_TEST(test_add);
RUN_TEST(test_read);
RUN_TEST(test_del);
RUN_TEST(test_write);
RUN_TEST(test_edit);
RUN_TEST(test_search);
RUN_TEST(test_view);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_read(void) {
  //TEST_ASSERT_EQUAL( NULL,read());
 

}


void test_write(void) {
  //TEST_ASSERT_EQUAL(NULL, write());

}

void test_search(void) {
  //TEST_ASSERT_EQUAL(NULL, search());

}

void test_del(void) {
 // TEST_ASSERT_EQUAL(NULL, del());

}


void test_view(void) {
 // TEST_ASSERT_EQUAL(NULL, view());

}


void test_edit(void) {
 // TEST_ASSERT_EQUAL(NULL, edit());

}
