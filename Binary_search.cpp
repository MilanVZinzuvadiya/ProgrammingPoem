/*Binary Search Function
  Time Complexity  : O(log2 N)
  Space Complexity : O(1)
*/
int Binary_Search(int data_array[],int SizeOf_data_array,int Query_Element)
{
	//intially we have to check all Array
	int First_Index = 0;
	int Last_Index = SizeOf_data_array-1;

	//Looping of same process untill we hit element
	while(First_Index < Last_Index)
	{
		int Mid_Index=(First_Index + Last_Index)/2;
		if(data_array[Mid_Index]==Query_Element)
			return Mid_Index; //return Index of Query_Element

		if(data_array[Mid_Index] > Query_Element)
			Last_Index = Mid_Index -1;
		else
			First_Index = Mid_Index + 1;
	}
	//return -1 if not found Query_Element
	return -1;
}