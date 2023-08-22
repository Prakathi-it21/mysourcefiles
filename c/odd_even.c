#include <stdio.h>
int main() {
    int num,n1,n2;
    printf("Enter an integer: ");
    scanf("%d", &num);
    n1=num/10;
    n2=num%10;

     if (n1 % 2==0 && n2 % 2!=0)  {
        printf("%d prakathi E and O\n", num);
        }
     else if (n1 % 2 != 0 && n2 % 2 == 0) {
        printf("%d is praveena O and E\n", num);
        }
     else if(n1 % 2 != 0 && n2 % 2 != 0) {
        printf("%d prakathi O\n", num);
        }
     else  {
        printf("%d prakathi E\n", num);
        }
    return 0;
}
