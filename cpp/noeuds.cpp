/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N; // the total number of nodes in the level, including the gateways
    int L; // the number of links
    int E; // the number of exit gateways
    vector<int>  gateaway;
    vector<int>  prev; 
    vector< pair <int,int> > vect ;     

    cin >> N >> L >> E; cin.ignore();
    for (int i = 0; i < L; i++) {
        int N1; // N1 and N2 defines a link between these nodes
        int N2;
        cin >> N1 >> N2; cin.ignore();
        vect.push_back(make_pair(N1 ,N2)); 
    }
    for (int i = 0; i < E; i++) {
        int EI; // the index of a gateway node
        cin >> EI; cin.ignore();
        gateaway.push_back(EI); 
    }
    bool pass = false ; 
    int lastMov =-1000;
  
    while (1) {
        int SI; // The index of the node on which the Skynet agent is positioned this turn
        cin >> SI; cin.ignore();
        pass = false ; 
        if(lastMov!=-1000){
           for (int j = 0; j < vect.size(); j++) {
             if((vect[j].first==lastMov && vect[j].second == SI)
             ||(vect[j].second==lastMov && vect[j].first == SI)){
                    vect.erase(vect.begin()+j);
                    lastMov=SI;
                    break;
            }
          }
        }else
          lastMov=SI; 
        for (int j = 0; j < vect.size(); j++) {
            for (int i = 0; i < gateaway.size(); i++) {
                if(vect[j].second == gateaway[i] ){
                    if(vect[j].first == SI ){
                        cout<<vect[j].first<<" "<<gateaway[i]<<endl;;
                        vect.erase(vect.begin()+j);
                        pass = true ;
                        break ;
                    }
                    
                }else
                if(vect[j].first == gateaway[i] ){
                    if(vect[j].second == SI ){
                        cout<<vect[j].second<<" "<<gateaway[i]<<endl;;
                        vect.erase(vect.begin()+j);
                        pass = true ;
                        break ;
                    }
                    prev.push_back(vect[j].first);
                }else
                prev.push_back(vect[j].first);
                  
            }
        } 
        
        for (int j = 0; j < vect.size() && !pass; j++) {
            for (int i = 0; i < prev.size(); i++) {
                if( (vect[j].first==SI && vect[j].second == prev[i])
                ||(vect[j].second==SI && vect[j].first == prev[i])){
                    cout<<vect[j].first<<" "<<vect[j].second<<endl;;
                    vect.erase(vect.begin()+j);    
                    pass = true ;
                    break ;
                }
            }
        }
        for (int j = 0; j < vect.size() && !pass; j++) {
            for (int i = 0; i < gateaway.size(); i++) {
                if( vect[j].second == gateaway[i] || vect[j].first == gateaway[i]   ){
                    cout<<vect[j].first<<" "<<vect[j].second<<endl;;
                    vect.erase(vect.begin()+j);    
                    pass = true ;
                    break ;
                }
            }
        }
        for (int j = 0; j < vect.size() && !pass; j++) {
            for (int i = 0; i < prev.size(); i++) {
                if( vect[j].second == prev[i] ||  vect[j].first == prev[i]  ){
                    cout<<vect[j].first<<" "<<vect[j].second<<endl;;
                    vect.erase(vect.begin()+j);    
                    pass = true ;
                    break ;
                }
            }
        }
        if(!pass){
            cout<<vect[vect.size() - 1].first<<" "<<vect[ vect.size() - 1].second<<endl;
            vect.erase( vect.end()- 1);
        }
        prev.clear();
        pass = false; 
    }
}