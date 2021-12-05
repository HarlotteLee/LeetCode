class Solution
{
public:
  int romanToInt(string s)
  {
    int n=0;
    int i=0;
    while(i<s.size())
    {
      switch(s[i])
      {
        case 'M':
          n+=1000;
          i++;
          break;
        case 'D':
          n+=500;
          i++;
          break;
        case 'C':
          if(s[i+1]=='M')
          {
            n+=900;
            i+=2;
            break;
          }
          else if(s[i+1]=='D')
          {
            n+=400;
            i+=2;
            break;
          }
        case 'L':
          n+=50;
          i++;
          break;
        case 'X':
          if(s[i+1]=='C')
          {
            n+=90;
            i+=2;
            break;
          }
          else if(s[i+1]=='L')
          {
            n+=40;
            i+=20;
            break;
          }
          else
          {
            n+=10;
            i++;
            break;
          }
        case 'V':
          n+=5;
          i++;
          break;
        case 'I':
          if(s[i+1]=='X')
          {
            n+=9;
            i+=2;
            break;
          }
          else if(s[i+1]=='V')
          {
            n+=4;
            i+=2;
            break;
          }
          else
          {
            n++;
            i++;
            break;
          }
      }
    }
    return n;
  }
};
          
          
            
    
          
