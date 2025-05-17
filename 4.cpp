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
//void push(queue*& h, queue*& t, int x) { //������� ��-�� � �������
//	queue* r = new queue;
//	r->inf = x;
//	r->next = NULL;
//
//	if ((!h) && (!t)) { //������� �����
//		h = t = r;
//	}
//	else {
//		t->next = r;
//		t = r;
//	}
//}
//
//
//int pop(queue*& h, queue*& t) { //�������� �������� �� �������
//	queue* r = h;
//	int i = h->inf; //���������� �������� ��������-������
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
//	if (!h) return; //��������, ���� ������� �����, �����
//
//	queue* tmp_h = NULL, * tmp_t = NULL; //������������� �������
//	int unique = pop(h, t);
//	push(tmp_h, tmp_t, unique); //�������� 1� ��-�
//
//	while (h) {
//		int v = pop(h, t);
//		if (v != unique) {
//			push(tmp_h, tmp_t, v);
//			unique = v;
//		}
//	}
//
//	h = tmp_h; //��������� �������� �������
//	t = tmp_t;
//}
//
//
//int main() {
//	queue* head = NULL, *t = NULL;
//
//	int n, x; //���-��
//	cout << "n = "; cin >> n; cout << endl;
//	
//	for (int i = 0; i < n; i++) { //����
//		cin >> x;
//		push(head, t, x);
//	}
//
//	que(head, t);
//	
//	while (head) { //�����
//		cout << pop(head, t) << " ";
//	}
//	cout << endl;
//
//	return 0;
//}