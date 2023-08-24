#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <boost/lexical_cast.hpp>
using namespace std;

struct Journal
{
  string title;
  vector<string> entries;

  explicit Journal(const string& title)
    : title{title}
  {
  }

  void add(const string& entry);

};

void Journal::add(const string& entry)
{
  static int count = 1;
  entries.push_back(boost::lexical_cast<string>(count++)
    + ": " + entry);
}


int main()
{
  Journal journal{"Dear Diary"};
  journal.add("Love is unconditional");
  journal.add("Beauty is skin deep");

  cout << "Title of the diary is " << journal.title <<" and contents are" << endl;
  for(string &s: journal.entries)
      cout << s << endl;


}
