/*
P167 5.8.22
�����������
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

void insert(Node *h, int n)
{
	if (h == NULL)
	{
		h = new Node;
		h->next = new Node;
		h->next->val = n;
		h->next->next = NULL;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new Node;
		h->next->val = n;
		h->next->next = NULL;
	}
}

void sort(Node *h)
{
	Node *q = NULL;
	Node *p = NULL;
	Node *s = h->next->next;
	while(s!= NULL)
	{
		q = h;
		while (q->next != s&&q->next->val < s->val)
			q = q->next;
		p = s;
		s = s->next;
		p->next = q->next;
		q->next = p;
	}
}

void print(Node *h)
{
	while (h->next != NULL)
	{
		cout << h->next->val << ' ';
		h = h->next;
	}
	cout << endl;
}

int main()
{
	while (1)
	{
		int t;
		Node *h = new Node;
		h->next = NULL;
		cout << "��������Ԫ�أ���-1��β����";
		while (1)
		{
			cin >> t;
			if (t == -1)
				break;
			insert(h, t);
		}
		cout << "ԭ����";
		print(h);
		cout << "�����";
		sort(h);
		print(h);
	}
}
