#include <iostream>
#include <vector>
using namespace std;
//typedef vector<pair<string, int>> pairlist_t;
typedef string text_t;
int main() {

    text_t firstname = "Jishnu";

    cout << firstname << '\n';

    return 0;
    /*
    Typedef = reserved keyword used to create an additional name (alias) for another data type.
     new identifier for an existing type 
     helps with readability and reduces typos.
     use when ther eis a clear benefit 
     replaced with 'using' (works better w/ templates) 
    */
}