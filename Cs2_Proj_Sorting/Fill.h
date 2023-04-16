#ifndef FILLARR
#define FILLARR
#include <cstdlib>
#include <ctime>
void Fill(int arr[], int num)
{
 srand(time(NULL));
 for (int i = 0; i < num; i++)
 {
	 arr[i] = i + 1;
 }
 for (int i = num - 1; i >= 1; i--)
 {
	 int j = rand() % (i + 1);
	 int temp = arr[i];
	 arr[i] = arr[j];
	 arr[j] = temp;
 }

}
#endif
