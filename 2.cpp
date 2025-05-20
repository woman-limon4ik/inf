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


void print(list* h) { //вывод списка
	list* p = h;
	while (p) {
		cout << p->inf << " ";
		p = p->next;
	}
	cout << endl;
}


void transfer(list*& h, list*& t) {
	list* oddh = NULL, * oddt = NULL;
	list* evenh = NULL, * event = NULL;
	list* curr = h;

	while (curr) {
		list* nextnode = curr->next;
		curr->prev = NULL;
		curr->next = NULL;

		if (curr->inf % 2 != 0) {
			if (!oddh) {
				oddh = curr;
			}
			else {
				oddt->next = curr;
			}
			curr->prev = oddt;
			oddt = curr;
		}
		else {
			if (!evenh) {
				evenh = curr;
			}
			else {
				event->next = curr;
			}
			curr->prev = event;
			event = curr;
		}
		
		curr = nextnode;
	}

	if (oddh) {
		h = oddh;
		if (evenh) {
			oddt->next = evenh;
			evenh->prev = oddt;
			t = event;
		}
		else {
			t = oddt;
		}
	}
	else {
		h = evenh;
		t = event;
	}
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

	transfer(head, tail);
	print(head);

	
	system("pause");
	return 0;
}