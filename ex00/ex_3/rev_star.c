void my_putchar(char s)
{
  write(1, &s, 1);
}

void reversestring(void)
{
  char s;

  s = 'abcdefgdddfa';
  reverseString(s);
  my_putchar(s);

  return;
}

int main (void)
{
  rev_star();
}
