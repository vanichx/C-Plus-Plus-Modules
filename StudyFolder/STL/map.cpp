/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:19:46 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/22 22:44:38 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
    STL

    map

    multimap
*/

int main()
{
    ////////////////////////        PAIR        /////////////////////////////////////////////////////////
    
    // pair<int, string> p(1, "telephone"); // aux structure which helps us to connect two elements together

                    // // (first element of the pair its a key , and the second element it's value)
                    // // by the key we are building binary tree
                    // //  p("1", "telephone");

    // pair<string, string> p("1", "telephone");
    // cout << p.first << endl; // we can call the first and the second element of the pair to see them
    // cout << p.second << endl;
    ////////////////////////        PAIR        /////////////////////////////////////////////////////////


    // //  #######################################   EXAMPLE #1 ####################################### 
    
    
//     ///////////////////////         MAP         ////////////////////////////////////////////////////////

//     map<int, string> myMap; // init our map container

//     myMap.insert(pair<int, string>(3, "monitor")); 
//     myMap.insert(make_pair(1, "telephone")); // here to add the elements to the map container we need to use method make pair and only after add pair to this container
//     myMap.insert(pair<int, string>(2, "notebook")); // or like this manualy say which pair we wanted to add
//     myMap.insert(pair<int, string>(22, "keyboaard")); 


//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
//             myMap.insert(pair<int, string>(22, "another keyboard"));
//             // // try to check the size , you will see that element was not added to the container
//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
//     // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! WE CANT ADD ELEMENTS WITH THE SAME KEY VALUE 
    

//     // myMap.emplace(3, "monitor"); // FORBIDEN METHOD FORM C++11


//     // [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]

//         cout << myMap[3] << endl; // for map container we have alredy by default overloaded subscripting operator [] , it takes into a first param the key value in our case the tyoe of the key is integer and that's why we need to put int inside of [ ];
    
//     // [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]



//     // // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ FIND METHOD @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//     // // How we could understand do we have some vakue in the map or no ?
//     // // We need to call method .find();

//     // map <int, string>::iterator it = myMap.find(222); // it use KEY to find something the you want , in our case key is int type

//     // if (it == myMap.end()) // mrthod end() returns to us some area of the memory which is located behind the stl container
//     //     cout << "Sorry, didnt find the value." << endl;
//     // else
//     //     cout  << "key: "<< it->first <<  " | value: " << it->second << endl;

//     // // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ FIND METHOD @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@










// // // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ SIZE METHOD @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//     cout << myMap.size() << endl;
// // // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ SIZE METHOD @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



//     ///////////////////////         MAP         ////////////////////////////////////////////////////////

    // //  #######################################   EXAMPLE #1 ####################################### 

    // //  #######################################   EXAMPLE #2 ####################################### 
    
    map<string, int> myMap;

    myMap.insert(pair<string, int>("Petya", 1313)); // Key is name and value its amount of money on the account  
    myMap.insert(pair<string, int>("Masha", 222)); // Key is name and value its amount of money on the account 
    myMap.insert(pair<string, int>("Misha", 4441)); // Key is name and value its amount of money on the account 

    
    cout << myMap["Petya"] << endl; // Specify the key , and look it will print the 1313 to the teminal
    cout << myMap["Masha"] << endl; // Specify the key , and look it will print the 222 to the teminal
    cout << myMap["Misha"] << endl; // Specify the key , and look it will print the 4441 to the teminal


    // WE CAN CHANGE THE VAKUE BY SPEC THE KEY
    myMap["Petya"] = 7777;
    // To check the value ill print it 
    cout << myMap["Petya"] << endl;  // and here we are the new value was assigned to this container 7777 appear in the terminal


    // IF WE TRY TO ASSIGN SOME VALUE TO THE ELEMENT WHICH IS NOT EXISTING 
    // FOR EXAMPLE 
    myMap["Vasya"] = 888; // ELEMENT "Vasya" does not exist , and this element will be added to the map
    // THIS ELEMENT WAS ADDED TO THE CONTAINER
    // cout << myMap.size() << endl; // Size will be + 1;

    /// METHOD .at() METHOD .at() METHOD .at() METHOD .at() METHOD .at() METHOD .at()
    myMap.at("Masha") = 9191; // In this case it will find elem "Masha" but what if the element does not exist 
    try {
        myMap.at("Dasha") = 8383; // THIS CASE WE DONT HAVE ELEMENT "DASHA" 
    } catch (std::exception & ex) {
        cout << ex.what() << endl;
        cout << "This key is not in this container" << endl;
    }
    /// !!!!!!!!!!!!! BY USING OPERATOR .at() WE CANT ADD THIS ELEM TO CONTAINER IN CASE
    /// !!!!!!!!!!!!! BY USING OPERATOR .at() WE CANT ADD THIS ELEM TO CONTAINER IN CASE
    /// !!!!!!!!!!!!! BY USING OPERATOR .at() WE CANT ADD THIS ELEM TO CONTAINER IN CASE
    /// !!!!!!!!!!!!! BY USING OPERATOR .at() WE CANT ADD THIS ELEM TO CONTAINER IN CASE
    /// !!!!!!!!!!!!! BY USING OPERATOR .at() WE CANT ADD THIS ELEM TO CONTAINER IN CASE
    /// !!!!!!!!!!!!! IT WILL JUST IGNORE IT AND THROW an EXCEPTION std::out_of_range  
    /// !!!!!!!!!!!!! IT WILL JUST IGNORE IT AND THROW an EXCEPTION std::out_of_range  
    /// !!!!!!!!!!!!! IT WILL JUST IGNORE IT AND THROW an EXCEPTION std::out_of_range  
    /// !!!!!!!!!!!!! IT WILL JUST IGNORE IT AND THROW an EXCEPTION std::out_of_range  
    /// METHOD .at() METHOD .at() METHOD .at() METHOD .at() METHOD .at() METHOD .at()



    // IF WE WANT TO DELETE THE ELEMENT FOR MAP

    myMap.erase("Petya");
    cout << myMap.size() << endl; // size is 3
    
    // IF WE WANT TO DELETE THE ELEMENT FOR MAP

    return 0;
}