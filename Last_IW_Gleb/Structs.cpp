#include "Structs.h"
#include <fstream>
#include <string>

void show_book(book& B) {
	std::cout << " Название книги -->\t" << B.name_of_book << '\n';
	std::cout << " Автор -->\t\t" << B.author << '\n';
	std::cout << " Год релиза -->\t\t" << B.year << '\n';
	std::cout << " Кол-во страниц -->\t" << B.number_of_pages << '\n';
	std::cout << " Цена -->\t\t" << B.price << '\n';
}

std::string author_name(book& B) {
	return B.author.substr(0, B.author.find(" "));
}

void save_book(book& B, std::string path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << B.name_of_book + '\n';
		out << B.author + '\n';
		out << B.year << '\n';
		out << B.number_of_pages << '\n';
		out << B.price << '\n';

	}
	else
		std::cout << " Ошибка открытия файла.\n";
	out.close();
}

void add_book(book*& arr, int length) {

	book* newArr = new book[length + 1]{};
	for (int i = 0; i < length; i++)
		newArr[i] = arr[i];
	
	std::cout << " Введите название книги -->\t\t";
	std::cin.ignore();
	getline(std::cin, newArr[length].name_of_book);
	
	std::cout << " Введите имя и фамилию автора -->\t";
	getline(std::cin, newArr[length].author);

	std::cout << " Введите год релиза -->\t\t\t";
	std::cin >> newArr[length].year;
	std::cout << " Введите кол-во страниц -->\t\t";
	std::cin >> newArr[length].number_of_pages;
	std::cout << " Введите цену за книгу -->\t\t";
	std::cin >> newArr[length].price;
	std::cout << "\n\n";

	delete[] arr;
	arr = newArr;
}

void clear_arr(book*& arr, const int length) {
	delete[] arr;
	arr = nullptr;
}
