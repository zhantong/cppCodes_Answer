/*
P167 5.8.21
��дһ���������Ƚ����������ϣ��Ӽ������뼯�ϵ�Ԫ�أ���Ȼ��������������ϵĽ����������Լ������������������Ҫ��������ʵ�ּ���
�ı�ʾ��
*/

#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

bool insert1(Node *h, int n)
{
	if (h->next == NULL)
	{
		h->next = new Node;
		h->next->val = n;
		h->next->next = NULL;
		return true;
	}
	while (h->next!=NULL&&h->next->val < n)
		h = h->next;
	if (h->next!=NULL&&h->next->val == n)
		return true;
	else
	{
		Node *q = new Node;
		q->val = n;
		q->next = h->next;
		h->next = q;
		return true;
	}
	return false;
}

bool find(Node *h, int a)
{
	while (h->next != NULL)
	{
		if (h->next->val == a)
			return true;
		h = h->next;
	}
	return false;
}

void print(Node *h)
{
	while (h->next != NULL)
	{
		cout << h->next->val << ' ';
		h= h->next;
	}
	cout << endl;
}


Node *or(Node *h1, Node *h2)
{
	Node *h3 = new Node;
	h3->next = NULL;
	while (h1->next != NULL)
	{
		insert1(h3, h1->next->val);
		h1 = h1->next;
	}
	while (h2->next != NULL)
	{
		if (!find(h3, h2->next->val))
			insert1(h3, h2->next->val);
		h2 = h2->next;
	}
	return h3;
}

Node *and(Node *h1, Node *h2)
{
	Node *h3 = new Node;
	h3->next = NULL;
	while (h1->next != NULL)
	{
		if (find(h2, h1->next->val))
			insert1(h3, h1->next->val);
		h1 = h1->next;
	}
	return h3;
}

Node *sub(Node *h1, Node *h2)
{
	Node *h3 = new Node;
	h3->next = NULL;
	while (h1->next != NULL)
	{
		if (!find(h2, h1->next->val))
			insert1(h3, h1->next->val);
		h1 = h1->next;
	}
	return h3;
}

int main()
{
	while (1)
	{
		int t;
		Node *h1 = new Node;
		h1->next = NULL;
		Node *h2 = new Node;
		h2->next = NULL;
		cout << "����1Ԫ�أ���-1��β����";
		while (1)
		{
			cin >> t;
			if (t == -1)
				break;
			insert1(h1, t);
			//cout << h1->next->val << endl;
		}
		cout << "����2Ԫ�أ���-1��β����";
		while (1)
		{
			cin >> t;
			if (t == -1)
				break;
			insert1(h2, t);
		}
		cout << "����1��";
		print(h1);
		cout << "����2��";
		print(h2);
		cout << "������";
		print(and(h1,h2));
		cout << "������";
		print(or(h1,h2));
		cout << "����1�뼯��2�Ĳ��";
		print(sub(h1, h2));
		cout << "����2�뼯��1�Ĳ��";
		print(sub(h2, h1));
	}
}