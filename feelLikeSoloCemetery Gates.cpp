#include <iostream>
#include <string>
using namespace std;

class Flats {
private:
    string type;  
    int price;

public:
    Flats() : type(""), price(0.0) {}
    Flats(const string& t, int p) : type(t), price(p) {}

    bool operator==(const Flats& other) const {
        return type == other.type;
    }

    Flats& operator=(const Flats& other) {
        if (this == &other) { 
            return *this;
        }
        type = other.type;
        price = other.price;
        return *this;
    }

    bool operator>(const Flats& other) const {
        if (type == other.type) {
            return price > other.price;
        }
        else {
            cout << "Порівняння неможливе: різні типи квартир." << endl;
            return false;
        }
    }

    void Show() const {
        cout << "Тип: " << type << ", Ціна: " << price << endl;
    }
};

//class Coats {
//private:
//    string type;  
//    int price;
//
//public:
//    Coats() : type(""), price(0.0) {}
//    Coats(const string& t, int p) : type(t), price(p) {}
//
//    bool operator==(const Coats& other) const {
//        return type == other.type;
//    }
//
//    Coats& operator=(const Coats& other) {
//        if (this == &other) { 
//            return *this;
//        }
//        type = other.type;
//        price = other.price;
//        return *this;
//    }
//
//    bool operator>(const Coats& other) const {
//        if (type == other.type) {
//            return price > other.price;
//        }
//        else {
//            cout << "Порівняння неможливе: різні типи одягу." << endl;
//            return false;
//        }
//    }
//
//    void Show() const {
//        cout << "Тип: " << type << ", Ціна: " << price << endl;
//    }
//};

int main() {
    /*Coats coat1("Пальто", 1500);
    Coats coat2("Пальто", 2000);
    Coats coat3("Куртка", 1800);

    cout << "coat1: ";
    coat1.Show();
    cout << "coat2: ";
    coat2.Show();
    cout << "coat3: ";
    coat3.Show();

    cout << "Перевірка на рівність типів (coat1 == coat2): "
        << (coat1 == coat2 ? "Так" : "Ні") << endl;

    cout << "Порівняння цін (coat2 > coat1): "
        << (coat2 > coat1 ? "Так" : "Ні") << endl;

    cout << "Присвоювання coat1 = coat3:" << endl;
    coat1 = coat3;
    cout << "coat1 після присвоювання: ";
    coat1.Show();*/

    Flats flat1("Двох-кімнатна квартира", 1240738);
    Flats flat2("Трьох-кімнатна квартира", 1654318);
    Flats flat3("Чотирьох-кімнатна квартира", 2481477);

    cout << "coat1: ";
    flat1.Show();
    cout << "coat2: ";
    flat2.Show();
    cout << "coat3: ";
    flat3.Show();

    cout << "Перевірка на рівність типів (flat1 == flat2): "
        << (flat1 == flat2 ? "Так" : "Ні") << endl;

    cout << "Порівняння цін (flat2 > flat1): "
        << (flat2 > flat1 ? "Так" : "Ні") << endl;

    cout << "Присвоювання flat1 = flat3:" << endl;
    flat1 = flat3;
    cout << "coat1 після присвоювання: ";
    flat1.Show();
}
