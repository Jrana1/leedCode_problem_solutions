#include <bits/stdc++.h>
using namespace std;
class Map
{
private:
    vector<int> *adj_mat;
    int V;

public:
    Map(int n)
    {

        adj_mat = new vector<int>[n + 1];
        this->V = n;
    }
    void add_edge(int v, int u)
    {

        this->adj_mat[u].push_back(v);
        this->adj_mat[v].push_back(u);
    }
    void find_nodes_with_degree_two()
    {

        for (int i = 1; i <= this->V; i++)
        {
            int deg=0;
            for (auto x : adj_mat[i])
            {
               
            }
           
        }
    }
    void show()
    {

        for (int i = 1; i <= this->V; i++)
        {
            cout << i << "->";
            for (auto x : adj_mat[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Map m1 = Map(4);

    m1.add_edge(1, 2);
    m1.add_edge(2, 3);
    m1.add_edge(3, 4);
    m1.add_edge(4, 2);
    m1.show();

    return 0;
}