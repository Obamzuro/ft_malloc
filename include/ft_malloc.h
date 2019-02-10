#ifndef FT_MALLOC_H
# define FT_MALLOC_H

struct				s_zone;
struct				s_allocation;

typedef struct		s_malloc
{
	struct s_zone	tiny;
	struct s_zone	small;
	struct s_zone	large;
}					t_malloc;

typedef struct		s_zone
{
	struct s_allocation	allocations;
	struct s_zone		*next;
}					t_zone;

typedef struct		s_allocation
{
	size_t		free : 1;
	size_t		size;
}					t_allocation;

#endif
