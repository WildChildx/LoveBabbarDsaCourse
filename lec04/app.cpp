#include<iostream>
using namespace std;
int main(){
    int n,row = 1;
    char start = 'A';
    cin>>n;
    while(row<=n){   
        int col = 1;
        while(col<=row){
            cout<<char(start+row+col-2)<<" ";   //type casting int -> char
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}
