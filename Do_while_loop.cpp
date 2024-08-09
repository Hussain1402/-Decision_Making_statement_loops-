#include <iostream>
using namespace std;

int main() {
    string k;
    cout<<"Enter the name:";
    cin>>k;
    do{
        cout<<k<<"\n";
        cout<<"Enter the name:";
        cin>>k;
    }
    while(k!="SIT");
}

/*
Enter the name:c++
c++
Enter the name:python
python
Enter the name:SIT
*/
