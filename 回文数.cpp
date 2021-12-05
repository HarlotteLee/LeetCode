class Solution
{
  public:
  bool isPalidrome(int x)
  {
    if(x>=0&&x<10)
      return true;
    if(x<0||x%10==0)
      return false;
    int y=0;
    while(x>y)
    {
      int e=x%10;
      x=x/10;
      y=y*10+e;
    }
    if(x*10<=y)
      y=y/10;
    return x==y;
  }
};
