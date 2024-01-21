//4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
void printPascalTriangle(int n) 
{
    for (int line = 0; line < n; line++) 
    {
        for (int space = 0; space < n - line - 1; space++)
        {
            cout << "  "; 
        }

        int coefficient = 1;
        for (int i = 0; i <= line; i++) 
        {
            cout << coefficient << "   ";
            coefficient = coefficient * (line - i) / (i + 1);
        }
        cout << endl;
    }
}

int main() 
{
    int N;
    cout << "Enter the number of lines for Pascal's Triangle: ";
    cin >> N;
    
    printPascalTriangle(N);
    
    return 0;
}
