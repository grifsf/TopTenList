//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;
TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index-1)=link;
}

Hyperlink TopTenList::get(int index)
{
  return _list.at(index-1);
}
void TopTenList::display_backward()
{
  for(int i=9;i>=0;i--)
  {
    cout << _list[i].text << endl;
  }
}
void TopTenList::display_forward()
{
  for(int i=0;i<10;i++)
  {
    cout <<_list[i].text << endl;
  }
}

