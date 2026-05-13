/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungrit <srungrit@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 23:03:13 by srungrit          #+#    #+#             */
/*   Updated: 2026/05/13 23:22:02 by srungrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	prox;

	prox = 1;
	if (nb < 0)
		return (0);
	while ((prox * prox < nb) && prox <= 46340)
		prox++;
	if (prox * prox == nb)
		return (prox);
	return (0);
}
