from math import inf
from collections import deque

time = 0


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
    return parent


def print_shortest_path(graph, parent, source_vertex, vertex):
    if source_vertex == vertex:
        print(source_vertex, '->')
    elif parent[vertex] is None:
        print('no path from', source_vertex, 'to', vertex, 'exists')
    else:
        print_shortest_path(graph, parent, source_vertex, parent[vertex])
        print(vertex, '->')


def depth_first_search(graph):
    global time
    time = 0
    color = {}
    discovered = {}
    finished = {}
    parent = {}
    for vertex in graph.keys():
        color[vertex] = "white"
        parent[vertex] = None

    for vertex in graph.keys():
        if color[vertex] == "white":
            depth_first_search_visit(
                graph, parent, vertex, color, discovered, finished)


def depth_first_search_visit(
        graph, parent, vertex, color, discovered, finished):
    global time
    print("visiting", vertex)
    color[vertex] = "gray"
    time = time + 1
    discovered[vertex] = time

    for adj_vertex in graph[vertex]:
        if color[adj_vertex] == "white":
            parent[adj_vertex] = vertex
            depth_first_search_visit(
                graph, parent, adj_vertex, color, discovered, finished)
    color[vertex] = "black"
    time = time + 1
    finished[vertex] = time

    print(discovered, finished, parent)
