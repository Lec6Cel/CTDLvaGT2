//void exchange(int &a,int &b){
//	int tmp=a;
//	a=b;
//	b=tmp;
//}


//void QuickSort(int a[],int l, int r){
//	int x = a[(l + r) / 2];
//	int i = l;
//	int j = r;
//	int n;
//	while (i < j)
//	{
//		while (a[i] < x)
//			i++;
//		while (a[j] > x)
//			j--;
//		if (i <= j) {
//			swap(a[i], a[j]);
//			i++;
//			j++;
//		}
//	}
//	if (l < j)
//		QuickSort(a, l, j);
//	if (i < r)
//		QuickSort(a, i, r);
