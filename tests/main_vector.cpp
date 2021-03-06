/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmin <kmin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:06:39 by kmin              #+#    #+#             */
/*   Updated: 2020/11/11 15:04:32 by kmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "../Vector/vector.hpp"

int main()
{
    ft::vector<int> v;
    ft::vector<int> v2(10, 0);
    ft::vector<int>::iterator it;
    // for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    std::cout << "=======================" << std::endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    it = v.begin();
    ++it;
    ++it;
    // it = v.insert(it, 400);
    v.insert(it, 4, 300);

    int myarray[] = {501, 502, 503};
    v.insert(v.begin(), myarray, myarray + 3);
    it = v.begin();
    ft::vector<int> v3(myarray, myarray + 3);
    ft::vector<int> v4(v.begin(), v.end());
    std::cout << v3.capacity() << " " <<  v3.size() << std::endl;
    std::cout << v4.capacity() << " " <<  v4.size() << std::endl;

    v.insert(it, v2.begin(), v2.end());

    v.swap(v2);
    for (ft::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    for (ft::vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "=======================" << std::endl;
    
    // TODO: fix below compare statement
    // if (v != v2)
    //     std::cout << "not equal!" << std::endl;
    
    
    // ft::vector<int> myvector;

    // // set some values (from 1 to 10)
    // for (int i = 1; i <= 10; i++)
    //     myvector.push_back(i);

    // // erase the 6th element
    // myvector.erase(myvector.begin() + 5);

    // // erase the first 3 elements:
    // myvector.erase(myvector.begin(), myvector.begin() + 3);

    // std::cout << "myvector contains:";
    // for (unsigned i = 0; i < myvector.size(); ++i)
    //     std::cout << ' ' << myvector[i];
    // std::cout << '\n';
    // std::cout << "=======================" << std::endl;

    // ft::vector<int> first;
    // ft::vector<int> second;
    // ft::vector<int> third;

    // first.assign(7, 100); // 7 ints with a value of 100

    // ft::vector<int>::iterator it;
    // it = first.begin() + 1;
    // first.insert(it, 1768);
    // it = first.begin() + 1;
    // first.insert(it, 9868);
    // it = first.begin() + 1;
    // first.insert(it, 6568);

    // second.assign(it, first.end() - 1); // the 5 central values of first

    // int myints[] = {1776, 7, 4};
    // third.assign(myints, myints + 3); // assigning from array.

    // std::cout << "Size of first: " << int(first.size()) << '\n';
    // for (ft::vector<int>::iterator it = first.begin(); it != first.end(); ++it)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    // std::cout << "Size of second: " << int(second.size()) << '\n';
    // for (ft::vector<int>::iterator it = second.begin(); it != second.end(); ++it)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    // std::cout << "Size of third: " << int(third.size()) << '\n';
    // for (ft::vector<int>::iterator it = third.begin(); it != third.end(); ++it)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    // std::cout << "=======================" << std::endl;

    // ft::vector<int>::size_type sz;

    // ft::vector<int> foo;
    // sz = foo.capacity();
    // std::cout << "making foo grow:\n";
    // for (int i = 0; i < 100; ++i)
    // {
    //     foo.push_back(i);
    //     if (sz != foo.capacity())
    //     {
    //         sz = foo.capacity();
    //         std::cout << "capacity changed: " << sz << '\n';
    //     }
    // }

    // ft::vector<int> bar;
    // sz = bar.capacity();
    // bar.reserve(30); // this is the only difference with foo above
    // std::cout << bar.capacity() << std::endl;
    // bar.push_back(111);
    // bar.reserve(100); // this is the only difference with foo above
    // std::cout << bar.capacity() << std::endl;

    // std::cout << "Size of bar: " << int(bar.size()) << '\n';
    // for (ft::vector<int>::iterator it = bar.begin(); it != bar.end(); ++it)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    // std::cout << "making bar grow:\n";
    // for (int i = 0; i < 100; ++i)
    // {
    //     bar.push_back(i);
    //     if (sz != bar.capacity())
    //     {
    //         sz = bar.capacity();
    //         std::cout << "capacity changed: " << sz << '\n';
    //     }
    // }
    // std::cout << "=======================" << std::endl;

    // std::vector<int> myvector;

    // // set some initial content:
    // for (int i = 1; i < 10; i++)
    //     myvector.push_back(i);

    // myvector.resize(5);
    // std::cout << "myvector contains:";
    // for (int i = 0; i < myvector.size(); i++)
    //     std::cout << ' ' << myvector[i];
    // std::cout << '\n';
    // myvector.resize(8, 100);
    // std::cout << "myvector contains:";
    // for (int i = 0; i < myvector.size(); i++)
    //     std::cout << ' ' << myvector[i];
    // std::cout << '\n';
    // myvector.resize(12);

    // std::cout << "myvector contains:";
    // for (int i = 0; i < myvector.size(); i++)
    //     std::cout << ' ' << myvector[i];
    // std::cout << '\n';
    // myvector.resize(7);
    // std::cout << "myvector contains, capacity = " << myvector.capacity() << " : ";
    // for (int i = 0; i < myvector.size(); i++)
    //     std::cout << ' ' << myvector[i];
    // std::cout << '\n';
    // while (1);
    return (0);
}