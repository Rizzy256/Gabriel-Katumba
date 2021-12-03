#include <iostream>

using namespace std;

float markAverage(float marks[], int size)
{
    float total = 0;
    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total / size;
}

int main()
{
    // declare variables to store user input and an array of element 7 to store the inputs
    float marks[7];
    float userInput;

    // iterate to get user input
    for (int i = 0; i < 7; i++)
    {
        cin >> userInput;
        marks[i] = userInput;
    }
    
    // call the markAverage()
    float average = markAverage(marks, sizeof(marks) / sizeof(float));
    // output the end result
    cout << average << endl;

    // program exit point
    return 1;
}
