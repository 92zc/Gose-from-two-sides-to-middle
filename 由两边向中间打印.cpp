//打印welcome to bit !!!!!!
// ####################     //arr2
// w##################!     //arr1
// we################!!
// wel##############!!!
//       ......
// welcome to bit!!!!!!

#include<stdio.h>
int main()
{
	char arr1[]="welcome to bit!!!!!!";
	char arr2[]="####################";
	int left=0;
	int right=strlen(arr-1);            //或用int right=sizeof(arr1)/sizeof(arri[0])-1-1     //-1是因为元素下标为元素个数-1，再-1是因为字符串数组后系统会自动加上\0，也有下标，需要减去
                                       //strlen是求数组长度的函数，遇到\0就停止了，\0没算进字符长度里面去
  while(left<=right)
	{	
	arr2[left]=arr1[left];             //左边       //将arr2的值换成arr1的
    arr2[right]=arr1[right];           //右边
	printf("%s\n",arr2);
	left++;
	right--;
  }
  return 0;
}