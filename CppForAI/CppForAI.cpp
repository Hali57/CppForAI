#include<iostream>
#include<string>

int main() {

	// a c++ program that asks a user for their name and age and outputs a greeting message

	std::string name{};
	int age{};

	std::cout << "What is your name?" << std::endl;

	std::cin >> name;

	std::cout << "How old are you ?" << std::endl;

	std::cin >> age;

	std::cout << "Hello " << name << " nice to meet you and you are  " << age << " years old" << std::endl;

}