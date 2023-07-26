#include <iostream>
#include <vector>

struct Vec {

	float x;
	float y;

};

void add(Vec& result) {

	Vec vector_a;
	Vec vector_b;

	std::cout << "Enter the coordinates of the vector a: ";
	std::cin >> vector_a.x >> vector_a.y;

	std::cout << "Enter the coordinates of the vector b: ";
	std::cin >> vector_b.x >> vector_b.y;

	result.x = (vector_a.x + vector_b.x);
	result.y = (vector_a.y + vector_b.y);

	std::cout << result.x << " " << result.y;
}

void subtract(Vec& result) {

	Vec vector_a;
	Vec vector_b;

	std::cout << "Enter the coordinates of the vector a: ";
	std::cin >> vector_a.x >> vector_a.y;

	std::cout << "Enter the coordinates of the vector b: ";
	std::cin >> vector_b.x >> vector_b.y;

	result.x = (vector_a.x - vector_b.x);
	result.y = (vector_a.y - vector_b.y);

	std::cout << result.x << " " << result.y;
}

void scale(Vec& result) {

	Vec vector_a;
	int scalar;

	std::cout << "Enter the coordinates of the vector a: ";
	std::cin >> vector_a.x >> vector_a.y;

	std::cout << "Enter a scalar: ";
	std::cin >> scalar;

	result.x = ((float)scalar * vector_a.x);
	result.y = ((float)scalar * vector_a.y);

	std::cout << result.x << " " << result.y;
}

void length(float & vector_length) {

	Vec vector_a;

	std::cout << "Enter the coordinates of the vector a: ";
	std::cin >> vector_a.x >> vector_a.y;

	vector_length = std::sqrt ((vector_a.x * vector_a.x) + (vector_a.y * vector_a.y));

	std::cout << vector_length;
}

void normalize(Vec& result, float& vector_normalization) {
		
	Vec vector_a;	
	float vector_length;

	std::cout << "Enter the coordinates of the vector a: ";
	std::cin >> vector_a.x >> vector_a.y;

	vector_length = std::sqrt((vector_a.x * vector_a.x) + (vector_a.y * vector_a.y));

	result.x = (vector_a.x / vector_length);
	result.y = (vector_a.y / vector_length);

	std::cout << result.x << " " << result.y;
}

int main() {

	Vec result;

	std::string operation;
	std::cout << "Enter the command: ";
	std::cin >> operation;

	if (operation == "add") {

		add(result);

	}
	else if (operation == "subtract") {

		subtract(result);

	}
	else if (operation == "scale") {

		scale(result);

	}
	else if (operation == "length") {

		float vector_length;
		length(vector_length);

	}
	else if (operation == "normalize") {

		float vector_normalization;
		normalize(result, vector_normalization);

	}
}