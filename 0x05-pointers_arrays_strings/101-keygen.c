#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void) {
  char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
  const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  srand(time(NULL)); // seed random number generator

  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = charset[rand() % (sizeof(charset) - 1)];
  }

  password[PASSWORD_LENGTH] = '\0'; // add null terminator

  printf("%s\n", password);

  return 0;
}
