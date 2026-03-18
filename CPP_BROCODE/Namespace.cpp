#include<iostream>
//using namespace std;
//int main(){
    /*
    
    Namespace = provides a solution for preventing name conflicts in large projects.
    each entity needs a unique name. 
    A name space allows for identically named entities as long as the name spaces are different
    */
    namespace first {
        int x = 1;
    }
    namespace second{
        int x = 2; 
    }
    int main() {
       int x = 0;
        std::cout << second::x;
    
     return 0;
    }
