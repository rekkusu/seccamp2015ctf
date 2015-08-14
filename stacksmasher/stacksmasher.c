#include <stdio.h>

void flag() {
  puts("FLAG{XXXXXXXXXXXXXXXX}");
}

int main(int argc, char *argv[]) {
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  int canary3 = 0xfffefdfc;
  int canary2 = 0x34333231;
  int canary1 = 0x41414141;
  char msg[32];
  gets(msg);

  if (canary1 != 0x41414141 || canary2 != 0x34333231 || canary3 != 0xfffefdfc) {
    exit(1);
  }
  return 0;
}
