#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<pair<string, int>> list = { {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1} };
	int num = 1994;
	string ans;

	int i = 0;
	while (i < list.size())
	{
		//int i = 0;

		if (num - list[i].second >= 0)
		{
			num -= list[i].second;
			ans += list[i].first;
			cout << endl << "minus" << endl << num << endl;
			cout << ans << endl << endl;
			continue;
		}
		else
		{
			i++;
			cout << "i++" << endl;
		}
	}

	cout << ans;

	return 0;
}