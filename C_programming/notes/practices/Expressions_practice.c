// EB 6th Expressions practice

#include <stdio.h>
int main() {


    int a = 3;
    int b = 4;
    int c = 2;
    int result1 = a + b * c;
printf("Equation 1: %d + %d * %d = %d\n", a, b, c, result1);

    int d = 5;
    int e = 3;
    int f = 2;
    double result2 = pow((d + e), f);
printf("Equation 2: (%d + %d)^%d = %.0f\n", d, e, f, result2);

    int g = 18;
    int h = 4;
    int result3 = g % h;
printf("Equation 3: %d %% %d = %d\n", g, h, result3)

    int i = 7;
    int j = 2;
    int k = 3;
    int result4 = i * (j + k);
printf("Equation 4: %d * (%d + %d) = %d\n", i, j, k, result4);

    float l = 8;
    float m = 2;
    float n = 4;
    float o = 3;
    float result5 = (l / m) + n * o;
printf("Equation 5: (%.0f / %.0f) + %.0f * %.0f = %.2f\n", l, m, n, o, result5);


    return 0;
    
}