from math import inf
from collections import deque

def breadth_first_search(graph, source_vertex):
    color = {}
    distance = {}
    parent = {}
    bfs_queue = deque([source_vertex])

    for vertex in graph.keys():
        if vertex == source_vertex:
            continue
        color[vertex] = "white"
        distance[vertex] = inf
        parent[vertex] = None

    color[source_vertex] = "gray"
    distance[source_vertex] = 0
    parent[source_vertex] = None

    while len(bfs_queue) != 0:
        vertex = bfs_queue.popleft()
        # print('adjacency list of: ', vertex, graph[vertex])
        for adj_vertex in graph[vertex]:
            if color[adj_vertex] == "white":
                color[adj_vertex] = "grey"
                distance[adj_vertex] = distance[vertex] + 1
                parent[adj_vertex] = vertex
                bfs_queue.append(adj_vertex)
        color[vertex] = "black"

    print(color, distance, parent, bfs_queue)
