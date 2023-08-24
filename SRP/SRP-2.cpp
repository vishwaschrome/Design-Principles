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

  void save(const string& filename);
};

void Journal::add(const string& entry)
{
  static int count = 1;
  entries.push_back(boost::lexical_cast<string>(count++)
    + ": " + entry);
}

void Journal::save(const string& filename)
{
  ofstream ofs(filename);
  for (auto& s : entries)
    ofs << s << endl;
}


int main()
{
  Journal journal{"Dear Diary"};
  journal.add("I ate a cookie");
  journal.add("I woke up early today");

  journal.save("diary.txt");

}
