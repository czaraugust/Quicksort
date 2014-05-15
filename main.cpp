#include <Quicksort.h>
#include <iostream>
using namespace std;

const int INPUT_SIZE = 3;
void print(int *input)
{
    for ( int i = 0; i < INPUT_SIZE; i++ )
        cout << input[i] << " ";
    cout << endl;
}
int main()
{
    int input[INPUT_SIZE] = {3,6,6};
    cout << "Input: ";
    print(input);
    quicksort(input, 0, 2);
    cout << "Output: ";
    print(input);
    return 0;
}
