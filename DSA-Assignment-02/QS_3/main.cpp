#include "stacktype.cpp"
using namespace std;

bool isPalindrome(string s)
{
   int length = s.size();

   // Creating a Stack
   StackType<char> st;

   // Finding the mid
   int i, mid = length / 2;

   for (i = 0; i < mid; i++)
   {
      st.Push(s[i]);
   }

   // Checking if the length of the string
   // is odd, if odd then neglect the
   // middle character
   if (length % 2 != 0)
   {
      i++;
   }

   char ele;
   // While not the end of the string
   while (s[i] != '\0')
   {
      ele = st.Top();
      st.Pop();

      // If the characters differ then the
      // given string is not a palindrome
      if (ele != s[i])
         return false;
      i++;
   }

   return true;
}

int main()
{
   string s;
   cout << "Enter a string: ";
   cin >> s;

   if (isPalindrome(s))
   {
      cout << "Yes";
   }
   else
   {
      cout << "No";
   }

   return 0;
}