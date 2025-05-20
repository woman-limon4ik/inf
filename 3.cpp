#include<iostream>
#include<stack>
using namespace std;


struct list {
	int inf;
	list* next;
	list* prev;
};


void push(list*& h, list*& t, int x) { //������� � ����� ������
	list* r = new list;
	r->inf = x;
	r->next = NULL;
	if (!h && !t) {
		r->prev = NULL;
		h = r;
	}
	else {
		t->next = r;
		r->prev = t;
	}
	t = r;
}


void print(list* h) { //����� ������
	list* p = h;
	while (p) {
		cout << p->inf << " ";
		p = p->next;
	}
	cout << endl;
}


void insert(list*& h, list*& t) {
	list* sorted = NULL;
	list* curr = h;

	while (curr) {
		list* nextnode = curr->next; //��������� ���� ����

		curr->prev = NULL; //����������� ������� ����
		curr->next = NULL;

		if (!sorted || curr->inf <= sorted->inf) {
			curr->next = sorted;
			if (sorted) {
				sorted->prev = curr;
			}
			sorted = curr;
		}
		else {
			list* temp = sorted;
			while (temp->next && temp->next->inf < curr->inf) {
				temp = temp->next;
			}
			curr->next = temp->next;
			curr->prev = temp;
			if (temp->next) {
				temp->next ->prev = curr;
			}
			else {
				t = curr; //��������� �����
			}
			temp->next = curr;
		}
		curr = nextnode; //��� � ���� ����
	}
	h = sorted; //��������� ������
	while (sorted && sorted->next) {
		sorted = sorted->next;
	}
	t = sorted;
}


int main() {
	list* head = NULL;
	list* tail = NULL;

	int n; cout << "n ="; cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		push(head, tail, x);
	}

	insert(head, tail);

	cout << "res = ";
	print(head);

	system("pause");
	return 0;
}