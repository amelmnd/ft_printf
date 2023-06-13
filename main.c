/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:44 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 15:55:15 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FONCTION TESTING FILE

#include "ft_printf.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void	test(int i)
{
	printf("TRUE : %X\n", i);
	ft_printf("MY : %X\n", i);
}

int	main(void)
{
	test(0);
	test(1);
	test(10);
	test(11);
	test(15);
	test(16);
	test(17);
	test(99);
	test(100);
	test(101);
	test(-1);
	test(-10);
	test(-11);
	test(-15);
	test(-16);
	test(-17);
	test(-99);
	test(-100);
	test(-101);
	test(42);
	test(-42);
	return (0);
}
//LES DIFFERENTS TESTS REALISES
/*
	printf("-----------------------------------------------------\n");
	printf("SANS POURCENTAGE\n");
	ft_printf("-----------------------------------------------------\n");
	printf("----CAS STR----\n");
	printf("TRUE : empty flag\n");
	ft_printf("MY : empty flag\n");
	printf("----CAS STR SPE CARA----\n");
	printf("TRUE : empty flag &&\n");
	ft_printf("MY : empty flag &&\n");
	printf("----CAS STR ONLY SPE CARA----\n");
	printf("@\n");
	ft_printf("@\n");
	printf("----CAS nbr----\n");
	printf("125\n");
	ft_printf("225\n");
	printf("----CAS ONE CARA----\n");
	printf("T\n");
	ft_printf("m\n");
	printf("----CAS CHAINE VIDE----\n");
	printf("");
	ft_printf("");
	printf("----CAS VIDE----\n");
	//GENERE MEME ERREUR DE COMPILATION
	printf();
	ft_printf();


	printf("-----------------------------------------------------\n");
	printf("POURCENTAGE C\n");
	printf("-----------------------------------------------------\n");
	printf("----NO AFTER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %c\n", 't');
	ft_printf("MY : %c\n", 'm');
	printf("----CAS SPE CARA----\n");
	printf("TRUE : %c\n", '&');
	ft_printf("MY : %c\n", '&');
	printf("----CAS INT => CHAR----\n");
	printf("TRUE : %c\n", 95);
	ft_printf("MY : %c\n", 95);
	printf("----WITH AFTER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %c = true\n", 't');
	ft_printf("MY : %c = mine\n", 'm');
	printf("----CAS SPE CARA----\n");
	printf("TRUE : %c  = true\n", '&');
	ft_printf("MY : %c = mine\n", '&');
	printf("----CAS INT => CHAR----\n");
	printf("TRUE : %c  = true\n", 95);
	ft_printf("MY : %c = mine\n", 95);
	printf("----WITH OTHER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %c = true %c\n", 't', 'r');
	ft_printf("MY : %c = mine %c\n", 'm', 'i');
	printf("----WITH OTHER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %s= true %c\n", "titi", 't');
	ft_printf("MY : %s = mine %c\n", "titi", 'm');


	printf("-----------------------------------------------------\n");
	printf("POURCENTAGE S\n");
	printf("-----------------------------------------------------\n");
	printf("----NO AFTER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %s\n", "titi");
	ft_printf("MY : %s\n", "grominet");
	printf("----CAS SPE CARA----\n");
	printf("TRUE : %s\n", "titi & grominet");
	ft_printf("MY : %s\n", "titi & grominet");
	printf("----CAS INT => CHAR----\n");
	printf("----WITH AFTER----\n");
	printf("----CAS CARA ----\n");
	printf("TRUE : %s = true\n", "titi & grominet");
	ft_printf("MY : %s = mine\n", "titi & grominet");
	printf("----CAS SPE CARA----\n");
	printf("TRUE : %s  = true\n", "titi & grominet");
	ft_printf("MY : %s = mine\n", "titi & grominet");
	printf("----CAS EMPTY----\n");
	printf("TRUE : %s  = true\n", "");
	ft_printf("MY : %s = mine\n", "");


	printf("-----------------------------------------------------\n");
	printf("POURCENTAGE POURCENTAGE\n");
	printf("-----------------------------------------------------\n");
	printf("TRUE : %%\n");
	ft_printf("MY:%%\n");
	printf("TRUE:%%%c\n", 'T');
	ft_printf("MY:%%%c\n", 'T');


	printf("-----------------------------------------------------\n");
	printf("POURCENTAGE i\n");
	printf("-----------------------------------------------------\n");
	printf("----NO AFTER----\n");
	printf("----CAS 1 CHIFFRE ----\n");
	printf("TRUE : %i\n", 2);
	ft_printf("MY : %i\n", 2);
	printf("----CAS 1 CHIFFRE NEG----\n");
	printf("TRUE : %i\n", -2);
	ft_printf("MY : %i\n", -2);
	printf("----CAS +R CHIFFRE----\n");
	printf("TRUE : %i\n", 85461);
	ft_printf("MY : %i\n", 85461);
	printf("----CAS +R CHIFFRE NEG----\n");
	printf("TRUE : %i\n", -85461);
	ft_printf("MY : %i\n", -85461);
	printf("----CAS INT_MAX----\n");
	printf("TRUE : %i\n", 2147483647);
	ft_printf("MY : %i\n", 2147483647);
	printf("----CAS INT_MIN----\n");
	printf("TRUE : %i\n", -2147483647);
	ft_printf("MY : %i\n", -2147483647);
	printf("----CAS 0----\n");
	printf("TRUE : %i\n", 0);
	ft_printf("MY : %i\n", 0);
	printf("\n----WITH AFTER----\n");
	printf("----CAS 1 CHIFFRE ----\n");
	printf("TRUE : %i => \n", 2);
	ft_printf("MY : %i => \n", 2);
	printf("----CAS 1 CHIFFRE NEG----\n");
	printf("TRUE : %i => \n", -2);
	ft_printf("MY : %i => \n", -2);
	printf("----CAS +R CHIFFRE----\n");
	printf("TRUE : %i => \n", 85461);
	ft_printf("MY : %i => \n", 85461);
	printf("----CAS +R CHIFFRE NEG----\n");
	printf("TRUE : %i => \n", -85461);
	ft_printf("MY : %i => \n", -85461);
	printf("----CAS INT_MAX----\n");
	printf("TRUE : %i => \n", 2147483647);
	ft_printf("MY : %i => \n", 2147483647);
	printf("----CAS INT_MIN----\n");
	printf("TRUE : %i => \n", -2147483647);
	ft_printf("MY : %i => \n", -2147483647);
	printf("----CAS 0----\n");
	printf("TRUE : %i => \n", 0);
	ft_printf("MY : %i => \n", 0);
	printf("\n----WITH OTHER----\n");
	printf("----CAS 1 CHIFFRE ----\n");
	printf("TRUE : %i => \n", 2);
	ft_printf("MY : %i => \n", 2);
	printf("----CAS 1 CHIFFRE NEG----\n");
	printf("TRUE : %i => \n", -2);
	ft_printf("MY : %i => \n", -2);
	printf("----CAS +R CHIFFRE----\n");
	printf("TRUE : %i => \n", 85461);
	ft_printf("MY : %i => \n", 85461);
	printf("----CAS +R CHIFFRE NEG----\n");
	printf("TRUE : %i => %c\n", -85461, 'a');
	ft_printf("MY : %i => %c\n", -85461, 'a');
	printf("----CAS INT_MAX----\n");
	printf("TRUE : %i => %c\n", 2147483647, 'a');
	ft_printf("MY : %i => %c\n", 2147483647, 'a');
	printf("----CAS INT_MIN----\n");
	printf("TRUE : %i => %c\n", -2147483647, 'a');
	ft_printf("MY : %i => %c\n", -2147483647, 'a');
	printf("----CAS 0----\n");
	printf("TRUE : %i => %c\n", 0, 'a');
	ft_printf("MY : %i => %c\n", 0, 'a');
*/