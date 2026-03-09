CC = cc
CFLAGS = -Wall -Wextra -I utils
UTILS = utils/utils.c
BUILD_DIR = build

ex01:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex01-print_numbers/print_numbers.c $(UTILS) -o $(BUILD_DIR)/print_numbers

ex02:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex02-factorial/factorial.c $(UTILS) -o $(BUILD_DIR)/factorial

ex03:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex03-power/power.c $(UTILS) -o $(BUILD_DIR)/power

ex04:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex04-reverse_string/reverse_string.c $(UTILS) -o $(BUILD_DIR)/reverse_string

ex05:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) level1/ex05-array_sum/array_sum.c $(UTILS) -o $(BUILD_DIR)/array_sum
	
clean:
	rm -rf $(BUILD_DIR)