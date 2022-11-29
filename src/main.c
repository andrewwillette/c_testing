#include "ctesting/customer.h"
#include "ctesting/widget.h"
#include <stdio.h>

int main() {
  if (widget_ok(1, 1)) {
    printf("widget_ok passed\n");
    return customer_check(5);
  }

  return 0;
}
