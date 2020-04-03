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
  cout << "Hyperlinks" << endl;
  if(_list.size()==0)
  {
    cout << " is empty" << endl;
  }
  else
  {
    cout << endl;
  }
  for(int i=_list.size()-1;i>=0;i--)
  {
    cout << i+1 << " of " << _list.size() << " "
    << _list[i].text << " " 
    << _list[i].url << endl;
  }
}
void TopTenList::display_forward()
{
  cout << "Emoticon Gallery" << endl;
  if(_list.size()==0)
  {
    cout << " is empty" << endl;
  }
  else
  {
    cout << endl;
  }
  for(int i=0;i<_list.size();i++)
  {
    cout << i+1 << " of " << _list.size() << " "
    << _list[i].text << " " 
    << _list[i].url << endl;
  }
}

