#include <iostream>


void fibonacci(int firstNum, int secondNum, int numbersDone, int numbersDesired) {
        if (numbersDone == 0) {
                std::cout << firstNum << ", " << secondNum;
                numbersDone = 2;
                fibonacci(firstNum, secondNum, numbersDone, numbersDesired);
        }
        else if (numbersDone < numbersDesired) {
                std::cout << ", " << firstNum + secondNum;
                int newNum = firstNum + secondNum;
                firstNum = secondNum;
                secondNum = newNum;
                ++numbersDone;
                fibonacci(firstNum, secondNum, numbersDone, numbersDesired);
        }



}

void fibonacciTail(int firstNum, int secondNum, int numbersDone, int numbersDesired) {
        if (numbersDone == 0) {
                std::cout << firstNum << ", " << secondNum;
                numbersDone = 2;
        }
        else if (numbersDone < numbersDesired) {
                std::cout << ", " << firstNum + secondNum;
                int newNum = firstNum + secondNum;
                firstNum = secondNum;
                secondNum = newNum;
                ++numbersDone;
        }
        else {
                return;
        }
        fibonacciTail(firstNum, secondNum, numbersDone, numbersDesired);
}


int main() {
        fibonacciTail(0, 1, 0, 25);


}