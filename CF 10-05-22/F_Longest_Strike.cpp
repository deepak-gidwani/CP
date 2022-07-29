// finally bc accept ho gya

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, res = INT_MIN, fl1 = 0, fr1 = 0, count = 1;
        int a, b;
        // bool flag = false;
        cin >> n >> k;
        int arr[n];
        for (auto &x : arr)
        {
            cin >> x;
        }
        map<int, int> m;
        for (auto x : arr)
        {
            m[x]++;
        }
        vector<int> temp;
        for (auto x : m)
        {
            if (x.second >= k)
            {
                temp.push_back(x.first);
            }
        }
        // for(auto x: temp){
        //     cout<<x<<" ";
        // }
        if (temp.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            // int mx = 0;
            // int lans = temp[0], rans = temp[0];
            // int l = temp[0];
            // for (int i = 1; i < temp.size(); i++)
            // {
            //     if (temp[i] - 1 == temp[i - 1])
            //     {
            //         if (temp[i] - l > mx)
            //         {
            //             lans = l;
            //             rans = temp[i];
            //             mx = temp[i] - l;
            //         }
            //     }
            //     else
            //     {
            //         l = temp[i];
            //     }
            // }
            // cout << lans << " " << rans << endl;
            if (temp.size() == 1)
            cout << temp[0] << " " << temp[0] << endl;
           
            else
            {
                for (int i = 0; i < temp.size() - 1; i++)
                {
                    fl1 = temp[i];
                    if (temp[i] == temp[i + 1] - 1 && i < temp.size() - 1)
                    {
                        while (temp[i] == temp[i + 1] - 1 && i < temp.size() - 1)
                        {
                            count++;
                            i++;
                        }
                        // i--;
                        fr1 = temp[i];
                        if (count > res)
                        {
                            res = count;
                            a = fl1;
                            b = fr1;
                        }
                        count = 1;
                    }
                    else
                    {
                        // i++;
                        fr1 = temp[i];
                        if (count > res)
                        {
                            res = count;
                            a = fl1;
                            b = fr1;
                        }
                        count = 1;
                    }
                }
                cout << a << " " << b << endl;
            }
        // }
        // for(auto it=m.begin();it!=m.end();){  //second test case m fail ho rha h
        //     pair<int,int> temp=*it,curr=*it;
        //     if(it!=m.end() && it->second>=k){
        //     while(it!=m.end() && it->second>=k){
        //         curr=*it;
        //         it++;
        //         flag=true;
        //         if(it->first!=curr.first+1) break;
        //     }
        //     }
        //     else it++;
        //     int l=temp.first;
        //     int r=curr.first;
        //     if(r-l>res){
        //         fl1=l;
        //         fr1=r;
        //         res=r-l;
        //     }
        //     if(it==m.end()) break;
        //     // else it++;
        // }
        // if(flag==false) cout<<-1<<endl;
        // else cout<<fl1<<" "<<fr1<<endl;
    }
}
    return 0;
}