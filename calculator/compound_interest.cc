#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float principle, interestRate, futureValue, compoundFreqPerAnnum,
    years;

    cout << "What's the principle?";
    cin >> principle;

    cout << "What's the interest rate?";
    cin >> interestRate;

    cout << "How many times is the interest compounded per year?";
    cin >> compoundFreqPerAnnum;

    cout << "How many years is the money invested/borrowed for?";
    cin >> years;

    futureValue = principle * pow((1 + interestRate/compoundFreqPerAnnum), (compoundFreqPerAnnum * years));

    cout << futureValue;

    return 0;
}