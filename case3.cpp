#include "case3.h"
#include <iostream>
#include <chrono>

int case3() {
    using namespace std;
    tm newYearDate = {}; 

    newYearDate.tm_year = 2024 - 1900; // 2024 ���
    newYearDate.tm_mon = 0;            
    newYearDate.tm_mday = 1;           
    newYearDate.tm_hour = 0;           
    newYearDate.tm_min = 0;           
    newYearDate.tm_sec = 0;           

    chrono::system_clock::time_point nowTime = chrono::system_clock::now();  // ������� �����
    chrono::system_clock::time_point eventTime = chrono::system_clock::from_time_t(mktime(&newYearDate));  // ����� ����������� �������

    chrono::duration<int> timeDifference = chrono::duration_cast<chrono::duration<int>>(eventTime - nowTime);  // ���������� ������� �� �������

    int daysUntil = timeDifference.count() / (60 * 60 * 24);
    
    const char newYearQuotes[5][157] = {
        "����� ����������� ��� ����� �������� �������� ��������� � ��������� ����������!",
        "� ����������� ����� �����! ����� �� �������� �����, �������� � �������!",
        "���������� � ����� �����! ����� �� ����� �������� ������ ������������� � ������!",
        "����������� ������ ����! ����� �� ������� �������, ����� � �����������!",
        "����� ��� � ����� ������� � ������������. ����� �� �������� ����� �� ���� ����������!"
    };


    std::cout << "������ �� ������� (" << daysUntil << " ";
    if (daysUntil == 1) {
        std::cout << "����";
    }
    else if (daysUntil == 2 || daysUntil == 3 || daysUntil == 4) {
        std::cout << "���";
    }
    else {
        std::cout << "����";
    }
    std::cout << " �� ������ ����): " << std::endl;
    std::cout << newYearQuotes[daysUntil] << std::endl;
    return 0;
}
