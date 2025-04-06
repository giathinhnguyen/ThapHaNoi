#include<iostream>
using namespace std;
void thap(int n,char nguon,char giua,char dich){
    if(n==1){
        cout<<nguon<<" -->"<<dich<<endl;
    } else {
        thap(n-1,nguon,dich,giua);// n-1 dia tren ve cot giua
        thap(1,nguon,giua,dich);  // dia cuoi ve dich
        thap(n-1,giua,nguon,dich);// n-1 dia tren tu cot giua ve dich
    }
}

// ham chinh
int main(){
    int n;
    cin>>n;
    thap(n,'A','B','C');
    return 0;
}
