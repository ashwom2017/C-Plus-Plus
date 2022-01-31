#include <iostream>

using namespace std;

int main() {
	float number = 0;
	float result = 0;

	cout << "Enter a nubmer to find the inverse square root: " << endl;
	cin >> number;

	long longNum;
	float x, y;
	const float OnepFive = 1.5F;

	x = number * 0.5F;
	y = number;
	longNum = *(long*)&y;                   // Converting data types so bits can be manipulated
	longNum = 0x5f3759df - (longNum >> 1);     // IEEE math manipulation
	y = *(float*)&longNum;                    // Converting back to float
	result = y * (OnepFive - (x * y * y));   // Newton's method of approximation (one iteration)

	cout << result;
}