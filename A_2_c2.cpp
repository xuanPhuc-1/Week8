	#include<iostream>
	using namespace std;
	int main()
	{
		double i[4] = { 4, 6, 7 ,8 };
		for (double* cp = i; (*cp) != '\0'; cp+=2) {
			cout << (void*)cp << " : " << (*cp) << endl;
		}
		return 0;
	}
	// chương trình trích dẫn các thành phần trong mảng i để cho vào các địa chỉ ô nhớ. 
	// chỉ khác biệt ở điểm là chương trình duyệt các phần tử cách nhau 2 ô
	// qua đó cho ta thấy kích thước của kiểu int là  8 bit