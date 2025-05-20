#include<iostream>
#include<stack>
using namespace std;


struct list {
	int inf;
	list* next;
	list* prev;
};


void push(list*& h, list*& t, int x) { //вставка в конец списка
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


void insert_after(list*& h, list*& t, list* r, int y) {
	list* p = new list;
	p->inf = y;
	if (r == t) {
		p->next = NULL;
		p->prev = r;
		r->next = p;
		t = p;
	}
	else {
		r->next->prev = p;
		p->next = r->next;
		p->prev = r;
		r->next = p;
	}
}


void print(list* h) { //вывод списка
	list* p = h;
	while (p) {
		cout << p->inf << " ";
		p = p->next;
	}
	cout << endl;
}


int find_min(list* h) {
	int minn = h->inf;
	while (h) {
		if (h->inf < minn) {
			minn = h->inf;
		}
		h = h->next;
	}
	return minn;
}


int find_last_even(list* h) {
	int last = -1;
	while (h) {
		if (h->inf % 2 == 0) {
			last = h->inf;
		}
		h = h->next;
	}
	return last;
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

	int minn = find_min(head);
	int last_even = find_last_even(head);

	if (last_even != -1) {
		list* curr = head;
		while (curr) {
			list* next_node = curr->next;
			if (curr->inf == minn) {
				insert_after(head, tail, curr, last_even);

				curr = next_node;
			}
			else {
				curr = curr->next;
			}
		}
	}

	cout << "res = ";
	print(head);

	system("pause");
	return 0;
}