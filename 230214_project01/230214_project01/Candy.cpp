#include "Candy.h"

Candy::Candy(string flavor, int price, string name, string made_by) {
	set_flavor(flavor);
	set_price(price);
	set_name(name);
	set_made_by(made_by);
}

void Candy::set_flavor(string flavor) { this->flavor = flavor; }
string Candy::get_flavor() { return flavor; }