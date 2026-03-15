#include<iostream>
using namespace std;
int main(){
    //command here
    int j = 9;
        j++;    //Post Increament
    cout<<j<<endl;
        j--;     //Post Decrement
    cout<<j<<endl;
        ++j;     //pre increment
    cout<<j<<endl;
        --j;     //pre decrement
    cout<<j<<endl;    

    //TO KNOW THE DIFF BW POST/PRE INCREMENT/DECREMNET LETS
    int k = 6;
    //POST INCREMENT
    cout<<k<<endl;
    cout<<k++<<endl; //phle k print hue then value inc
    cout<<k<<endl;  
    
    int l = 7;
    //PRE INCREMENT
    cout<<l<<endl;
    cout<<++l<<endl; //phle value inc hui bad mei value print
    cout<<l<<endl;    
}