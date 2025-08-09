//Dev Darji
//24070123033
//ENTC-A2

#include <iostream>
using namespace std;
int main() {
    int array[] = {1, 3, 4, 5, 6, 7, 8};
    int find;
    bool found=false;
    cout<<"Enter the number to be found: ";
    cin>>find;

    for (int i = 0; i < 7; i++) {
        if (array[i] == find) {
            cout << "Number found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Number not found in the array." << endl;
    }
    return 0;
}
