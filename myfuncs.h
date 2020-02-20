#pragma once

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#include <assert.h>


size_t num_to_str(uint64_t num, char* str, size_t str_size);
uint64_t str_to_num(const char *str, size_t str_len);
