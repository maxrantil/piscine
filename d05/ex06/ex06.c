#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main () {
   char str1[15];
   char str2[15];
   int ret;
   int ret2;


   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");
   ft_strcmp(str1, "abcdef");
	ft_strcmp(str2, "ABCDEF");

   ret = strcmp(str1, str2);
   ret2 = ft_strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   if(ret2 < 0) {
      printf("str1 is less than str2\n");
   } else if(ret2 > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   return(0);
}