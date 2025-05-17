//#include <iostream>
//using namespace std;
//
//
//struct stack {
//	char inf;
//	stack* next;
//};
//
//
//void push(stack*& h, char x) { //вставка
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//
//char pop(stack*& h) { //удаление
//	char i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//void reverse(stack*& h) {
//	stack* head1 = NULL; //промежут стек
//	while (h) {
//		push(head1, pop(h)); //добавляем элементы в промежут стек
//	}
//	h = head1; //переобозначаем указатель
//}
//
//
//bool in(char c) {
//	return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//}
//
//
//stack* result(stack*& h) {
//	stack* res = NULL;
//	stack* h1 = NULL;
//	char last;
//	while (h) {
//		char x = pop(h);
//		push(h1, x);
//		if (in(x)) last = x;
//	}
//	/*reverse(h1);*/
//	bool f = false; //для проверки на последнюю гласную
//	while (h1) {
//		char x = pop(h1);
//		
//		if (x == last && !f) { //вставка ! после последней гласной
//			push(res, '!');
//			f = true;
//		}
//		push(res, x);
//	}
//	/*reverse(res);*/
//	return res;
//}
//
//
//int main() {
//	int n; cout << "n = "; cin >> n; //кол-во букв
//	stack* head = NULL;
//	char x;
//
//	for (int i = 0; i < n; i++) { //создаём стек
//		cin >> x;
//		push(head, x);
//	}
//
//	reverse(head); //разворачиваем стек
//
//	stack* res = result(head); //рез-т
//
//	while (res) { //вывод рез-та
//		cout << pop(res) << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}