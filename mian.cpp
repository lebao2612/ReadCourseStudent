#include"header.h"

int main() {
	//CHUA CAN CHINH DUOC COT KHI XUAT
	
	int n = demSV();
	SinhVien* sv = new SinhVien[n];
	khoiTao(sv,n);
	luuMonHocvaoList(sv, n);
	fstream f;
	AccountList accountlistGV,accountlistSV;
	InitAccountListGV(accountlistGV);
	InitAccountListSV(accountlistSV);
	saveAccountGV(accountlistGV);
	saveAccountSV(accountlistSV);
	login(accountlistGV,accountlistSV,sv,n);
	//xoaMonHocSV("22120001", "Toan roi rac", sv, n);
	//luuMonHocvaoFile(sv, n);
	return 0;
}