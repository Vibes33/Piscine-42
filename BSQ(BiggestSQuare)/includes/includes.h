/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:06:13 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 13:50:41 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# include "libs.h"
# include "structs.h"

int				ft_strict_atoi(char *str);
int				ft_strlen(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
char			**ft_split(char *str, char *charset);
void			big_big_free(char **array, int size);
int				first_line_check(char *file_name, char **first_line);
char			**ft_file(int file_open, unsigned long mapsize);
int				ft_map_equal(char **map, char obstacle, char void_indic);
void			ft_algo(t_map *all, t_map_params *param);
void			mass_print(char	**map, int size);
t_map_params	*param_filler(char *first_line);
struct s_map	*ft_map_assign(char **map);
int				min(int a, int b, int c);
void			ft_fill_square(char **map, t_square *square,
					t_map_params *param);
void			ft_switch_best(t_square *best, int current, t_cords coords);
char			*isolate_first_line(int fd);
int				stdin_handler(void);
void			ft_putstr(char *str);
int				ft_nprint_param(t_map_params *params);
char			**big_free(char *str);

#endif