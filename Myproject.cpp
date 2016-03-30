#include <iostream>

#include <string>

#include <vector>

#include <ctime>

//#include <ext/hash_set> // linux

#include <hash_set> // windows

#include <algorithm>

#include <fstream>

using namespace std;

//using namespace __gnu_cxx; // linux

using namespace stdext; // windows

typedef hash_set<string> anagram_hash;

vector<string> permute (string s)

{

vector<string> r;

string result="\n";

  if (s.length()==1){

  r.push_back(s);                               

   return r;

  }

   else      

  {

  for (int i=0; i<s.length(); i++)

  {

  char temp = s[0];

  s[0]=s[i];

  s[i]=temp;                                          

  vector<string> perms = permute (s.substr(1));

  for (std::vector<string>::iterator it = perms.begin() ; it!= perms.end(); ++it)

r.push_back(s[0]+*it);

}

  return r;

}

}

// ITERATOR iterates over  words in the dictionary

size_t populate(anagram_hash& hash, ifstream& in_stream)

{

int size_t = 100;

string next;

while (in_stream >> next)

{

                hash.insert(next);

}

cout << hash.size()<< "entries in the hash" << endl;

return hash.size();

}

int main()

{

      const char* dictionaryfile = "c://cs//words.txt";

                ifstream file;

                cout << dictionaryfile << endl;

                file.open(dictionaryfile);

                if (file.fail())

                                 cout << "Error opening file ...";

                anagram_hash hash;

                size_t nwords = populate(hash, file);               

                cout << nwords << " lines in the file" << endl;

               

                        clock_ t begint = clock();

                        string words[] = {"cat", "professor", "abandon", "angel", "crows", "bare","man", "animal", "professor", "abandon", "cat", "professor", "abandon", "angel", "crows", "bare","man", "animal", "professor", "abandon", "bare", "man", "animal", "professor", "abandon" };

 

               

                        for (int index=0; index<20; index++)

                        {

                              cout << "Anagrams of " << words[index] << endl;

                              vector<string> p = permute(words[index]);                               

                               for (std::vector<string>::iterator it = p.begin() ; it != p.end(); ++it)

                               {

                          //cout << *it << endl;

                                     if (hash.find(*it) != hash.end())

                                     {

                                                 cout << *it << endl;

                                     }

                              }

                        } 

 

 

                clock_t endt = clock();

                double sec = (endt - begint) / CLOCKS_PER_SEC ;

            cout <<"The computing time is " << (endt - begint) << " clicks, " << sec << " seconds. " << endl;

system("pause");

}

 
