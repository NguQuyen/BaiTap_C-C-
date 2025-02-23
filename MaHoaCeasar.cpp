//// khai bao thu vien
//#include <iostream>
//
//using namspace std;
//
//// khai bao ham main de chay chuong tr�nh
//int main(){
//	// 
//	// tao mang day du 26 chu cai tu a -> z
//	int a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
//	
//	// Cho nguoi dung nhap chuoi ki tu vao
//	string s;
//	cin >> s;
//	// Cho nguoi dung nhap khoa k
//	byte k;
//	cin >> k;
//	
//	// � tuong nhu sau: neu cac phan tu cua chuoi s khac dau cach va dau "-" thi moi phan tu se bi thay doi thanh phan tu moi voi k vi tri
//	for (int i = 0; i < length(s), i++){
//		if(s[i] != " " && s[i] != "-"){
//			for (int j = 0; j < length(a); j++){
//				if (s[i] == a[j]){
//					s[i] = a[j + k];
//				}
//			}
//		}
//	}
//	print(s);	
//}

#include <iostream>
#include <string> // Th�m thu vien string

using namespace std;

int main() {
    // M� h�a Caesar
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // Cho nguoi d�ng nhap chuoi k� tu v�o
    string s;
    getline(cin, s); // Su dung getline de doc ca d�ng

    // Cho nguoi d�ng nhap kh�a k
    int k;
    cin >> k;

    // � tuong: neu c�c phan tu cua chuoi s kh�c dau c�ch v� dau "-" th� moi phan tu se bi thay doi th�nh phan tu moi voi k vi tr�
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '-') {
            for (int j = 0; j < 26; j++) {
                if (s[i] == a[j]) {
                    s[i] = a[(j + k) % 26]; // Su dung modulo de xu l� truong hop vuot qu� do d�i mang
                    break; // Tho�t khoi v�ng lap khi t�m thay k� tu
                }
            }
        }
    }

    cout << s;

    return 0;
}
