#include <iostream>

// ������������ ����� C-������ ��� ������������� ��������� ����������
const int MAX_STRING_LENGTH = 100;

// ��������� ��� ������������� ���������� �� ����������
struct Car {
    char name[MAX_STRING_LENGTH];
    char brand[MAX_STRING_LENGTH];
    int year;
    double engineSize;
    char bodyType[MAX_STRING_LENGTH];
    double price;
};

// ��������� ��� ������������� ���������� � ���������
struct Manager {
    char lastName[MAX_STRING_LENGTH];
    char firstName[MAX_STRING_LENGTH];
    char middleName[MAX_STRING_LENGTH];
    int birthYear;
    int experience;
};

// ��������� ��� ������������� ���������� � ����������
struct Buyer {
    char lastName[MAX_STRING_LENGTH];
    char firstName[MAX_STRING_LENGTH];
    char middleName[MAX_STRING_LENGTH];
    char phone[MAX_STRING_LENGTH];
    char address[MAX_STRING_LENGTH];
    char idNumber[MAX_STRING_LENGTH];
};

// ������� ��� ����������� �������
void registerPurchase(const Car& car, const Manager& manager, const Buyer& buyer) {
    std::cout << "������� ����������������!" << std::endl;
    std::cout << "����������: " << car.brand << " " << car.name << ", ���: " << car.year << ", ����: " << car.price << std::endl;
    std::cout << "��������: " << manager.lastName << " " << manager.firstName << ", ����: " << manager.experience << " ���" << std::endl;
    std::cout << "����������: " << buyer.lastName << " " << buyer.firstName << ", �������: " << buyer.phone << ", �����: " << buyer.address << std::endl;
}

int main() {
    Car car1 = { "Car1", "Brand1", 2023, 2.0, "�����", 25000.0 };
    Manager manager1 = { "Manager1", "������������", "�����������������", 1980, 10 };
    Buyer buyer1 = { "�����������������", "�������������", "������������������", "555-555-5555", "123 Main St", "ID123456" };

    // ������������ �������
    registerPurchase(car1, manager1, buyer1);

    return 0;
}
