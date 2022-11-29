#pragma once
#include <string>
#include <iostream>

struct book {
	std::string name_of_book;
	std::string author;
	int year = 0;
	int number_of_pages = 0;
	int price = 0;
};

void show_book(book& B);

std::string author_name(book& B);

void save_book(book& B, std::string path);

void add_book(book*& arr, const int length);

void clear_arr(book*& arr, const int length);