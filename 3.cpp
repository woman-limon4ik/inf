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
//void push(stack*& h, int x) { //�������
//	stack* r = new stack;
//	r->inf = x;
//	r->next = h;
//	h = r;
//}
//
//
//int pop(stack*& h) { //��������
//	int i = h->inf;
//	stack* r = h;
//	h = h->next;
//	delete r;
//	return i;
//}
//
//
//void reverse(stack*& in, stack*& out) { //�������������� ����
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
//	//����� ���������
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
//	reverse(h1, h); //������� ������� � ����� � ��������
//
//	int first = -1, last = -1, indx = 0;
//	//����� ���������� � ������� ���������
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
//	reverse(h1, h); //���������� �������� ������� � �����
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
//	reverse(res, h); //���������� ������� � �����
//}
//
//
//int main() {
//	int n; cout << "n = "; cin >> n; //���-�� ����
//	stack* head = NULL; //������ ����
//	int x;
//
//	for (int i = 0; i < n; i++) { //������ ����
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
//	while (out) { //����� ���-��
//		cout << pop(out) << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}