/*
P167 5.8.20
����������ɾ��һ�����Ĳ���д��һ��������
bool remove(Node *&h,int &a,int pos);
���У�hΪͷָ�룬a���ڴ��ɾ���Ľ���ֵ��pos(>0)��ʾɾ������λ�á������ɹ�����true�����򷵻�false��
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

bool remove1(Node *&h, int &a, int pos)
{
	Node *q=h;
	if (pos == 1)
	{
		h = h->next;
		a = q->val;
		delete q;
		return true;
	}
	Node *p=h;
	while (pos-1)
	{
		p = q;
		q = q->next;
		pos--;
	}
	if (q == NULL)
		return false;
	else
	{
		p->next = q->next;
		a = q->val;
		delete q;
		return true;
	}
}

Node *insert(Node *&h, int a, int pos = 0)
{
	if (h == NULL)
	{
		h = new Node;
		h->val = a;
		h->next = NULL;
		return h;
	}
	Node *p = new Node;

	p->val = a;
	p->next = NULL;
	if (pos == 0)
	{
		p->next = h;
		h = p;
		return h;
	}
	Node *q = h;
	while (pos - 1)
	{
		if (q == NULL)
		{
			cout << "can't add" << endl;
			return h;
		}
		q = q->next;
		pos--;
	}
	p->next = q->next;
	q->next = p;
	return h;
}

void print(Node *h)
{
	while (h != NULL)
	{
		cout << h->val;
		h = h->next;
	}
	cout << endl;
}

int main()
{
	while (1)
	{
		int t;
		int pos;
		Node *h = NULL;
		while (1)
		{
			cout << "����ֵ��λ�ã����һ����-1��������";
			cin >> t >> pos;
			if (t == -1)
				break;
			insert(h, t, pos);
		}
		cout << "����" << endl;
		print(h);
		while (1)
		{
			cout << "ɾ����λ�ã�";
			cin >> pos;
			remove1(h, t, pos);
			print(h);
			cout << "ɾ����ֵ��" << t << endl;

		}
	}
}