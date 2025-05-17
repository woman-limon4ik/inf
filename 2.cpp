//#include <iostream>
//using namespace std;
//
//
//struct queue {
//	int inf;
//	queue* next;
//};
//
//
//void push(queue*& h, queue*& t, int x) { //вставка эл-та в очередь
//	queue* r = new queue;
//	r->inf = x;
//	r->next = NULL;
//
//	if ((!h) && (!t)) { //очередь пуста
//		h = t = r;
//	}
//	else {
//		t->next = r;
//		t = r;
//	}
//}
//
//
//int pop(queue*& h, queue*& t) { //удаление элемента из очереди
//	queue* r = h;
//	int i = h->inf; //запоминаем значение элемента-головы
//	h = h->next;
//	if (!h) {
//		t = NULL;
//	}
//	delete r;
//	return i;
//}
//
//
//void que(queue*& h, queue*& t) {
//	if (!h) return; //проверка, если очередь пуста, выход
//
//	queue* tmp_h = NULL, * tmp_t = NULL; //промежуточная очередь
//	int maxx = h->inf; //максимум - голова (1й эл-т)
//	int last = -1; //последний чётный эл-т
//
//	while (h) {
//		int v = pop(h, t);
//		push(tmp_h, tmp_t, v);
//
//		if (v > maxx) {
//			maxx = v;
//		}
//		if ((v % 2) == 0) {
//			last = v;
//		}
//	}
//	h = tmp_h;
//	t = tmp_t;
//
//	if (last == -1) { //проверка, есть ли чётные, если нет, выход
//		/*while (tmp_h) {
//			int v = pop(tmp_h, tmp_t);
//			push(h, t, v);
//		}*/
//		return; 
//	}
//
//	tmp_h = tmp_t = NULL; //новая промежуточная очередь
//	while (h) {
//		int v = pop(h, t);
//		push(tmp_h, tmp_t, v);
//
//		if (v == maxx) {
//			push(tmp_h, tmp_t, last); //вставляем последний чётный после максимумов
//		}
//	}
//	h = tmp_h;
//	t = tmp_t;
//}
//
//
//
//int main() {
//	queue* head = NULL, *t = NULL;
//
//	int n, x; //кол-во
//	cout << "n = "; cin >> n; cout << endl;
//	
//	for (int i = 0; i < n; i++) { //ввод
//		cin >> x;
//		push(head, t, x);
//	}
//
//	que(head, t);
//	
//	while (head) { //вывод
//		cout << pop(head, t) << " ";
//	}
//	cout << endl;
//
//	return 0;
//}