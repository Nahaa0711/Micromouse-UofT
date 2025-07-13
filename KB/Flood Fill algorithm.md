The **Flood Fill algorithm** is the **unsung hero** of many [[Micromouse Project Hub|Micromouse]] strategies, a truly **dynamic** and **adaptive** approach to maze navigation that's a sophisticated cousin to [[Breadth-First Search (BFS)]] and a practical application of the [[Bellman-Ford algorithm]] or [[Dijkstra's algorithm]] on a grid. Instead of just finding _a_ path, Flood Fill aims to **"value" every reachable cell** in the maze.
![[87076088-a2c31c00-c1f7-11ea-9a18-e527bd1198cf.gif]]
Imagine the goal cell (the target in the maze) as a **source of "water"** with a value of `0`. This "water" then **propagates outwards**, incrementing its value by one for each adjacent, traversable cell. This process is typically managed using a **queue**:

1. Initialize the goal cell with a value of `0` and enqueue it.
2. While the queue is not empty, dequeue a cell.
3. For each **unvisited, traversable neighbor** of the dequeued cell, assign it a value of `(current_cell_value + 1)` and enqueue it.

This iterative process effectively creates a **gradient field** where each cell's value represents the **minimum number of steps** (or "cost") required to reach the goal from that cell. The beauty for a Micromouse? Once this "flood" has settled, the robot simply has to **always move to an adjacent cell with a _lower_ value**. It's like **always walking downhill** towards the lowest point (the goal!).

What makes it **truly powerful** for real-time maze exploration is its **dynamic adaptability**. As the Micromouse explores and discovers new walls (or open paths), the Flood Fill values can be **re-propagated locally** from the newly discovered state, allowing the robot to **re-calculate optimal paths on the fly** without needing to re-explore the entire maze from scratch. This makes it incredibly efficient for the "search run" where the maze is initially unknown. Its time complexity is typically $$ O(V+E)O(N2)$$ for an N×N grid, as each cell is processed and updated a finite number of times. It's the **brains** behind many a winning Micromouse, providing a robust, shortest-path-guaranteeing (for unweighted grids) navigational strategy.
