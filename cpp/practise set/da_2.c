#include <stdio.h>

void sort(int n, int* ptr)
{
int i, j, t;

for (i = 0; i < n; i++) {

for (j = i + 1; j < n; j++) {
if (*(ptr + j) < *(ptr + i)) { t = *(ptr + i);
*(ptr + i) = *(ptr + j);
*(ptr + j) = t;
}
}
}

for (i = 0; i < n; i++) printf("%d \n", *(ptr + i));
}

int main()
{
int n ,i;
int arr[100]; scanf("%d",&n); for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


sort(n, arr);

return 0;
}
