#include "libft.h"

int strcount(char const *s, char c)
{
    int a = 0;
    int count = 0;
    int flag = 0;
    
    while(s[a] != '\0')
    {   
        while(s[a] != c && s[a] != '\0' )
        {
          flag = 1;
          a++;
        }
        if (flag == 1)
        {
          count++;
          flag = 0;
          continue;
        }
      a++;      
    }
    return count;
}
char **ft_split(char const *s, char c)
{
    int noOfStr = 0;
    int a = 0;
    char **split;
    char *str2 = (char *)s;
    int strtString = 0;
    int strsize;
    int strCount = 0;
    

    if(s == NULL)
        return NULL;

    noOfStr = strcount(s,c);
        
   split = (char **)malloc((noOfStr + 1) * sizeof(char*));
   if (split == NULL)
        return NULL;
   while(str2[a] != '\0')
   {
        strsize = 0;
        while(str2[a] == c)
            a++;
        if (str2[a] != c && str2[a] != '\0')
        {
            strtString  = a;
            strCount++;
            while(str2[a] != c && str2[a] != '\0')
          {
            strsize++;
            a++;
          }
          split[strCount - 1] = ft_substr(str2,strtString,strsize);
        }
   } 
    split[strCount] = NULL;
    return (split);
}
