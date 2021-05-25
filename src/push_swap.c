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

int	main(int argc, char **argv)
{
	int		idx;
	t_info	*info;
	int		arr[argc];

	info = (t_info *)malloc(sizeof(t_info));
	//list 초기화
	init_list(info);
	idx = -1;
	while (++idx < argc - 2)
	{
		arr[idx] = ft_atoi(argv[idx + 2]);
		// 인자 에러 체크(정수 범위, 중복)
		if (argv_check(arr, arr[idx], argc) == 0)
			return (0);
	}
	// A 에 인자로 들어온 값 넣어주기
	push_all(info->stack[0], arr, argc);
	return (0);
}
