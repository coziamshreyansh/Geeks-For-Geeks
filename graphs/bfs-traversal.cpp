vector<int> bfsOfGraph(int V, vector<int> adj[])
{
  // Code here

  vector<int> bfs;
  // to mark visited nodes
  bool vis[V] = {false};
  vis[0] = true;
  queue<int> q;
  q.push(0);

  int curr_node;
  while (!q.empty())
  {

    curr_node = q.front();
    q.pop();

    bfs.push_back(curr_node);

    for (int i : adj[curr_node])
    {
      if (!vis[i])
      {
        q.push(i);
        vis[i] = true;
      }
    }
  }
  return bfs;
  // time complexity is O(V + 2E)
  // O(V) coz there are V vertices, and queue will run till V times
  // + O(2E) additionally coz each edges is checked exactly once
}