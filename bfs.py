from collections import defaultdict, deque

def bfs(graph, start_node, goal_node):
    # Step 1: SET STATUS = 1 (ready state) for each node in G
    status = {node: 1 for node in graph}

    # Step 2: Enqueue the starting node A and set its STATUS = 2 (waiting state)
    queue = deque([start_node])
    status[start_node] = 2

    while queue:
        # Step 3: Repeat Steps 4 and 5 until QUEUE is empty
        current_node = queue.popleft()

        # Step 4: Dequeue a node N. Process it and set its STATUS = 3 (processed state).
        print("Processing node:", current_node)
        status[current_node] = 3

        # Step 5: Enqueue all the neighbours of N that are in the ready state (whose STATUS = 1)
        # and set their STATUS = 2 (waiting state)
        for neighbor in graph[current_node]:
            if status[neighbor] == 1:
                queue.append(neighbor)
                status[neighbor] = 2

                # Check if the goal node is reached
                if neighbor == goal_node:
                    print("Goal node reached.")
                    return

    print("Goal node not reached.")
    print("Queue after BFS:", queue)
    print("Status after BFS:", status)

def dfs(graph, start_node, goal_node):
    # Step 1: SET STATUS = 1 (ready state) for each node in G
    status = {node: 1 for node in graph}

    # Step 2: Push the starting node A onto the stack and set its STATUS = 2 (waiting state)
    stack = [start_node]
    status[start_node] = 2

    while stack:
        # Step 3: Repeat Steps 4 and 5 until STACK is empty
        current_node = stack.pop()

        # Step 4: Pop a node N from the stack. Process it and set its STATUS = 3 (processed state).
        print("Processing node:", current_node)
        status[current_node] = 3

        # Step 5: Push all the neighbors of N that are in the ready state (whose STATUS = 1)
        # onto the stack and set their STATUS = 2 (waiting state)
        for neighbor in graph[current_node]:
            if status[neighbor] == 1:
                stack.append(neighbor)
                status[neighbor] = 2

                # Check if the goal node is reached
                if neighbor == goal_node:
                    print("Goal node reached.")
                    return

    print("Goal node not reached.")
    print("Stack after DFS:", stack)
    print("Status after DFS:", status)

def create_graph():
    graph = defaultdict(list)

    num_vertices = int(input("Enter the number of vertices: "))
    for i in range(num_vertices):
        graph[i]  # Adding each vertex as a key to the graph dictionary

    num_edges = int(input("Enter the number of edges: "))
    for i in range(num_edges):
        edge_input = input(f"Enter edge {i + 1}: ")
        u, v = map(int, edge_input.split())
        graph[u].append(v)
        graph[v].append(u)

    return graph

def add_edge(graph):
    u, v = map(int, input("Enter the edge to add (format: u v): ").split())
    graph[u].append(v)
    graph[v].append(u)

def add_node(graph):
    new_node = len(graph)
    graph[new_node] = []  # Initialize the adjacency list for the new node

    # Update the adjacency lists of existing nodes to include the new node
    for node in graph:
        if node != new_node:  # Avoid connecting the new node to itself
            graph[node].append(new_node)
            graph[new_node].append(node)

def delete_edge(graph):
    u, v = map(int, input("Enter the edge to delete (format: u v): ").split())
    if v in graph[u]:
        graph[u].remove(v)
    if u in graph[v]:
        graph[v].remove(u)

def delete_node(graph):
    node_to_delete = int(input("Enter the node to delete: "))
    if node_to_delete in graph:
        del graph[node_to_delete]
        for node in graph:
            if node_to_delete in graph[node]:
                graph[node].remove(node_to_delete)

def display_graph(graph):
    print("Adjacency List:")
    for node, neighbors in graph.items():
        print(f"{node} -> {', '.join(map(str, neighbors))}")

if __name__ == "__main__":
    graph = defaultdict(list)

    while True:
        print("\nMenu:")
        print("1. Add edge")
        print("2. Add node")
        print("3. Delete edge")
        print("4. Delete node")
        print("5. Create graph")
        print("6. BFS")
        print("7. DFS")
        print("8. Display graph")
        print("9. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            add_edge(graph)
        elif choice == 2:
            add_node(graph)
        elif choice == 3:
            delete_edge(graph)
        elif choice == 4:
            delete_node(graph)
        elif choice == 5:
            graph = create_graph()
        elif choice == 6:
            start_node = int(input("Enter the start node for BFS: "))
            goal_node = int(input("Enter the goal node for BFS: "))
            bfs(graph, start_node, goal_node)
        elif choice == 7:
            start_node = int(input("Enter the start node for DFS: "))
            goal_node = int(input("Enter the goal node for DFS: "))
            dfs(graph, start_node, goal_node)
        elif choice == 8:
            display_graph(graph)
        elif choice == 9:
            break
        else:
            print("Invalid choice. Please try again.")
