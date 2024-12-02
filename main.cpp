#include <iostream>
#include <bitset>


int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // 1
    if (a % c == 0 & b % c == 0) {
        std::cout << (a + b) / c << std::endl;
    }
    else if (a % c == 0 & b % c != 0) {
        std::cout << a / c + b << std::endl;
    }
    else {
        std::cout << a - b - c << std::endl;
    }
    
    // 2
    int n;
    std::cin >> n;
    switch (n)
    {
        case 1: std::cout << "Понедельник" << std::endl; break;
        case 2: std::cout << "Вторник" << std::endl; break;
        case 3: std::cout << "Среда" << std::endl; break;
        case 4: std::cout << "Четверг" << std::endl; break;
        case 5: std::cout << "Пятница" << std::endl; break;
        case 6: std::cout << "Суббота" << std::endl; break;
        case 7: std::cout << "Воскресенье" << std::endl; break;
        default: std::cout << "Некорректный ввод" << std::endl; break;
    }
    
    // 3
    int x;
    std::cin >> x;
    if (x == 1) std::cout << "Positive number";
    else std::cout << "Negative number";
    
    /*Так как переменная принимает два значения, можно спокойно написать if-else
    Они будут исключать друг друга*/
    return 0;
}
