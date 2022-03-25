#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char answer{ 0 };
	int choice{ 0 };

	do
	{
		cout << "Enter task number:: "
			<< "\nTask 1."
			<< "\nTask 2."
			<< "\nTask 3."
			<< "\nTask 4."
			<< "\nTask 5."
			<< "\nTask 6."
			<< endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			/*
			1. Написать программу, которая определяет знак («+» или «-») числа,
			введённого с клавиатуры. Необходимо применять указатели и
			оператор разыменования.
			*/
			cout << "Enter the number:\n";
			int a{ 0 };
			int* ptr = &a;
			cin >> *ptr;
			*(ptr) >= 0 ? cout << "+" : cout << "-\n";
		}
		break;

		case 2:
		{
			/*
			2. Написать программу, которая обменивает местами значения двух
			переменных. Необходимо применять указатели и оператор
			разыменования.
			*/
			int a{ 1 };
			int* ptrIntA = &a;
			int b{ 2 };
			int* ptrIntB = &b;
			cout << "Initial values of variables:\n"
				<< "a = " << *(ptrIntA) << endl
				<< "b = " << *(ptrIntB) << endl;
			int* ptrIntTemp = ptrIntA;
			ptrIntA = ptrIntB;
			ptrIntB = ptrIntTemp;
			cout << "Initial values of variables:\n"
				<< "a = " << *(ptrIntA) << endl
				<< "b = " << *(ptrIntB) << endl;
		}
		break;

		case 3:
		{
			/*
			3. Написать программу, реализующую калькулятор на четыре действия.
			Необходимо применять указатели и оператор разыменования.
			*/
			cout << "Enter 2 fractional numbers." << endl;
			cout << "Enter a fractional number \"a\": " << endl;
			double a{ 0.0 };
			double* ptrDoubleA = &a;
			cin >> *(ptrDoubleA);

			cout << "Enter a fractional number \"b\": " << endl;
			double b{ 0.0 };
			double* ptrDoubleB = &b;
			cin >> *(ptrDoubleB);

			cout << "Choose an action with numbers:"
				<< "\n1) a + b"
				<< "\n2) a - b"
				<< "\n3) a * b"
				<< "\n4) a / b"
				<< endl;

			int trigger{ 0 };
			const int* ptrIntTrigger = &trigger;
			cin >> trigger;

			if (*(ptrIntTrigger) == 1)
			{
				cout << "You choosed : 1) a + b" << endl;
				cout << "a + b = " << *(ptrDoubleA)+*(ptrDoubleB) << endl;
			}
			else if (*(ptrIntTrigger) == 2)
			{
				cout << "You choosed : 2) a - b" << endl;
				cout << "a - b = " << *(ptrDoubleA)-*(ptrDoubleB) << endl;
			}
			else if (*(ptrIntTrigger) == 3)
			{
				cout << "You choosed : 3) a * b" << endl;
				cout << "a * b = " << *(ptrDoubleA) * *(ptrDoubleB) << endl;
			}
			else if (*(ptrIntTrigger) == 4)
			{
				cout << "You choosed : 4) a / b" << endl;
				cout << "a / b = " << *(ptrDoubleA) / *(ptrDoubleB) << endl;
			}
			else
				cout << "Menu items total 4!" << endl;
		}
		break;

		case 4:
		{
			/*
			4. Написать программу, которая копирует один массив в другой так,
			чтобы во втором массиве элементы находились в обратном порядке.
			Необходимо использовать два указателя на эти массивы, арифметику
			указателей (инкремент, декремент, сложение указателя с числом и
			т.д.) для продвижения по массивам, а также оператор разыменования.
			*/

		}
		break;

		case 5:
		{
			/*
			5. Написать программу, которая находит минимальный и максимальный
			элемент массива, используя указатель на массив. Необходимо
			применять арифметику указателей (инкремент, декремент, сложение
			указателя с числом и т.д.) для продвижения по массиву, а также
			оператор разыменования.
			*/

		}
		break;

		case 6:
		{
			/*
			6. Написать программу, которая осуществляет циклический сдвиг
			массива на заданное число элементов. Направление сдвига задаётся
			пользователем. В программе требуется использовать указатель на
			массив. Необходимо применять арифметику указателей (инкремент,
			декремент, сложение указателя с числом и т.д.) для продвижения по
			массиву, а также оператор разыменования.
			*/

		}
		break;
		}

		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}