
#include <iostream>

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main()
{
    int myScore = 150;
    int yourScore = 1000;
    std::cout << "Original values\n";
    std::cout << "myScore: "<<myScore<<"\n";
    std::cout << "yourScore: "<<yourScore<<"\n";

    std::cout << "Calling badSwap()\n";
    badSwap(myScore, yourScore);
    std::cout << "myScore: " << myScore << "\n";
    std::cout << "yourScore: " << yourScore << "\n";

    std::cout << "Calling goodSwap()\n";
    goodSwap(&myScore, &yourScore);
    std::cout << "myScore: " << myScore << "\n";
    std::cout << "yourScore: " << yourScore << "\n";

    system("pause");
}

void badSwap(int x, int y) {        //Deosnt change value because values stay in scope.
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int* const pX, int* const pY) {
    //store value pointed to by pX in temp
    int temp = *pX;
    //store value pointed to by pY in address pointed to by pX
    *pX = *pY;
    //store value originally pointed to by pX in address pointed to by pY
    *pY = temp;
}