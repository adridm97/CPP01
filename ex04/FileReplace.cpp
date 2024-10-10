/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:52:15 by adrian            #+#    #+#             */
/*   Updated: 2024/10/10 21:44:10 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

void FileReplace::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: Las cadenas s1 y s2 no pueden estar vacías." << std::endl;
        return;
    }
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cout << "Error: No se pudo abrir el archivo " << filename << std::endl;
        return;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cout << "Error: No se pudo crear el archivo de salida." << std::endl;
        infile.close();
        return;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos;
        while ((pos = line.find(s1)) != std::string::npos)
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
}