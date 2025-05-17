//#include <iostream>
//using namespace std;
//
//
//struct stack {
//	int inf;
//	stack* next;
//};
//
//
//void push(stack*& h, int x) { //вставка
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//
//int pop(stack*& h) { //удаление
//	int i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//
//void reverse(stack*& in, stack*& out) { //переворачиваем стек
//	while (in) {
//		push(out, pop(in));
//	}
//}
//
//
//void ress(stack*& h) {
//	if (!h) {
//		return;
//	}
//	
//	//поиск максимума
//	stack* h1 = NULL;
//	int maxx = pop(h);
//	push(h1, maxx);
//
//	while (h) {
//		int x = pop(h);
//		if (x > maxx) {
//			maxx = x;
//		}
//		push(h1, x);
//	}
//
//	reverse(h1, h); //вернули порядок в стеке в исходный
//
//	int first = -1, last = -1, indx = 0;
//	//поиск последнего и первого максимума
//	while (h) {
//		int x = pop(h);
//		push(h1, x);
//		if (x == maxx) {
//			if (first == -1) {
//				first = indx;
//			}
//			last = indx;
//		}
//		indx++;
//	}
//
//	reverse(h1, h); //возвращаем исходный порядок в стеке
//	
//
//	if ((first == last) || (last == -1)) {
//		return;
//	}
//
//	indx = 0;
//	stack* res = NULL;
//
//	while (h) {
//		int x = pop(h);
//		if ((indx != first) && (indx != last)) {
//			push(res, x);
//		}
//		indx++;
//	}
//
//	reverse(res, h); //возрващаем порядок в стеке
//}
//
//
//int main() {
//	int n; cout << "n = "; cin >> n; //кол-во букв
//	stack* head = NULL; //создаём стек
//	int x;
//
//	for (int i = 0; i < n; i++) { //создаём стек
//		cin >> x;
//		push(head, x);
//	}
//
//	ress(head);
//
//	stack* out = NULL;
//
//	reverse(head, out);
//
//	while (out) { //вывод рез-та
//		cout << pop(out) << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}