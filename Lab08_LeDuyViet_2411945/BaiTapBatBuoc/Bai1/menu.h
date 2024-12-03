void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DanhSachSinhVien ds, int& n);
void ChayChuongTrinh(DanhSachSinhVien ds, int n);


void XuatMenu()
{
	cout << endl << "1. Nhap danh sach sinh vien";
	cout << endl << "2. In ra danh sach sinh vien";
	cout << endl << "3. Sap xep va xuat danh sach sinh vien giam dan theo diem trung binh";
	cout << endl << "4. Sap xep va xuat danh sach sinh vien tang dan theo ten, theo ho va ten lot";
	cout << endl << "5. Tim va xuat thong tin cua sinh vien co ten cho truoc";
	cout << endl << "6. Xuat danh sach sinh vien cua lop cho truoc";
	cout << endl << "7. Xuat danh sach sinh vien kha nang khong duoc tot nghiep";
	cout << endl << "8. Tim thong tin sinh vien theo ma so";
	cout << endl << "9. Tinh ty le phan tram so sinh vien doat loai gioi tro len";
	cout << endl << "10. Tinh diem trung binh cua tat ca sinh vien";
	cout << endl << "11. Cho biet chenh lech ve so luong sinh vien nam va so luong sinh vien nu";
	cout << endl << "12. Tim va xuat thong tin cua nhung sinh vien co diem trung binh cao nhat";
	cout << endl << "==============================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, DanhSachSinhVien ds, int& n)
{
	int id;
	string name, lop;
	switch (menu)
	{
	case 1:
		cout << "Nhap so luong sinh vien ";
		cin >> n;
		NhapDanhSachSinhVien(ds, n);
		break;
	case 2:		
		XuatDanhSachSinhVien(ds, n);
		break;
	case 3:
		SapGiamTB(ds, n);
		XuatDanhSachSinhVien(ds, n);
		break;
	case 4:
		SapTangDanTen(ds, n);
		XuatDanhSachSinhVien(ds, n);
		break;
	case 5:
		cout << endl << "Nhap ten ";
		cin.ignore(1);
		getline(cin, name);
		TimSVByName(ds, n, name);
		break;
	case 6:
		cout << endl << "Nhap lop ";
		cin.ignore(1);
		getline(cin, lop);
		XuatDSLop(ds, n, lop);
		break;
	case 7:
		XuatDuoiTB(ds, n);
		break;
	case 8:
		cout << endl << "Nhap mssv";
		cin >> id;
		TimSVById(ds, n, id);
		break;
	case 9:
		cout << endl << "Ty le sinh vien dat loai gioi la " << AverageBest(ds, n);
		break;
	case 10:
		cout << endl << "Diem trung binh cua tat ca sinh vien la " << AverageAll(ds, n);
		break;
	case 11:
		cout << endl << "Do lech cua sinh vien nam va nu la " << GenderDeviation(ds, n);
		break;
	case 12:
		XuatSVBest(ds, n);
		break;
	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan mot phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(DanhSachSinhVien ds, int n)
{
	int menu, soMenu = 12;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}