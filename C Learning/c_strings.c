#include   <stdio.h>
#include <string.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%s\n", greetings);
  printf("%c\n", greetings[0]);

  greetings[0] = 'J';
  printf("%s\n", greetings);
  // Outputs Jello World! instead of Hello World!

  char greetingss[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  printf("%s\n", greetingss);
  
  printf("%lu\n", sizeof(greetings));   // Outputs 13
  printf("%lu\n", sizeof(greetingss));  // Outputs 13

  // special chraracters
  char txt[] = "We are the so-called \"Vikings\" from the north.";
  char txtt[] = "It\'s alright.";
  char txttt[] = "The character \\ is called backslash.";
  printf("\n%s\n", txt);
  printf("\n%s\n", txtt);
  printf("\n%s\n", txttt);

  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("\n%d\n", strlen(alphabet));   // 26
  printf("%d\n", sizeof(alphabet));   // 27

  // Concatenate Strings strcat()
    char firstname[] = "John ";
    char lastname[] = "Doe";
    char fullname[100];
    strcpy(fullname, firstname);
    strcat(fullname, lastname);
    printf("\n%s\n", fullname);
    printf("%lu\n", strlen(fullname));   // 8
    
    // Copy Strings strcpy()
    char str1[20] = "Hello World!";
    char str2[20];
    // Copy str1 to str2
    strcpy(str2, str1);
    // Print str2
    printf("%s\n", str2);

    // Compare Strings strcmp()
    char sstr1[] = "Hello";
    char sstr2[] = "Hello";
    char sstr3[] = "Hi";
    // Compare str1 and str2, and print the result
    printf("\n%d\n", strcmp(sstr1, sstr2));
    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(sstr1, sstr3));

  return 0;
}