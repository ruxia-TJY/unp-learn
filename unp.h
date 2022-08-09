#ifndef UNP_H
#define UNP_H
#include<stdio.h>
#include<errno.h>
#define MAXLINE 4096
void	 err_dump(const char *, ...);
void	 err_msg(const char *, ...);
void	 err_quit(const char *, ...);
void	 err_ret(const char *, ...);
void	 err_sys(const char *, ...);

#endif 
