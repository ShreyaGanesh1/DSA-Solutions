#include <stdio.h>
int main() {
int n, r, sum = 0, temp;
scanf("%d", &n);
temp = n;
while(n > 0) {
r = n % 10;
sum += r * r * r;
n /= 10;
}
if(sum == temp) printf("Armstrong");
else printf("Not Armstrong");
return 0;
}
