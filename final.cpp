//  LHPK4014 - Software Engineering 1
//Assessment 1 (W1): Set Exercises - Combined Program
//  Personalization Number: 4827
//This one programme consists of 10 short exercises, each
//  implemented as its own function (task1..task10) and called
//The order of the statements is from main(). All exercises are tailored to each individual with the use of the number 4827.
//  Only Task 9 reads from standard input
// All other tasks use values derived from the personalization number.


#include <iostream>
#include <string>
using namespace std;
int globalCount =4827;
// function protoypes
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
//main function
//main will run all ten exercises in order
int main() {
    cout << " Task 1 " << endl;   task1();
    cout << " Task 2 " << endl; task2();
    cout << "Task 3 " << endl; task3();
    cout << " Task 4 " << endl; task4();
    cout << "Task 5 " << endl; task5();
    cout << " Task 6 " << endl; task6();
    cout << "Task 7 " << endl; task7();
    cout << " Task 8 " << endl; task8();
    cout << " Task 9 " << endl; task9();
    cout << " Task 10 " << endl; task10();
    return 0;
}
//Task one : variables and output
// My personalization number is 4827
// Add the second digit (8) and last digit (7) of 4827.
// The sum is 15.
void task1() {
    int num1 = 8;
    int num2 = 7;
    int sum = num1 + num2;
    cout << "Task 1 : Variables and Outputs" << endl;
    cout << num1 << " + " << num2 << " = " << sum << endl;
}

// TODO: Tasks 2-10 not written yet (empty placeholders so the program builds)
void task2() {}
void task3() {}
void task4() {}
void task5() {}
void task6() {}
void task7() {}
void task8() {}
void task9() {}
void task10() {}
