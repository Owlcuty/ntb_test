#include "myfuncs.h"

size_t len_num(uint64_t num)
{
  if (!num)
  {
    return 1;
  }

  size_t num_size = 0, x_num = 1;
  while (x_num <= num)
  {
    x_num *= 10;
    num_size ++;
  }

  return num_size;
}

size_t num_to_str(uint64_t num, char* str, size_t str_size)
{
  assert(str);

  size_t len_n = len_num(num);
  assert(len_n < str_size);

  size_t good_bytes = 0;
  for (char* digit = str + len_n - 1; digit >= str; digit --, num /= 10, good_bytes ++)
  {
    *digit = '0' + (num % 10);
  }
  str[len_n] = '\0';

  return good_bytes;
}

uint64_t str_to_num(const char *str, size_t str_len)
{
  assert(str);

  uint64_t num = 0;
  for (const char* digit = str; digit < str + str_len; digit ++)
  {
    assert(isdigit(*digit));

    num = num * 10 + *digit - '0';
  }

  return num;
}

