//#include<iostream>
//#include<string>
//#include<set>
//#include<fstream>
//#include<vector>
//using namespace std;
////������� �� �����, ������� ���� � ����������������� ������������
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
//	for (int i = s.size()-1; i >= 0; i--) { //��� � ����� ������
//		if (s[i] == '.') {
//			i--;
//			while ((s[i] != '!') && (s[i] != '?')) {
//				word = "";
//				while (s[i] != ' ') {
//					word = s[i] + word; //��������� ����� ������� �����������
//					if (i > 0) {
//						i--;
//					}
//					else {
//						break;
//					}
//				}
//
//				res.insert(word); //��������� ������� � ���������
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
//	cout << "res = "; // ����� ���-��
//	for (string i : res) {
//		cout << i << " ";
//	}
//
//	return 0;
//}