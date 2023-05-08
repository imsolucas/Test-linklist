/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:35:23 by djin              #+#    #+#             */
/*   Updated: 2023/05/05 13:58:01 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//newnode holds the address of the new node that we created

#include "libft.h"

struct node
{
	int	data;
	struct node *next;
};

int	main(void)
{
	struct node *newnode, *head, *temp;
	int		choice;

	choice = 1;
	head = 0;
	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter a number value: ");
		scanf("%d", &newnode -> data);
		newnode -> next = 0;
		if (head == 0)
		{
			head = newnode;
			temp = newnode;
		}
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
		printf("Do you wish to continue? (1, 0): ");
		scanf("%d", &choice);
	}
}
