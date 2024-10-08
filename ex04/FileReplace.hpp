/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:50:36 by adrian            #+#    #+#             */
/*   Updated: 2024/10/10 21:38:32 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplace
{
    public:
        static void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif