//only if the pass is equal to cor_pass you get the output welcome

#include<iostream>
#include<string>

using namespace std;
int main()
{
    int pass, cor_pass=2608;
    cout<<"Enter password: "<<endl;
    cin>>pass;
    while(pass>0)
    if(pass==cor_pass){
        cout<<"welcome!";
        break;
    }
    else{
        cout<<"Enter password: "<<endl;
        cin>>pass;
    }
}

/*
Enter password: 
2608
welcome!
*/
