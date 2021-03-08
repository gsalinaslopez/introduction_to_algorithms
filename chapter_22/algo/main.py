import graphs
# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    graph = {'r': ['s', 'v'],
             's': ['r', 'w'],
             't': ['u', 'w', 'x'],
             'u': ['t', 'x', 'y'],
             'v': ['r'],
             'w': ['s', 't', 'x'],
             'x': ['t', 'u', 'w', 'y'],
             'y': ['u', 'x']}
    # parent = graphs.breadth_first_search(graph, 's')
    # graphs.print_shortest_path(graph, parent, 's', 'y')

    graph2 = {'u': ['v', 'x'],
              'v': ['y'],
              'w': ['y', 'z'],
              'x': ['v'],
              'y': ['x'],
              'z': ['z']}
    graphs.depth_first_search(graph2)
    graphs.depth_first_search(graph2)


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
