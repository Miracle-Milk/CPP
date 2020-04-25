#include<iostream>
#include<string>
using namespace std;

/*string Delete(string& st)
{
	st.erase(0, st.find_first_not_of(" "));// È¥³ý×Ö·û´®Ê×²¿¿Õ¸ñ
	st.erase(st.find_last_not_of(" ") + 1);// È¥³ý×Ö·û´®Î²²¿¿Õ¸ñ
	return st;
}

int main()
{
	string str;
	getline(cin, str);
	str.erase(str.find_last_not_of("#") + 1);// È¥³ý×Ö·û´®ÖÐ×Ö·û'#'

	cout << Delete(str);
	cout << '#';
	return 0;
}*/

int main()
{
	char a[100];
	cin.getline(a, 100);
	char* p = &a[0];
	int n = 0;
	for (int i = 0; i < 100; i++)
	{
		n = i;
		if (a[i] == '\0')
			break;
	}
	while (*p == 32)
	{
		p++;
	}
	char b[100];
	for (int i = 0; i < n; i++)
	{
		b[i] = *p;
		p++;
	}
	p = &b[n - 1];
	while (*p != 32)
	{
		p--;
	}
	while (*p == 32)
	{
		p--;
	}
	*(p + 1) = '#';
	*(p + 2) = '\0';
	cout << b;
	return 0;
}