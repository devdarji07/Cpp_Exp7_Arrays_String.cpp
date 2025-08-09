//Dev Darji
//24070123033
//ENTC-A2

#include <iostream>
using namespace std;
int main() {
    int array[]={1, 3, 4, 5, 6, 7, 8};
    int sum=0;
    for (int i = 0; i < 7; i++) {
        sum+=array[i];
       
    }  
    float average=sum/7;
    cout<<"The sum of elements in the array is "<< sum<<endl;
    cout<<"The average of elements in the array is "<< average;
    return 0;
}
