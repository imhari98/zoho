#include <iostream>
using namespace std;

int main() {
    int input,i,j;
    cin>> input;
    for (i = 1; i <= input ; i++)
    {
        for( j = input; j > input-i; j--){
            cout<<j<<" ";
        }
        for(j =1; j <= input-i; j++){
            cout<< (input-i+1)<< " ";
        }
        cout<<endl;
    }
    return 0;
}
