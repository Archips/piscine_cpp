/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:34:02 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 13:05:57 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(std::string filename, std::string s1, std::string s2) {

    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     line;

    infile.open(filename.c_str());
    if (!infile.is_open()) {
        std::cout << "Error : couldn't open the file" << std::endl;
        return (1);
    }
    outfile.open((filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cout << "Error : couldn't create the file" << std::endl;
        return (1);
    }
    while (getline(infile, line)) {

        int     pos;
        size_t  len;

        pos = 0;
        len = line.size();
        for (size_t i = 0; i < len; i ++) {
            pos = line.find(s1, pos);
            if (pos != -1) {
                line.erase(pos, s1.size());
                line.insert(pos, s2);
            }
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return (0);
}

int main(int ac, char **av) {

    std::string filename;
    std::string s1;
    std::string s2;

    if (ac != 4) {
        std::cout << "Error : Wrong number of arguments" << std::endl;
        return (1);
    }

    filename = av[1];
    s1 = av[2];
    s2 = av[3];

    if (s1.compare(s2) == 0) {
        std::cout << "Error : there's nothing to replace" << std::endl;
        return (1);
    }

    if (replace(filename, s1, s2))
       return (1);
    return (0);
}
