#include "solution.h"

std::map<char, char> Solution::mapping(std::string from, std::string to)
{ 
  std::map<char, char> mymap = {};
  if(from.size() != to.size())
  {
    return mymap;
  }
  else
  {
    std::map<char, int> mp_from, mp_to;
    //set up a map which associates chararcters to intergers
    for (int i = 0, j = 0; i < from.size(); ++i)
    {
        std::pair<std::map<char, int>::iterator, bool> dt;
        dt = mp_from.insert(std::pair<char, int>(from[i], j));
        if(dt.second == false)//take advantage of exclusive pairing
        {
          continue;
        }
        else
        {
          j++;
        }
        
    }
    //Assign a unique interger to every key in the string. For example, "apple":01123, "banana":012121
    std::vector<int> StrFromToInt;
    for (int i = 0; i < from.size(); ++i)
    {
      StrFromToInt.push_back(mp_from.at(from[i]));
    }
    
    //do it again with StringTo
    for (int i = 0, j = 0; i < to.size(); ++i)
    {
        std::pair<std::map<char, int>::iterator, bool> dt;
        dt = mp_to.insert(std::pair<char, int>(to[i], j));
        if(dt.second == false)
        {
          continue;
        }
        else
        {
          j++;
        }
        
    }
    std::vector<int> StrToToInt;
    for (int i = 0; i < to.size(); ++i)
    {
      StrToToInt.push_back(mp_to.at(to[i]));
    }

    /*now see if the two vectors<int> contain same values, if they are, they will be the clue*/
    if(StrFromToInt == StrToToInt)
    {
      for(int i = 0; i < from.size(); ++i)
      mymap.insert(std::pair<char, char>(from[i],to[i]));
      return mymap;
    }
    else
    { 
      /*apparently they are not what we want, return a empty map*/
      return mymap;
    }
    
  } 
    
}