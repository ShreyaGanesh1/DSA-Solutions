#include <stdio.h>
int main() {
int a[5], key, found = 0;
for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
scanf("%d", &key);
for(int i = 0; i < 5; i++)
if(a[i] == key) found = 1;
if(found) printf("Found");
else printf("Not Found");
return 0;
}
