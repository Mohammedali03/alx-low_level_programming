char *_strchr(char *s, char c)
{
        int a = 0;

        while (1)
        {
            
            if (s[a] == c)
            {
                return (s + a);
            }
            if (s[a] == '\0')
            {
                return (NULL);
            }
            a++;
        }
}
