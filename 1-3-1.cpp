#include <iostream>

#define max(a,b,c)((a>b&&a>c)?a:(b>a&&b>c)?b:c)
#define min(a,b,c)((a<b&&a<c)?a:(b<a&&b<c)?b:c)

int main() {
	int x = 0, y = 0, z = 0;
	std::cout << "Enter three numbers " << std::endl;
	std::cin >> x >> y >> z;
	int _max = max(x, y, z);
	int _min = min(x, y, z);
	std::cout << "The max and min amongst three are " << _max << " and " << _min << std::endl;
	return 0;
}
