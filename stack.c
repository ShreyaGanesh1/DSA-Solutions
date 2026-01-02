#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;
int main() {
int choice, x;
do {
scanf("%d", &choice);
if(choice==1) {
if(top==SIZE-1) printf("Overflow\n");
else { scanf("%d", &x); stack[++top]=x; }
}
else if(choice==2) {
if(top==-1) printf("Underflow\n");
else printf("%d\n", stack[top--]);
}
} while(choice!=0);
return 0;
}
