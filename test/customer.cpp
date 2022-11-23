#include "gtest/gtest.h"


extern "C" {
#include "testy/customer.h"
}

TEST(WIDGET, ok) {
  ASSERT_EQ(customer_check(5), 1);
}

TEST(testy, not_ok) {
  ASSERT_EQ(customer_check(0), 0);
}
