/*
P166 5.8.15
编写一个函数；要求该函数能够完成把字符串str中的所有子串都替换成指定字符串，返回值为替换的次数。
*/
#include <iostream>
using namespace std;

int find(char a, char b[])
{
	int  i = 0;
	while (b[i] != '\0')
	{
		if (b[i++] == a)
			return true;
	}
	return false;
}

bool cmp(char a[],const char b[], int n)
{
	int i = 0;
	while (b[i] != '\0'&&a[n++] == b[i++]);
	if (b[i] == '\0' || b[i - 1] == '\0')
		return true;
	return false;
}
int strlen1(const char a[])
{
	int i=0;
	while (a[i] != '\0')
		i++;
	return i;
}

int find_replace_str(char str[], const char find_str[], const char replace_str[])
{
	char t[100];
	int i, k;
	i = k = 0;
	int count = 0;
	int lf = strlen1(find_str);
	while (str[i] != '\0')
	{
		if (cmp(str, find_str, i))
		{
			count++;
			int l = 0;
			while (replace_str[l] != '\0')
				t[k++] = replace_str[l++];
			i +=lf;
		}
		else
		{
			t[k++] = str[i++];
		}
	}
	t[k] = '\0';
	i = 0;
	while (t[i] != '\0')
	{
		str[i] = t[i];
		i++;
	}
	str[i] = '\0';
	return count;
}

int main()
{
	char a[100], b[100], c[100];
	int count;
	while (1)
	{
		cout << "originalString:";
		cin >> a;
		cout << "searchString:";
		cin >> b;
		cout << "replaceString:";
		cin >> c;
		count = find_replace_str(a, b, c);
		cout << "transmittedString:" << a << "  deleted:" << count << " times." << endl;
	}
}