#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	time_t seconds = time(nullptr);
	tm* timeinfo = localtime(&seconds);

	char buffer[80];
	strftime(buffer, sizeof(buffer), "%A, %d-%m-%Y. ���������� ����� ��� � ����: %j", timeinfo);

	std::cout << "����������� ����: " << buffer << std::endl;

	std::cin.get();
	return 0;

}