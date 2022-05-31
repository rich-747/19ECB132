#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  
  temp = first;


  first = second;

  
  second = temp;

  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}
Output:
Enter first number: 7
Enter second number: 9

After swapping, first number = 9.00
After swapping, second number = 7.00