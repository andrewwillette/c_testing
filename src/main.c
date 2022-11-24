#include "ctesting/customer.h"
#include "ctesting/widget.h"

int main() {
  if (widget_ok(1, 1)) {
    return customer_check(5);
  }

  return 0;
}
