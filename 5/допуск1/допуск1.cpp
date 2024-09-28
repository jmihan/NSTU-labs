
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    int fi, se, th, fo;
    fi = n / 1000;
    se = n / 100 % 10;
    th = n % 100 / 10;
    fo = n % 10;
    //cout << fi << se << th << fo;
    int res = 0;
    if (fi < 3 && fo > 7)
    {
        if (fi > se && fi > th && fi > fo)
        {
            res = fi * 1000;
            if (se > th && se > fo)
            {
                res += se * 100;
                if (th > fo)
                {
                    res += th * 10 + fo;
                }
                else
                {
                    res += fo * 10 + th;
                }
            }
            else
            {
                if (th > se && th > fo)
                {
                    res += th * 100;
                    if (se > fo)
                    {
                        res += se * 10 + fo;
                    }
                    else
                    {
                        res += fo * 10 + se;
                    }
                }
                else
                {
                    if (fo > se && fo > th)
                    {
                        res += fo * 100;
                        if (se > th)
                        {
                            res += se * 10 + th;
                        }
                        else
                        {
                            res += th * 10 + se;
                        }
                    }
                }
            }
        }
        if (se > fi && se > th && se > fo)
        {
            res = se * 1000;
            if (fi > th && fi > fo)
            {
                res += fi * 100;
                if (th > fo)
                {
                    res += th * 10 + fo;
                }
                else
                {
                    res += fo * 10 + th;
                }
            }
            else
            {
                if (th > fi && th > fo)
                {
                    res += th * 100;
                    if (fi > fo)
                    {
                        res += fi * 10 + fo;
                    }
                    else
                    {
                        res += fo * 10 + fi;
                    }
                }
                else
                {
                    if (fo > fi && fo > th)
                    {
                        res += fo * 100;
                        if (fi > th)
                        {
                            res += fi * 10 + th;
                        }
                        else
                        {
                            res += th * 10 + fi;
                        }
                    }
                }
            }
        }
        if (th > fi && th > se && th > fo)
        {
            res = th * 1000;
            if (fi > se && fi > fo)
            {
                res += fi * 100;
                if (se > fo)
                {
                    res += se * 10 + fo;
                }
                else
                {
                    res += fo * 10 + se;
                }
            }
            else
            {
                if (se > fi && se > fo)
                {
                    res += se * 100;
                    if (fi > fo)
                    {
                        res += fi * 10 + fo;
                    }
                    else
                    {
                        res += fo * 10 + fi;
                    }
                }
                else
                {
                    if (fo > fi && fo > se)
                    {
                        res += fo * 100;
                        if (fi > se)
                        {
                            res += fi * 10 + se;
                        }
                        else
                        {
                            res += se * 10 + fi;
                        }
                    }
                }
            }
        }
        if (fo > fi && fo > se && fo > th)
        {
            res = fo * 1000;
            if (fi > se && fi > th)
            {
                res += fi * 100;
                if (se > th)
                {
                    res += se * 10 + th;
                }
                else
                {
                    res += th * 10 + se;
                }
            }
            else
            {
                if (se > fi && se > th)
                {
                    res += se * 100;
                    if (fi > th)
                    {
                        res += fi * 10 + th;
                    }
                    else
                    {
                        res += th * 10 + fi;
                    }
                }
                else
                {
                    if (th > fi && th > se)
                    {
                        res += th * 100;
                        if (fi > se)
                        {
                            res += fi * 10 + se;
                        }
                        else
                        {
                            res += se * 10 + fi;
                        }
                    }
                }
            }
        }
    }

    if (res == 0)
    {
        cout << "First not smaller then 3 and last not bigger then 7";
    }
    else
    {
        cout << "\n" << res;

    }
    
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << "3 6 9 12 15" << endl;
    }



    return 0;
}
