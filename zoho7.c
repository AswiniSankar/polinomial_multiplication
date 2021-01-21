#include<stdio.h>
struct str1
{
  int arr[3];
}st1[20];
struct str2
{
  int arr[3];
}st2[20];
int main()
{
   int i,j=0,k=0;
   char s1[20],s2[20];
   scanf("%s%s",s1,s2);
   for(i=0;s1[i]!='\0';i+=1)
   {
      if(96 <=s1[i] && s1[i]<=121)
       {
        continue;
       }
    else
     {
       st1[j].arr[k]=s1[i]-48;
              st2[j].arr[k]=s2[i]-48;
          k++;
      }
      if(s1[i]=='+')
      {
       k=0;
       j++;
      }
   }
 
  for(i=0;i<j+1;i++)
  {
    for(k=0;k<j+1;k++)
    {
      printf("%dx%dy%d+",st1[i].arr[0]*st2[k].arr[0],st1[i].arr[1]+st2[k].arr[1],st1[i].arr[2]+st2[k].arr[2]);
    }
  }
  printf("\b");
}


