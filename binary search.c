#include <stdio.h>
int main() {
int a[5], key, low = 0, high = 4, mid, found = 0;
for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
scanf("%d", &key);
while(low <= high) {
mid = (low + high) / 2;
if(a[mid] == key) { found = 1; break; }
else if(a[mid] < key) low = mid + 1;
else high = mid - 1;
}
if(found) printf("Found"); else printf("Not Found");
return 0;
}
