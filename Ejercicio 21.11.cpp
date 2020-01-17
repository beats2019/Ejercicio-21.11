#include <iostream>
#include <string>
using namespace std;
string charToBits(unsigned char);

int main()
{
    cout << charToBits('K');
}


string charToBits(unsigned char value)
{
    string resultString("");
    for (int i = 0; i < sizeof(value)*8; i++)
    {
        resultString.insert(0,to_string((value >> i) & 1));
    }
    return resultString;
}