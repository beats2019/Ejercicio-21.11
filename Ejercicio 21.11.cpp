#include <iostream>
#include <string>
using namespace std;
string charToBits(unsigned char);
void printBits(unsigned);


int main()
{
    printBits('a');
}


string charToBits(unsigned char value)
{
    string resultString("");
    for (int i = 0; i < sizeof(value)*8; i++)
        resultString.insert(0,to_string((value >> i) & 1));
    
    return resultString;
}

void printBits(unsigned value)
{
    const int limit = 8 * sizeof(unsigned) - 1;
    unsigned mask = 1 << limit;
    for (unsigned i = 1; i <= limit+1; i++)
    {
        cout << ((value << i) & mask ? "1" : "0");
        if (i % 8 == 0)
            cout << ' ';
    }
 }
