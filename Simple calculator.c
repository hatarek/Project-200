#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    if (b == 0) return 0;
    return a / b;
};
int modulus(int a, int b) {
    return a % b;
}
int power(int a, int b) {
    int result = 1;
    while (b--) {
        result *= a;
    }
    return result;
}
int factorial(int a) {
    int result = 1;
    while (a) {
        result *= a;
        a -= 1;
    }
    return result;
}

long long binaryToDecimal(long long n) {
  long long dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main() {
  // variable declaration
  int choice;
  int n1,n2, ans=0;
  long long num;
  printf("Select the operation you want perform\n");
  printf("1.Additon\n2.Subtraction\n3.multplication \n4.Division \n5.Modules\n6.Power\n7.Factorial \n8. Binary to Decimal\n\n");
  scanf("%d", &choice);

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);

      ans = addition(n1,n2); //calling addition function

      printf("answer=%d",ans);
      break;
    case 2:
     printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("answer=%d",ans);
      break;
    case 3:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function
      printf("answer=%d",ans);
      break;
    case 4:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);

     ans = division(n1,n2);    //calling division function
     printf("answer=%d",ans);

      break;
    case 5:
        printf("Enter two number");
        scanf("%d %d",&n1,&n2);
       ans= modulus(n1,n2);  // calling madules function
       printf("answer=%d",ans);
        break;
    case 6:
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&n1);

        printf("power : ");
        scanf("%d",&n2);      // calling power function
       ans= power(n1,n2);
          printf("answer=%d",ans);
        break;
    case 7:
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&n1);
        ans = factorial(n1); //calling  factorial function
        printf("answer=%d",ans);
        break;
    case 8:
        printf("\nEnter a binary number to convert to decimal  : ");
        scanf("%lld",&num);
        long long res = binaryToDecimal(num); //calling  binaryToDecimal function
        printf("answer=%lld",res);
        break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
