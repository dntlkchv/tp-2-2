#include <iostream>
#include <string>
#include <conio.h>

#include "Number.h"

using namespace std;


void applyCoomand(int command, Number number1, Number number2) {

	system("@cls||clear");

	Number result;

	switch (command)
	{
	case 1:
		result = number1 + number2;

		cout << "(Number1 + Number2) = " << result.getValue() << endl;
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 2:
		result = number1 - number2;

		cout << "(Number1 - Number2) = " << result.getValue() << endl;
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 3:
		result = number1 * number2;

		cout << "(Number1 * Number2) = " << result.getValue() << endl;
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 4:
		result = number1 / number2;

		if (number2.getValue() == 0)
		{
			cout << "division by 0!!!" << endl;
		}
		cout << "(Number1 / Number2) = " << result.getValue() << endl;
		cout << endl << "Press any key to exit" << endl;

		_getch();

		break;

	case 5:
		cout << "(Number1 < Number2) = ";

		if (number1 < number2) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 6:
		cout << "(Number1 > Number2) = ";

		if (number1 > number2) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;
	case 7:
		cout << "(Number1 == Number2) = ";

		if (number1 == number2) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 8:
		cout << "(Number1 != Number2) = ";

		if (number1 != number2) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 9:
		cout << "Float Result " << (float)number1 << " and " << (float)number2 << endl;

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 10:
		cout << "Double Result " << (double)number1 << " and " << (double)number2 << endl;

		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;
	}

}

int main()
{
	cout.precision(10); // округлять в консоли до 20 знаков полсе запятой (по умолчанию очень мало показывается)

	double input;

	cout << "Enter first number: ";
	cin >> input;
	Number number1 = Number(input);

	cout << "Enter second number: ";
	cin >> input;
	Number number2 = Number(input);

	int command;

	for (;;)
	{
		system("@cls||clear");

		cout << "Number1 = " << number1.getValue() << "; Number2 = " << number2.getValue() << endl;

		cout << "1. +" << endl;
		cout << "2. -" << endl;
		cout << "3. *" << endl;
		cout << "4. /" << endl;
		cout << "5. <" << endl;
		cout << "6. >" << endl;
		cout << "7. ==" << endl;
		cout << "8. !=" << endl;
		cout << "9. To float" << endl;
		cout << "10. To double" << endl;

		cin >> command;

		applyCoomand(command, number1, number2);

	}
}
