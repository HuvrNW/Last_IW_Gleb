#include <iostream>
#include <string>
#include "Structs.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	int size = 3;

	book* arr = new book[size];
	arr[0] = {
		"�����",
		"������ ��������",
		1986,
		390,
		256
	};
	arr[1] = {
		"������ ���� �����",
		"������� �����������",
		1986,
		210,
		345
	};
	arr[2] = {
		"�������� ��������",
		"������ ��������",
		1962,
		200,
		287
	};


	short menu;
	std::cout << "1. �������� ���������� � �����." << '\n';
	std::cout << "2. �������� ��� ������." << '\n';
	std::cout << "3. ��������� �����." << '\n';
	std::cout << "4. �������� ����� �����." << '\n';
	std::cout << "5. ������ �������." << '\n';
	std::cout << "6. ����������� ������." << '\n';
	
	do {
		std::cout << " �������� ����������� ������� -->\t\n";
		std::cin >> menu;
		if (menu != 4) {
			std::cout << " ������� ����� � ������� ������ �������� -->\t";
			std::cin >> x;
		}
		switch (menu) {
		case 1: std::cout << " �������� ���������� � ����� \n"; show_book(arr[x]); break;
		case 2: std::cout << " ��� ������ " << author_name(arr[x]) << '\n'; break;
		case 3: std::cout << " ����� ��������� \n"; save_book(arr[x], "file.txt"); break;
		case 4: std::cout << " �������� ����� ����� \n"; add_book(arr, size); size++; break;
		case 5: std::cout << " �������� ������ \n"; clear_arr(arr, size); break;
		case 6: std::cout << " ���������� ������."; break;
		}

	} while (menu != 6);
	
	
	return 0;
}

