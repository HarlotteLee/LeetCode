class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int len = s.length();
        int i = 0;
        for(i = 0; i < len - 1; i++)
        {
            if(s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                sum -= 1;
                continue;
            }
            else if(s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                sum -= 10;
                continue;
            }
            else if(s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                sum -= 100;
                continue;
            }
            switch(s[i])
            {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            }
        }
        switch(s[i])
        {
        case 'I':
            sum += 1;
            break;
        case 'V':
            sum += 5;
            break;
        case 'X':
            sum += 10;
            break;
        case 'L':
            sum += 50;
            break;
        case 'C':
            sum += 100;
            break;
        case 'D':
            sum += 500;
            break;
        case 'M':
            sum += 1000;
            break;
        }
        return sum;
    }
};

