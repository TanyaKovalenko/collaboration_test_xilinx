#define SWAP(A, B) { int t = A; A = B; B = t; }
 
void MySort(int *a, int n)
{
  for (int i = n - 1; i > 0; i--)
    for (int j = 0; j < i; j++)
      if (a[j] > a[j + 1])
        SWAP(a[j], a[j + 1]);    
}
