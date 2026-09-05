#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n, i, j, temp;
    clrscr();
    
    cout << "Enter the number of values: ";
    cin >> n;
    
    int a[n];
    
    cout << "Enter " << n << " numbers:\n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Bubble sort for ascending order
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    cout << "\nNumbers in ascending order:\n";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    getch();
    return 0;
}
