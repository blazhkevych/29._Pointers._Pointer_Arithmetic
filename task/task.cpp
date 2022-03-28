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
			const int size{ 5 };

			int arr1[size]{ 1,2,3,4,5 };
			int* ptrArr1 = arr1;

			int arr2[size]{ 0 };
			int* ptrArr2 = arr2;

			ptrArr2 += size - 1;
			for (int i = size; i > 0; i--, ptrArr1++, ptrArr2--)
			{
				*(ptrArr2) = *(ptrArr1);
			}
			ptrArr2 = ptrArr2 + 1; // Так как последняя итерация цикла вывела за начало массива указатель.
			for (int i = 0; i < size; i++)
			{
				cout << *(ptrArr2 + i) << '\t';
			}
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
			const int size{ 10 };
			int arr1[size]{ 8,5,2,4,5,6,1,9,3,7 };
			int* ptrArr1 = arr1;

			int min = *(ptrArr1);
			int* ptrMin = &min;

			int max = *(ptrArr1);
			int* ptrMax = &max;

			for (int i = 0; i < size; i++) // Вывод массива на экран;
			{
				cout << *(ptrArr1 + i) << ' ';
			}
			cout << endl;

			for (int i = 0; i < size; i++, ptrArr1++)
			{
				if (*(ptrMin) > *(ptrArr1))
				{
					*(ptrMin) = *(ptrArr1);
				}
				if (*(ptrMax) < *(ptrArr1))
				{
					*(ptrMax) = *(ptrArr1);
				}
			}
			cout << "Min = " << *(ptrMin) << endl;
			cout << "Max = " << *(ptrMax) << endl;
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
			const int size{ 10 };
			int arr[size]{ 0,1,2,3,4,5,6,7,8,9 };
			int* ptrArr = arr;
			cout << "How many bits to perform a cyclic shift? :" << endl;
			int n{ 0 };
			int* ptrN = &n;
			cin >> *(ptrN);

			cout << "Select shift direction:" << endl
				<< "1 <--- cyclic shift to the left;" << endl
				<< "2 ---> cyclic shift to the right;" << endl;
			int choice{ 0 };
			int* ptrChoice = &choice;
			cin >> *(ptrChoice);

			enum UserChoice
			{
				cyclic_shift_to_the_left = 1,
				cyclic_shift_to_the_right = 2
			};

			switch (*(ptrChoice))
			{
			case cyclic_shift_to_the_left: // Сдвиг влево.
				for (int i = 0; i < *(ptrN); i++) // Количество сдвигов (n), по 1-му елементу влево.
				{
					int temp = *(ptrArr); // Сохраняем 1-вый (0-вой индекс в массиве).
					for (int j = 0; j < size - 1; j++) // Итерации идут с начала массива в конец.
						*(ptrArr + j) = *(ptrArr + j + 1); // Следующий елемент в предыдущую ячейку.
					*(ptrArr + size - 1) = temp; // Записываем сохраненный 1-вый (0-вой индекс в массиве) в  последний (9-тый индекс в массиве)
				}
				break;

			case cyclic_shift_to_the_right: // Сдвиг вправо.
				for (int i = 0; i < *(ptrN); i++) // Количество сдвигов (n), по 1-му елементу вправо.
				{
					int temp = *(ptrArr + size - 1); // Сохраняем 10-тый (9-тый индекс в массиве).
					for (int j = size - 1; j > 0; j--) // Итерации идут с конца массива в начало.
						*(ptrArr + j) = *(ptrArr + j - 1); // Следующий елемент равен предыдущему.
					*(ptrArr + 0) = temp; // Записываем сохраненный 10-тый (9-тый индекс в массиве) в первый (0-ой индекс в массиве)
				}
				break;
			}

			for (int i = 0; i < size; i++) // Выводим 1 массив.
			{
				cout << *(ptrArr + i) << "\t";
			}
			cout << endl;

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