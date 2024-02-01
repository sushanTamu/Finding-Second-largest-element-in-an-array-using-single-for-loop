#include<iostream>
using namespace std;

int main(){
// Just using any random array for which this code will be finding the second largest element 
// using only 1 for loop.
    int array[] = {51,50,5,10,13,2,6,1,49,27,31};
    int length = sizeof(array)/sizeof(array[0]);
    int largest = 0;
    int second_largest = 0;
    for(int i =0;i<length;i++)
    {
        if (array[i] > largest)
        {
            second_largest = largest;
            largest = array[i];
        }
        if(array[0] == largest)
        {
            if ((array[i] > second_largest) & (i!=0))
            {
                second_largest = array[i];
            }
        }
    }
    //cout << largest << endl;
    cout << second_largest;
}
