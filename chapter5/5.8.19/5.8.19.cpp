/*
���������в���һ���½��Ĳ���д��һ��������
bool insert(Node *&h,int a,int pos);
����hΪͷָ�룬aΪҪ����Ľ���ֵ��pos(>=0)��ʾ����λ�á���posΪ0ʱ��ʾ�ڱ�ͷ���룻���򣬱�ʾ�ڵ�pos�����ĺ�����롣�����ɹ�����
true�����򷵻�false��
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

Node *insert(Node *&h, int a, int pos=0)
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
	Node *q=h;
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
			insert(h, t,pos);
		}
		cout << "����"<<endl;
		print(h);
	}
}

