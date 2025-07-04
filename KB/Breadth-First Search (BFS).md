The **Breadth-First Search (BFS)** algorithm is your go-to for systematically **sweeping** through a graph or tree, prioritizing **breadth** over depth. Think of it as a **meticulous explorer** that clears an entire "level" of the graph before even _glancing_ at the next.
![[unnamed.gif]]
The **secret sauce** of BFS is its reliance on a **queue data structure**. Starting from a designated node, BFS first enqueues it. Then, in a relentless loop:

1. It **dequeues** a node.
2. It **inspects ALL its unvisited neighbors**, adding them to a `visited` set (crucial for avoiding infinite loops in cyclic graphs!) and, critically, **enqueuing them**.
3. Only _after_ all neighbors of the current node have been processed and enqueued does it move on to the next node in the queue.

This **level-by-level expansion** is BFS's superpower: it **guarantees finding the shortest path** (in terms of number of edges) between the starting node and any other reachable node in an unweighted graph. This makes it invaluable for tasks like finding the minimum number of moves in a game or determining network connectivity.

In terms of performance, for a graph with V vertices and E edges, BFS also clocks in at a time complexity of O(V+E) when using an adjacency list. Its space complexity is O(V) in the worst case, as the queue might temporarily hold all vertices at the widest level of the graph. While it might consume more memory than DFS for deep, narrow graphs, its **optimality for shortest paths** in unweighted scenarios makes it an indispensable tool in the ECE toolkit.