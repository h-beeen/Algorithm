#include <iostream>
using namespace std;

int main(void)
{
    float a = 1.075*1.075*1.075*1.075*1.075*1.075*1.075*1.075*1.075;
    float won = 135000;
    float radius = 0.075;
    float c = won + a;
    cout << c;
}