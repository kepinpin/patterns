/* $Id: list.h 6 2007-01-22 00:45:22Z drhanson $ */
#ifndef LIST_INCLUDED
#define LIST_INCLUDED
#define T List_T
typedef struct T *T;
struct T {
	T rest;
	void *first;
};
extern T      List_append (T list, T tail);
extern T      List_copy   (T list);
extern T      List_list   (void *x, ...);
extern T      List_pop    (T list, void **x);
extern T      List_push   (T list, void *x);
extern T      List_reverse(T list);
extern int    List_length (T list);
extern void   List_free   (T *list);
extern void   List_map    (T list,
	void apply(void **x, void *cl), void *cl);
extern void **List_toArray(T list, void *end);

// start mrk additions
extern T      List_add    (T list, void *x);
extern T      List_new    ();
extern T      List_remove (T list, void *x);
extern int   List_first   (T list,
	int apply(void **x, void *ctx), void *ctx);
extern void List_join   (T list,
	void apply(void **x, void *ctx, int is_last_item), void *ctx);

struct List_csv_ctx
{
   int delim_len;
   int retval_len;
   char * delim;
   char * retval;
};

extern char * List_csv   (
	T list,
	char * get_item_str(void *x)
);
extern char * List_csv_str   (
	T list
);
// end mrk additions

#undef T
#endif
