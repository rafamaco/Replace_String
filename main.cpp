#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>
#include <string>
using namespace std;

string new_line="", c1, d1, s1;

int comma(string line, string sstr)
{
int c;
sstr += ",";
c = line.find(sstr); 
return c;
}

int dot(string line, string sstr)
{
int d;
sstr += ".";
d = line.find(sstr); 
return d;
}

int space(string line, string sstr)
{
int s;
sstr += " ";
s = line.find(sstr); 
return s;
}

void swtich(string sstr, string rstr, int x)
{
int y = 0;
y = sstr.length();
new_line.replace(x,y,rstr);
}

int main()
{
  string line, sstr, rstr;
  int c = 0, d = 0, s = 0, y = 0;


  cout << "Single Line Input String: " << endl;
  getline(cin, line);
  cout << "Search String: " << endl;
  getline(cin, sstr);
  cout << "Replace String: " << endl;
  getline(cin, rstr);
  new_line = line;

c = comma(new_line, sstr);
    if (c != -1)
    {
        swtich(sstr, rstr, c);
        c = new_line.find(sstr, c+1);
        if (c != -1){
            swtich(sstr, rstr, c);
        }
    }

  d = dot(new_line, sstr);
    if (d != -1)
    {
        swtich(sstr, rstr, d);
        d = new_line.find(sstr, d+1);
        if (d != -1){
            swtich(sstr, rstr, d);
        }

    }

  s = space(new_line, sstr);
  if (s != -1)
    {
        swtich(sstr, rstr, s);
        s = new_line.find(sstr + " ", s+1);
        if (s != -1){
            swtich(sstr, rstr, s);
        }
    }

  cout << new_line << endl;

  return 0;
}