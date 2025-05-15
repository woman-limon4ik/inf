//#include<iostream>
//#include<string>
//#include<set>
//#include<fstream>
//#include<vector>
//using namespace std;
////вывести те слова, которые есть в повествовательных предложениях
//
//int main() {
//	string s;
//
//	ifstream in("map_set_file3.txt");
//
//	set<string> res;
//	string word;
//
//	if (in.is_open()) {
//		getline(in, s);
//	}
//
//	for (int i = s.size()-1; i >= 0; i--) { //идём с конца строки
//		if (s[i] == '.') {
//			i--;
//			while ((s[i] != '!') && (s[i] != '?')) {
//				word = "";
//				while (s[i] != ' ') {
//					word = s[i] + word; //добавляем слова повеств предложения
//					if (i > 0) {
//						i--;
//					}
//					else {
//						break;
//					}
//				}
//
//				res.insert(word); //добавляем элемент в результат
//
//				if (i > 0) {
//					i--;
//				}
//
//				else {
//					break;
//				}
//			}
//		}
//	}
//
//	cout << "res = "; // вывод рез-та
//	for (string i : res) {
//		cout << i << " ";
//	}
//
//	return 0;
//}