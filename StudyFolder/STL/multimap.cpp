/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multimap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:45:06 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/22 22:52:32 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <string>

using namespace std;

/*
    STL

    Multimap
*/

// // Basicly THE SAME AS A MAP BUT CAN STORE THE SAME KEYS 

int main()
{
    multimap<string, int> myMultimap;

    myMultimap.insert(pair<string, int>("Petya", 1313));
    myMultimap.insert(pair<string, int>("Petya", 1414));
    myMultimap.insert(pair<string, int>("Masha", 222));
    myMultimap.insert(pair<string, int>("Misha", 4441));


    // // MULTIMAP DOES NOT HAVE OVERLOADED [] OPERATOR
    // // // MULTIMAP DOES NOT HAVE OVERLOADED [] OPERATOR
    // cout << myMultimap["Petya"] << endl;            // THIS LINE GIVE US AN ERROR
    // // AND ALSO METHID AT IS NOT HERE 
    // cout << myMultimap.at("Masha") << endl;            // THIS LINE GIVE US AN ERROR
    // // THIS IS BECAUSE THE KEY VALUES CAN REPEAT AND [] or .at() DOES NOT KNOW WHAT TO RETURN TO US
 
    cout << myMultimap.size() << endl;
}