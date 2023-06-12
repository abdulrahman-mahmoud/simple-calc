#include <iostream>
using namespace std;

int value1 , value2 ;
char operations;

int main(){
    cout << "enter your values : \n";
    
    cin >> value1 >> value2 ;
    
    cout << "Choose the operation (+, -, *, /): \n ";

    cin >> operations;
    
    if ( operations == '+')
    {
        cout << value1 + value2 << endl;
    }
    else if( operations == '-')
    {
        cout << value1 - value2 << endl;

    }
    else if( operations == '/')
    {
        cout << value1 / value2 << endl;

    }
    else if( operations == '*')
    {
        cout << value1 * value2 << endl;

    }
    else{
        cout << " Invalid operation " ;
    }
}
