/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najlee <najlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:12:09 by najlee            #+#    #+#             */
/*   Updated: 2021/05/25 22:12:10 by najlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_stack(t_stack *stack, int num) //확인용
{
	t_list *now = stack->head->next;
	
	if (num == A)
		printf("\n<AAAAAA>\n");
	else
		printf("\n<BBBBBB>\n");
	while(now->flag == 1)
	{
		printf("%d -> ", now->data);
		now = now->next;
	}
	printf("\n");
}

/*
void print_cmd(t_stack *stack) //확인용
{
	t_list *now = stack->head->next;
	
	printf("\n<cmd>\n");
	while(now->flag == 1)
	{
		if (now->data == SA)
			printf("sa\n");
		else if (now->data == SB)
			printf("sb\n");
			....
			
		now = now->next;
	}
	printf("\n");
}*/

int	main(int argc, char **argv)
{
	int		idx;
	t_info	*info;
	int		arr[argc];

	info = (t_info *)malloc(sizeof(t_info));
	init_list(info);  //list 초기화
	idx = -1;
	while (++idx < argc - 1)
	{
		arr[idx] = ft_atoi(argv[idx + 1]);
		if ((arr[idx] == 0 && argv[idx + 1][0] != '0')
			|| argv_check(arr, idx) == 0)  // 문자가 들어왔을 때 + 인자 에러 체크(정수 범위, 중복)
			return (print_error("Error\n"));
	}
	push_all(info->stack[A], arr, argc - 1);  // A 에 인자로 들어온 값 넣어주기

	// -------
	// sab(info, A);
	// pab(info, B);
	// print_stack(info->stack[A], A);
	// print_stack(info->stack[B], B);
	// print_cmd(&info->cmd); // 안씀
	// -------
	return (0);
}
