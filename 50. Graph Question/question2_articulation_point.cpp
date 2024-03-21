#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;

void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList, vector<int> &ap, int &timer) {
    visited[node] = true;
    disc[node] = low[node] = timer++;

    int child = 0;

    for (auto neighbour: adjList[node]) {
        if (neighbour == parent) {
            continue;
        }
        if (!visited[neighbour]) {
            dfs(neighbour, node, disc, low, visited, adjList, ap, timer);
            low[node] = min(low[node], low[neighbour]);

            // check articulation point or not
            if (low[neighbour] >= disc[node] && parent != -1) {
                ap[node] = 1;
            }
            child++;
        }
        else {
            low[node] = min(low[node], disc[neighbour]);
        }
    }

    if (parent == -1 && child > 1) {
        ap[node] = 1;
    }
}

int main() {
    int n = 5;
    int e = 5;

    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));

    unordered_map<int, list<int>> adjList;

    for (int i=0 ; i<edges.size() ; i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n);
    vector<int> low(n);
    unordered_map<int, bool> visited;
    vector<int> ap(n, 0);

    for (int i=0 ; i<n ; i++) {
        disc[i] = -1;
        low[i] = -1;
    }

    // dfs
    for (int i=0 ; i<n ; i++) {
        if (!visited[i]) {
            dfs(i, -1, disc, low, visited, adjList, ap, timer);
        }
    }

    // print articulation points
    cout << "Articulation points are : ";
    for (int i=0 ; i<n ; i++) {
        if (ap[i] != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}