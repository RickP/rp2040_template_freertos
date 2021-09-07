#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"

int main() {
    stdio_init_all();

    printf("Setup Done");

    while (true) {
      sleep_ms(1000);
      printf("Ping!");
    }
}
