// TODO: เขียนฟังก์ชัน swap ด้วย pointer
#include <iostream>
using namespace std;

void swapValue(int* a, int* b) {
	int examSwap = *a;
	*a = *b;
	*b = examSwap;
}

int main() {
	int x = 5, y = 10;
	cout << "Before : " << x << " " << y << endl;
	swapValue(&x, &y);
	cout << "After : " << x << " " << y << endl;
	return 0;
}
