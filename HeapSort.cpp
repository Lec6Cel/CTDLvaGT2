//void heapify(int a[],int n,int i){
//	int lagest=i;
//	int l=2*i+1;
//	int r=2*i+2;
//	if(l<n && a[l]>a[lagest])
//		lagest=l;
//	if(r<n && a[r]>a[lagest])
//		lagest=r;
//	if(lagest!=i){
//		swap(a[i],a[lagest]);
//		heapify(a,n,lagest);
//	}
//}
//void heap_sort(int a[],int n){
//	for(int i=n/2 - 1;i>=0;i--)
//	{
//		heapify(a,n,i);
//	}
//	cout<<" Max heap: " ;
//	Output(a,n);
//	for(int i=n-1;i>=0;i--){
//		swap(a[i],a[0]);
//		heapify(a,i,0);
//		cout<<"Buoc " <<i+1<<" : ";
//		Output(a,n);	
//	}
//}