#include <iostream>
using namespace std;
//function finding smallest element
int smallest(int *array, int size);

int main(){
    //example array to test
    const int size=8;
    int array[size]={1,2,4,5,10,100,2,-22};
    //calling function
    int smallval=smallest(array, size);
    //displaying the smallest element
    cout << "The smallest element is " << smallval << endl;
    
    
    return 0;
}
//function finding smallest element
int smallest(int *array, int size){
    //sets a smallest value to the first cell of array
    int s=array[0];
    //loop through array checking each cell if it's smaller than previous
    for (int* i=array; i<array+size; i++)
    {//if the value i is pointing to is smaller than s
        if (*i<s)
            //then s is now equal to that value
            s=*i;
    }
    //return the smallest value
    return s;
}