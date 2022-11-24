#include "gtest/gtest.h"


extern "C" {
#include "ctesting/customer.h"
}

TEST(CUSTOMER, ok) {
  ASSERT_EQ(customer_check(5), 1);
}

TEST(CUSTOMER, not_ok) {
  ASSERT_EQ(customer_check(0), 0);
}
