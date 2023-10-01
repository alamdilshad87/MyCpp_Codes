#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream file1,file2;
   string filename1,filename2;
   string word1,word2;
   int count1=0,count2=0;
   cout<<"please enter the 1st file name:";
   getline(cin,filename1);
   cout<<"please enter the 2nd file name:";
   getline(cin,filename2);
   file1.open(filename1.c_str());
   while(!file1.eof())
   {
       file1>>word1;
       count1++;
   }
   file1.close();
   file2.open(filename2.c_str());
   while(!file2.eof())
   {
       file2>>word2;
       count2++;
   }
   file2.close();
   cout<<"no. of characters in first file:"<<count1;
   cout<<"no. of characters in second file:"<<count2;
   cout<<"total characters:"<<count1+count2;
    return 0;
}
