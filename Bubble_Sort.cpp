/*Bubble Sort Function
  Time Complexity  : O(N^2)
  Space Complexity : O(1)
*/
void Bubble_Sort(int data_array[],int SizeOf_data_array)
{
	int tmp;
	for(int i=0;i<SizeOf_data_array;i++)
		for(int j=0;j<SizeOf_data_array-1;j++)
			if(data_array[i]>data_array[j])
			{
				tmp=data_array[i];
				data_array[i]=data_array[j];
				data_array[j]=tmp;
			}
}	