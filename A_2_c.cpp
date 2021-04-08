	#include<iostream>
	using namespace std;
	int main()
	{
		double i[4] = { 4, 6, 7 ,8 };
		for (double* cp = i; (*cp) != '\0'; cp++) {
			cout << (void*)cp << " : " << (*cp) << endl;
		}
		return 0;
	}
	// chương trình trích dẫn các thành phần trong mảng i để cho vào các địa chỉ ô nhớ
	// qua đó cho ta thấy kích thước của kiểu int là  8 bit