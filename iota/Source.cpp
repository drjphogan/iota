#include <algorithm>
#include <numeric>
#include <vector>

using std::vector;

int main()
{
	vector<int> x(10);
	std::iota(x.begin(), x.end(),0);
	auto first_even = std::find_if(x.begin(), x.end(), [](const int& item) { return item % 2 == 0 && item != 0; });
	auto number_of_evens = std::count_if(x.begin(), x.end(), [](const int& item) { return item % 2 == 0 && item != 0; });
	return 0;
}