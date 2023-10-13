#include <iostream>

// Максимальная длина C-строки для представления текстовой информации
const int MAX_STRING_LENGTH = 100;

// Структура для представления информации об автомобиле
struct Car {
    char name[MAX_STRING_LENGTH];
    char brand[MAX_STRING_LENGTH];
    int year;
    double engineSize;
    char bodyType[MAX_STRING_LENGTH];
    double price;
};

// Структура для представления информации о менеджере
struct Manager {
    char lastName[MAX_STRING_LENGTH];
    char firstName[MAX_STRING_LENGTH];
    char middleName[MAX_STRING_LENGTH];
    int birthYear;
    int experience;
};

// Структура для представления информации о покупателе
struct Buyer {
    char lastName[MAX_STRING_LENGTH];
    char firstName[MAX_STRING_LENGTH];
    char middleName[MAX_STRING_LENGTH];
    char phone[MAX_STRING_LENGTH];
    char address[MAX_STRING_LENGTH];
    char idNumber[MAX_STRING_LENGTH];
};

// Функция для регистрации продажи
void registerPurchase(const Car& car, const Manager& manager, const Buyer& buyer) {
    std::cout << "Продажа зарегистрирована!" << std::endl;
    std::cout << "Автомобиль: " << car.brand << " " << car.name << ", Год: " << car.year << ", Цена: " << car.price << std::endl;
    std::cout << "Менеджер: " << manager.lastName << " " << manager.firstName << ", Опыт: " << manager.experience << " лет" << std::endl;
    std::cout << "Покупатель: " << buyer.lastName << " " << buyer.firstName << ", Телефон: " << buyer.phone << ", Адрес: " << buyer.address << std::endl;
}

int main() {
    Car car1 = { "Car1", "Brand1", 2023, 2.0, "Седан", 25000.0 };
    Manager manager1 = { "Manager1", "ИмяМенеджера", "ОтчествоМенеджера", 1980, 10 };
    Buyer buyer1 = { "ФамилияПокупателя", "ИмяПокупателя", "ОтчествоПокупателя", "555-555-5555", "123 Main St", "ID123456" };

    // Регистрируем продажу
    registerPurchase(car1, manager1, buyer1);

    return 0;
}
