//��ӡwelcome to bit !!!!!!
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
	int right=strlen(arr-1);            //����int right=sizeof(arr1)/sizeof(arri[0])-1-1     //-1����ΪԪ���±�ΪԪ�ظ���-1����-1����Ϊ�ַ��������ϵͳ���Զ�����\0��Ҳ���±꣬��Ҫ��ȥ
                                       //strlen�������鳤�ȵĺ���������\0��ֹͣ�ˣ�\0û����ַ���������ȥ
  while(left<=right)
	{	
	arr2[left]=arr1[left];             //���       //��arr2��ֵ����arr1��
    arr2[right]=arr1[right];           //�ұ�
	printf("%s\n",arr2);
	left++;
	right--;
  }
  return 0;
}