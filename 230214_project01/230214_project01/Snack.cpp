#include "Snack.h"

int Snack::snack_count = 0;

int Snack::get_snack_count() {
	return snack_count;
}

Snack::Snack() {
	price = 0;
	snack_count++;
}

void Snack::set_price(int price) { this->price = price; };
void Snack::set_name(string name) { this->name = name; };
void Snack::set_made_by(string made_by) { this->made_by = made_by; };

int Snack::get_price() { return price; };
string Snack::get_name() { return name; };
string Snack::get_made_by() { return made_by; };

// �ڽ� Ŭ������ �޼ҵ带 ����ϱ����� �����Լ��� ����
string Snack::get_flavor() { return ""; };
string Snack::get_shape() { return ""; };