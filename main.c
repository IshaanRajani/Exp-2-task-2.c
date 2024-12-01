/*Name:Ishaan Rajani
  roll no:08
  UIN:241P008
  Exp 2 
WAP to find sum of all odd numbers between numbers entered by the user */
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start % 2 == 0) {
        start++;
    }
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    
    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
/*output:
Enter the starting number: 5
Enter the ending number: 10
Sum of odd numbers between 5 and 10 is: 21*/