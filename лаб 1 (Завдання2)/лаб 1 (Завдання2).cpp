#include <iostream>
#include <cmath>

class FunctionCalculator {
public:
    FunctionCalculator(double x, double y, double z) : x(x), y(y), z(z) {}

    double calculate_a(double b) {
        double term1 = 1 + sqrt(pow(sin(fabs(x + y)), 0.4));
        double term2 = 2 + pow(b, 2) + pow(sin(y - z), 3);
        double term3 = tan(3 * x / z);
        return term1 / term2 + term3;
    }

    double calculate_b() {
        double term1 = pow(cos(atan(pow(x, 2) + y / z + 1)), 2);
        double term2 = (x / z) * exp(3 * x + y);
        return term1 + term2;
    }

private:
    double x, y, z;
};

int main() {
    double No = 1.0;
    double y = 0.47 * No;
    double z = -1.32 * No;

    // Iterate through values of x from -1 to 1 with a step of 0.2
    for (double x = -1.0; x <= 1.0; x += 0.2) {
        FunctionCalculator calculator(x, y, z);

        double b = calculator.calculate_b();
        double a = calculator.calculate_a(b);

        // Output the results for each x value
        std::cout << "x = " << x << ", a[x,y,z,b] = " << a << ", b[x,y,z] = " << b << std::endl;
    }

    return 0;
}

















































