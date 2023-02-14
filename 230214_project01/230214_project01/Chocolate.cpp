#include "Chocolate.h"

Chocolate::Chocolate(string shape, int price, string name, string made_by) {
		set_shape(shape);
		set_price(price);
		set_name(name);
		set_made_by(made_by);
	}
void Chocolate::set_shape(string shape) { this->shape = shape; }
string Chocolate::get_shape() { return shape; }
