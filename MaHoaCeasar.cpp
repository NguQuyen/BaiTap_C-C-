//// khai bao thu vien
//#include <iostream>
//
//using namspace std;
//
//// khai bao ham main de chay chuong trình
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
//	// ý tuong nhu sau: neu cac phan tu cua chuoi s khac dau cach va dau "-" thi moi phan tu se bi thay doi thanh phan tu moi voi k vi tri
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
#include <string> // Thêm thu vien string

using namespace std;

int main() {
    // Mã hóa Caesar
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // Cho nguoi dùng nhap chuoi ký tu vào
    string s;
    getline(cin, s); // Su dung getline de doc ca dòng

    // Cho nguoi dùng nhap khóa k
    int k;
    cin >> k;

    // Ý tuong: neu các phan tu cua chuoi s khác dau cách và dau "-" thì moi phan tu se bi thay doi thành phan tu moi voi k vi trí
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '-') {
            for (int j = 0; j < 26; j++) {
                if (s[i] == a[j]) {
                    s[i] = a[(j + k) % 26]; // Su dung modulo de xu lý truong hop vuot quá do dài mang
                    break; // Thoát khoi vòng lap khi tìm thay ký tu
                }
            }
        }
    }

    cout << s;

    return 0;
}
