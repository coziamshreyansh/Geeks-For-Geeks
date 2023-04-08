void dfs_helper(int curr_node, vector<int> adj[], bool *vis, vector<int> &dfs)
{

  vis[curr_node] = true;

  dfs.push_back(curr_node);

  for (auto i : adj[curr_node])
  {

    if (!vis[i])
    {

      dfs_helper(i, adj, vis, dfs);
    }
  }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
  // Code here
  bool vis[V] = {false};

  vector<int> dfs;

  dfs_helper(0, adj, vis, dfs);

  return dfs;
}