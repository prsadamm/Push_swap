#include "push_swap.h"

void	ft_rra(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	if (tmp && tmp->next)
	{
		tmp2 = ft_stacklast(*stack);
		if (ft_stacksize(*stack) != 1)
		{
			while (tmp->next->next != NULL)
				tmp = tmp->next;
			ft_stacklast(*stack)->next = *stack;
			tmp->next = NULL;
			*stack = tmp2;
			write(1, "rra\n", 4);
		}
	}
}

void	ft_rrb(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	if (tmp && tmp->next)
	{
		tmp2 = ft_stacklast(*stack);
		if (ft_stacksize(*stack) != 1)
		{
			while (tmp->next->next != NULL)
				tmp = tmp->next;
			ft_stacklast(*stack)->next = *stack;
			tmp->next = NULL;
			*stack = tmp2;
			write(1, "rrb\n", 4);
		}
	}
}

void	rra(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = ft_stacklast(*stack);
	if (ft_stacksize(*stack) != 1)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		ft_stacklast(*stack)->next = *stack;
		tmp->next = NULL;
		*stack = tmp2;
	}
}

void	rrb(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = ft_stacklast(*stack);
	if (ft_stacksize(*stack) != 1)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		ft_stacklast(*stack)->next = *stack;
		tmp->next = NULL;
		*stack = tmp2;
	}
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	if (tmp_a && tmp_a->next && tmp_b && tmp_b->next)
	{
		rra(stack_a);
		rrb(stack_b);
		write(1, "rrr\n", 4);
	}
}
