#include <iostream>

using namespace std;

float markAverage(float marks[], int size){
    float total = 0;
    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total / size;
}

int main(){
    float marks[7] = {50, 67, 98, 79, 90, 86, 89};
    float average = markAverage(marks, sizeof(marks)/sizeof(float));
    cout << average << endl;
    return 1;
}
