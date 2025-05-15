//#include<iostream>
//#include<vector>
//#include<set>
//#include<string>
//using namespace std;
//
//
////вывести цифры, которые есть в 3хзначных числах, но нет в 2хзначных
//
//
//
//int main() {
//	vector<int> v;
//
//	int n; 
//	cout << "n ="; cin >> n; cout << endl;
//
//	int x;
//	for (int i = 0; i < n; i++) { // заполняем вектор
//		cin >> x;
//		v.push_back(x);
//	}
//
//	set<int> st3; set<int> st2; set<int> res; //создаём 3 вектора
//
//	for (int i : v) { //проходимся по цифрам чисел
//		string stri = to_string(i);
//		if (i < 1000 && i > 99) {
//			st3.insert(stri.begin(), stri.end());
//		}
//		else if (i < 100 && i > 9) {
//			st2.insert(stri.begin(), stri.end());
//		}
//	}
//
//	cout << "st3 ="; //вывод цифр в 3хзначных числах
//	for (int i : st3) {
//		cout << i - 48 << " ";
//	}
//	cout << endl;
//
//	cout << "st2 ="; //вывод цифр в 2хзначных числах
//	for (int i : st2) {
//		cout << i - 48 << " ";
//	}
//	cout << endl;
//
//	for (int i : st3) { //убираем цифры, которые совпадают
//		if (st2.count(i) == 0) {
//			res.insert(i);
//		}
//	}
//
//	cout << "res = "; //результат
//	for (int i : res) {
//		cout << i-48 << " ";
//	}
//
//
//
//	return 0;
//}