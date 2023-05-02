#include "Source.h"

int main() {

    Complex first(1, 2);
    Complex second(3, 4);
    int number;

    cin >> number;

    Complex sum = first + second;
    Complex multiplication = first * second;
    Complex another_multiplication = first * number;
    Complex length = ~first;

    FIFO q;
    int push_number;
    int extract_number;
    cin >> push_number >> extract_number;

    FIFO push = q << push_number;
    FIFO extract = q >> extract_number;


    return 0;
}
