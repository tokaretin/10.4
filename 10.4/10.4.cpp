#include <iostream>
#include <cmath>

int main()
{
    float a, b, c;
    std::cout << "a, b, c:";
    std::cin >> a >> b >> c; // небыло переменной с

    if (a == 0) // нужно проверять если a == 0 вместо a < 0
    {
        std::cout << "Not a quadratic equation!" << std::endl;
    }
    else // вместо else if (b > 0) нужно вычисление дискриминанта на float discriminant = b * b - 4 * a * c;
    {
        float discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {
            float x1 = (-b + std::sqrt(discriminant)) / (2 * a); // исправил опечатку discriminand на discriminant
            float x2 = (-b - std::sqrt(discriminant)) / (2 * a); // добавил (;), испавил формулы и x1 и x2
            std::cout << "Root 1: " << x1 << std::endl;
            std::cout << "Root 2: " << x2 << std::endl;
        }
        else if (discriminant == 0) // если дискриминант равен нулю, то корень один x = −b/2a.
        {
            float x = -b / (2 * a);
            std::cout << "Root: " << x << std::endl;
        }
        else
        {
            std::cout << "No real roots!" << std::endl;
        }
    }
    return 0;
}