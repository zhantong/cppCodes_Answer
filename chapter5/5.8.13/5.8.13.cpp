/*
P166 5.8.13
实现strlen、strcpy、strcat、strncat、strcmp以及strncmp函数。
*/
#include <iostream>
using namespace std;

int strlen1(char s[])
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}

char *strcpy1(char dest[], char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		dest[i] = s[i];
	if (i != 0)
		dest[i] = '\0';
	return dest;
}

char *strncpy1(char dest[], char s[],int n)
{
	int i;
	for (i = 0; i < n&&s[i] != '\0'; i++)
		dest[i] = s[i];
	if (i != 0)
		dest[i] = '\0';
	return dest;
}

char *strcat1(char dest[], char s[])
{
	int i=0;
	int j = 0;
	while (dest[i] != '\0')
		i++;
	while (s[j] != '\0')
		dest[i++] = s[j++];
	dest[i] = '\0';
	return dest;
}

char *strncat1(char dest[], char s[],int n)
{
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n&&s[j] != '\0')
		dest[i++] = s[j++];
	dest[i] = '\0';
	return dest;
}

bool strcmp1(char s1[], char s2[])
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == '\0'&&s2[i] == '\0')
		return true;
	return false;
}

bool strncmp1(char s1[], char s2[],int n)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0'&&i < n)
		i++;
	if (i == n || (s1[i] == '\0'&&s2[i] == '\0'))
		return true;
	return false;
}

int main()
{
	char a[100];
	char b[100];
	int n;
	while (1)
	{
		cout << "string1:";
		cin >> a;
		cout << "string2:";
		cin >> b;
	}
}