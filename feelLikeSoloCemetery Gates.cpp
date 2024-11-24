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
            cout << "��������� ���������: ��� ���� �������." << endl;
            return false;
        }
    }

    void Show() const {
        cout << "���: " << type << ", ֳ��: " << price << endl;
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
//            cout << "��������� ���������: ��� ���� �����." << endl;
//            return false;
//        }
//    }
//
//    void Show() const {
//        cout << "���: " << type << ", ֳ��: " << price << endl;
//    }
//};

int main() {
    /*Coats coat1("������", 1500);
    Coats coat2("������", 2000);
    Coats coat3("������", 1800);

    cout << "coat1: ";
    coat1.Show();
    cout << "coat2: ";
    coat2.Show();
    cout << "coat3: ";
    coat3.Show();

    cout << "�������� �� ������ ���� (coat1 == coat2): "
        << (coat1 == coat2 ? "���" : "ͳ") << endl;

    cout << "��������� ��� (coat2 > coat1): "
        << (coat2 > coat1 ? "���" : "ͳ") << endl;

    cout << "������������ coat1 = coat3:" << endl;
    coat1 = coat3;
    cout << "coat1 ���� ������������: ";
    coat1.Show();*/

    Flats flat1("����-������� ��������", 1240738);
    Flats flat2("�����-������� ��������", 1654318);
    Flats flat3("��������-������� ��������", 2481477);

    cout << "coat1: ";
    flat1.Show();
    cout << "coat2: ";
    flat2.Show();
    cout << "coat3: ";
    flat3.Show();

    cout << "�������� �� ������ ���� (flat1 == flat2): "
        << (flat1 == flat2 ? "���" : "ͳ") << endl;

    cout << "��������� ��� (flat2 > flat1): "
        << (flat2 > flat1 ? "���" : "ͳ") << endl;

    cout << "������������ flat1 = flat3:" << endl;
    flat1 = flat3;
    cout << "coat1 ���� ������������: ";
    flat1.Show();
}
