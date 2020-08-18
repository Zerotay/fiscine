#ifndef FT_PARSER_H
# define FT_PARSER_H

typedef struct s_dict{
  char  **key;
  int   key_len;
  char  **value;
}              dict;
dict *parse(char *str);
void free_parse(dict *data);
char *ft_pnum(char *num, dict *lib);
char *ft_punit(int max, dict *data,char *result);
#endif
