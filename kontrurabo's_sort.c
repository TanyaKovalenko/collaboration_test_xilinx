//sorting by inserting
void swap(int *b, int *c)
{
	int y; 
	y = *b;
	*b = *c;
	*c = y;
}


//---kontrurabo sort
void insertion_sort(int *arg, int n)
{
	int i; 
	int j;     
	for(i = 0 ; i < n ; i++ ) {
		for(j = i; (j > 0) && (arg[j - 1] > arg[j]); j--) {
			swap(arg + j , arg + j - 1 );
		}
	}                  
}
