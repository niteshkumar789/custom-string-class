#include "MyString.h"

using namespace std;

int main () {
    MyString s("isaacnewton");
    MyString t  = s;
    t += " is great";

    cout << t << endl;
}