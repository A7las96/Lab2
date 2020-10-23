
#include <iostream>
using namespace std;


int main()
{
	int x;
	int y;
	int z;
	cin >> x >> y >> z;

	//Task 1.1
	if ((x % 2 != 0) && (y % 2 != 0)) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }

	//Task 1.2
	if (((x < 20) && (y >= 20)) || ((x >= 20) && (y < 20))) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }

	//Task 1.3
	if ((x == 0) || (y == 0)) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }

	//Task 1.4
	if ((x < 0) && (y < 0) && (z < 0)) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }

	//Task 1.5
	if (((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0)) || ((y % 5 == 0) && (x % 5 != 0) && (z % 5 != 0)) || ((z % 5 == 0) && (y % 5 != 0) && (x % 5 != 0))) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }

	//Task 1.6
	if ((x > 100) || (y > 100) || (z > 100)) { cout << "condition is true" << endl; }
	else { cout << "condition is false" << endl; }
	system("pause");


	//Task 2.1
	int a, b, c, d;
	pair<unsigned char, unsigned char> position1(a, b);
	cin >> position1.first >> position1.second;
	pair<unsigned char, unsigned char> position2(c, d);
	cin >> position2.first >> position2.second;
	if ((position1.first == position2.first) || (position1.second == position2.second))
	{
		cout << "A ygrojaet B" << endl;
	}
	else { cout << "A ne ygrojaet B" << endl; }

	//Task 2.2
	if (abs(position1.first - position2.first) == abs(position1.second - position2.second))
	{
		cout << "A ygrojaet B" << endl;
	}
	else { cout << "A ne ygrojaet B" << endl; }

	//Task 2.3
	if (((abs(position2.second - position1.second) == 1) && (abs(position2.first - position1.first) == 1)) || ((abs(position2.first - position1.first) == 1) && (abs(position2.second - position2.first) == 1)) || ((abs(position2.second - position1.second) == 1) && (abs(position2.first - position2.second) == 1)))
		cout << "A ygrojaet B" << endl;
	else  cout << "A ne ygrojaet B" << endl;

	//Task 2.4
	if (((position1.first == position2.first) || (position1.second == position2.second)) || (abs(position1.first - position2.first) == abs(position1.second - position2.second))) { cout << "A ygrojaet B" << endl; }
	else { cout << "A ne ygrojaet B" << endl; }

	//Task 2.5.1
	if ((position1.second == 2) && (position1.first == position2.first))
	{
		if (((position2.second == position1.second + 2) || (position2.second == position1.second)) && (position1.first == position2.first))
			cout << "Pehka mojet popast iz A v B" << endl;
	}
	else if ((position1.first == position2.first) && (position2.second == position2.first))
		cout << "Pehka mojet popast iz A v B" << endl;
	else cout << "A ne popadet na B" << endl;



	//Task 2.5.2
	if (((position2.first == position1.first + 1) || (position2.first == position1.first - 1)) && (position2.second == position1.second + 1))
		cout << "Pehka b`et figury" << endl;
	else cout << "A ne b`et figury" << endl;

	//3.1
	for (int i = 1; i < 10; i++) {
		cout << i << " * 7 = " << i * 7 << endl;
	}

	//3.2
	int N;
	cin >> N;
	for (int j = 1; j < 10; j++) {
		cout << j << " * " << N << " = " << j * N << endl;
	}

	//4.1
	int p = 1;
	for (int i = 8; i < 16; i++) {
		p *= i;
	}
	cout << p << endl;


	//4.2
	int a1, pr = 1;
	cin >> a1;
	for (int i = a1; i < 21; i++) {
		pr *= i;
	}
	cout << pr << endl;

	//4.3
	int b1, prz = 1;
	cin >> b1;
	for (int i = 1; i <= b1; i++) {
		prz *= i;
	}
	cout << prz << endl;

	//4.4
	int a2, b2, przv = 1;
	cin >> a2 >> b2;
	for (int i = a2; i <= b2; i++) {
		przv *= i;
	}
	cout << przv << endl;
	system("pause");
}