CC = cc
CFLAGS = -Wall -Wextra -I utils
UTILS = utils/utils.c
BUILD_DIR = build

ex01:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex01-print_numbers/print_numbers.c $(UTILS) -o $(BUILD_DIR)/print_numbers

clean:
	rm -rf $(BUILD_DIR)