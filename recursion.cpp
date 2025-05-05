#include <iostream>
using namespace std;

int sum(int k){
    if (k>0)
    {
        return k + sum(k -1);
    }else{
        return 0;
    }   
}

int main(){
    int totalSum = sum(10);

    cout<<"total sum of 10 to 1 = "<< totalSum;
}