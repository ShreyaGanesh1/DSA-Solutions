#include <stdio.h>
#include <string.h>
int main() {
char s[50]; int flag = 1;
scanf("%s", s);
int n = strlen(s);
for(int i = 0; i < n/2; i++)
if(s[i] != s[n-i-1]) flag = 0;
if(flag) printf("Palindrome"); else printf("Not Palindrome");
return 0;
}
