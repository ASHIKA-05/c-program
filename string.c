3.A user will input two strings, and we find if one of the strings is a sub sequence of the other. Program prints “yes” if either the first string is a sub sequence of the second string or the second string is a sub sequence of the first string.
Assume that, the length of the first string is smaller than or equal to the length of the second string.
An expected output of the program:
Input the first string
tree
Input the second string
Computer science is awesome
YES


#include <stdio.h>
#include <string.h>
int check_subsequence (char [], char[]);
int main () {
  int flag;
  char s1[1000], s2[1000];
  printf("Input first string\n");
  gets(s1);
  printf("Input second string\n");
  gets(s2);
  if (strlen(s1) < strlen(s2))
    flag = check_subsequence(s1, s2);
  else
    flag = check_subsequence(s2, s1);
  if (flag)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
int check_subsequence (char a[], char b[]) {
  int c, d;
  c = d = 0;
  while (a[c] != '\0') {
    while ((a[c] != b[d]) && b[d] != '\0') {
      d++;
    }
    if (b[d] == '\0')
      break;
    d++;
    c++;
  }
  if (a[c] == '\0')
    return 1;
  else
    return 0;
}

