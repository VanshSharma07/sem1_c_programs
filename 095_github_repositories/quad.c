#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, x1, x2, discriminant;

  printf("Enter the coefficients a, b, and c: ");
  scanf("%lf%lf%lf", &a, &b, &c);

  discriminant = b*b - 4*a*c;

  if (discriminant > 0) {
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);
    printf("Roots are real and different.\n");
    printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
  }
  else if (discriminant == 0) {
    x1 = x2 = -b / (2*a);
    printf("Roots are real and same.\n");
    printf("x1 = x2 = %.2lf;", x1);
  }
  else {
    printf("Roots are complex and different.");
    printf("x1 = %.2lf + i%.2lf and x2 = %.2lf - i%.2lf", -b/(2*a), sqrt(-discriminant)/(2*a), -b/(2*a), sqrt(-discriminant)/(2*a));
  }

  return 0;
}
