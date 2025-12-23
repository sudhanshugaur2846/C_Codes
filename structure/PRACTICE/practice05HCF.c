#include <stdio.h>

struct maths {
    int num;
    int den;
};

// HCF function
int hcf(int m, int n) {
    int temp;
    while (n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    struct maths a, b;
    int lcm, totalnum, final_hcf;

    printf("Fraction1 Numerator Denominator: ");
    scanf("%d %d", &a.num, &a.den);

    printf("Fraction2 Numerator Denominator: ");
    scanf("%d %d", &b.num, &b.den);

    // LCM of denominators
    lcm = (a.den * b.den) / hcf(a.den, b.den);

    // Sum numerator
    totalnum = a.num * (lcm / a.den) + b.num * (lcm / b.den);

    // FINAL SIMPLIFICATION
    final_hcf = hcf(totalnum, lcm);
    totalnum /= final_hcf;
    lcm /= final_hcf;

    printf("%d / %d + %d / %d = %d / %d\n",
           a.num, a.den, b.num, b.den, totalnum, lcm);

    return 0;
}