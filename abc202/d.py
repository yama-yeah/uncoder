def dfs(graph, visited, v):
    """
    DFSで到達できる頂点を返す関数
    """
    visited[v] = True
    component = [v]
    for u in graph[v]:
        if not visited[u]:
            component += dfs(graph, visited, u)
    return component

def is_connected_component_valid(n, m, edges):
    """
    連結成分の頂点数と辺の本数が等しいかどうかを判定する関数
    """
    # グラフを作成
    graph = [[] for _ in range(n+1)]
    for i, (u, v) in enumerate(edges, 1):
        graph[u].append(v)
        graph[v].append(u)
    
    # 連結成分を求める
    visited = [False] * (n+1)
    for v in range(1, n+1):
        if not visited[v]:
            component = dfs(graph, visited, v)
            # 頂点数と辺の本数が等しいかどうかを判定する
            if len(component) == len(edges) // 2:
                return False
    return True

n = 3
m = 3
edges = [(2, 3), (1, 1),(3,2)]
if is_connected_component_valid(n, m, edges):
    print("すべての連結成分が条件を満たしています")
else:
    print("条件を満たさない連結成分があります")
