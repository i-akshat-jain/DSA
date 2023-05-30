#include<iostream>
using namespace std;

int main(){
    // int num = 5;

    // cout << num << endl;

    // // address of operator -- & 
    // cout<< "address of num is "<< &num << endl; 

    // int *p = &num;
    // cout<< " num is "<< *p << endl;

    // cout<< "address of num is "<< p << endl; 
    // // size of the poniter is always 8 as it only stores addresses
    // cout<< "size of address "<< sizeof(p) << endl; 

    // // copying a pointer
    // int *q = p;
    // cout<< p << " - " << q << endl;
    // cout<< *p << " - " << *q << endl;    

    // // important concept
    // int i = 3;
    // int *t = &i;
    // *t+=1;
    // cout << *t << endl;
    // cout <<"before"<< t << endl;
    // t+=1;
    // cout <<"after"<< t << endl;

    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    (*ptr) = p;
    cout<< f << " - " << p << endl;
    cout<< *ptr << " - " << f << " - " << p << endl;    




    return 0; 
}