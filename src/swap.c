/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:00:23 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/18 12:00:25 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_node **head) // 0 1 2 -> 1 0 2 
{
	*head = (*head)->next; // head=1
	(*head)->prev->next = (*head)->next; // 0->next=2
	(*head)->prev->prev = *head; // 0->prev=1
	(*head)->next->prev = (*head)->prev; // 2->prev=0
	(*head)->next = (*head)->prev; // 1->next=0
	(*head)->prev = NULL; // 1 first
}

void	sa(t_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

/*SWAP

Función: No retorna nada, y recibe un puntero a un puntero al primer 
nodo del stack
llamado "head" (es el inicio de la lista). Trabaja con 3 nodos de la lista.
Pasos: La funcion realiza cuatro pasos bien diferenciados que en codigo pueden
resultar dificiles de comprender por la sintaxis que se usa "->" es para acceder a
variables de tipo puntero y asi se puede acceder a todos los nodos ya 
que estan conectados
por un *prev y un *next. (NODOS 0, 1 y 2)
	-Paso 1: se itera una vez para colocarse en el nodo 1
	-Paso 2: se accede al nodo 0 y se modifican sus punteros *prev apunta al 1 
			y *next apunta al 2.
	-Paso 3: se accede al nodo 2 y se modifica su *prev apuntando  al nodo 0
	-Paso 4: se accede al nodo 1 y se modifica su *next apuntando al nodo 0 
			 y su *prev apuntando a NULL


###EN CODIGO###
de inicio el ptr apunta al nodo 0. Trabajamos con los nodos 0 1 2.
*head = (*head)->next; //el ptr apunta al 1
(*head)->prev->next = (*head)->next;//accedemos al 0 a traves del ptr del 1 
//para decirle que su next apunta al 2. 0 YA APUNTA A 2 NEXT
(*head)->prev->prev = *head; //accedemos al 0 a traves del 1 para decirle
//que su prev apunta al 1. 0 YA APUNTA 1PREV
(*head)->next->prev = (*head)->prev; //accedemos al 2 a traves del 1 para decirle
//que su prev apunta a 0;
(*head)->next = (*head)->prev; //accedemos al 1 y le decimos que su NEXT apunta 
// a su anterior que es 0.
(*head)->prev = NULL;*/