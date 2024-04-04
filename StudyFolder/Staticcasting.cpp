/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Staticcasting.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:43:21 by ivanpetruni       #+#    #+#             */
/*   Updated: 2024/04/04 22:43:23 by ivanpetruni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main() {

  double num = 3.7 * 5.5;
  cout << "Before using static_cast: num = " << num << endl;

  int cast_var;

  cast_var = static_cast <int> (num);

  cout << "After using static_cast: cast_var = " << cast_var;

  return 0;
}
