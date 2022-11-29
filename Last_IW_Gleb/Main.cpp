#include <iostream>
#include <string>
#include "Structs.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	int size = 3;

	book* arr = new book[size];
	arr[0] = {
		"Плаха",
		"Чингиз Айтматов",
		1986,
		390,
		256
	};
	arr[1] = {
		"Трудно быть богом",
		"Аркадий Стругатский",
		1986,
		210,
		345
	};
	arr[2] = {
		"Заводной апельсин",
		"Энтони Бёрджесс",
		1962,
		200,
		287
	};


	short menu;
	std::cout << "1. Показать информацию о книге." << '\n';
	std::cout << "2. Показать Имя автора." << '\n';
	std::cout << "3. Сохранить книгу." << '\n';
	std::cout << "4. Добавить новую книгу." << '\n';
	std::cout << "5. Данные очищены." << '\n';
	std::cout << "6. Завершенипе работы." << '\n';
	
	do {
		std::cout << " Выберите исполняемую команду -->\t\n";
		std::cin >> menu;
		if (menu != 4) {
			std::cout << " Введите книгу с которой хотите работать -->\t";
			std::cin >> x;
		}
		switch (menu) {
		case 1: std::cout << " Показать информацию о книге \n"; show_book(arr[x]); break;
		case 2: std::cout << " Имя автора " << author_name(arr[x]) << '\n'; break;
		case 3: std::cout << " Книга сохранена \n"; save_book(arr[x], "file.txt"); break;
		case 4: std::cout << " Добавить новую книгу \n"; add_book(arr, size); size++; break;
		case 5: std::cout << " Очистить данные \n"; clear_arr(arr, size); break;
		case 6: std::cout << " Завершение работы."; break;
		}

	} while (menu != 6);
	
	
	return 0;
}

