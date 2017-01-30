#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  uid_t uid = getuid(), euid = geteuid();

  if (uid != 0 || uid != euid)
  {
    printf("invalid permissions.\n");
  }
  else
  {
    printf("+-------+-------+-------+\n");
    printf("| 9     |       |       |\n");
    printf("| 4     |   9 7 |   6   |\n");
    printf("|       | 5     | 4     |\n");
    printf("+-------+-------+-------+\n");
    printf("| 2     |   5   |   1   |\n");
    printf("|     4 |       |       |\n");
    printf("| 8   1 | 3     |     2 |\n");
    printf("+-------+-------+-------+\n");
    printf("|       |     8 |       |\n");
    printf("|   4   | 7     |   2   |\n");
    printf("|     3 |   1   | 8     |\n");
    printf("+-------+-------+-------+\n");
  }
  return 0;
}
