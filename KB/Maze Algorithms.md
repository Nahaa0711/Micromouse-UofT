## Early Algorithms: Foundations and Limitations

Early Micromouse algorithms were basic, inspired by Claude Shannon's "Theseus." Simple strategies included [[Wall-Following]], which is easy but often fails in complex mazes or gets stuck in loops. More systematic approaches like [[Depth-First Search (DFS)]] and [[Breadth-First Search (BFS)]] emerged. DFS explores deeply but doesn't guarantee the shortest path. BFS finds the shortest path by cell count but is inefficient for large mazes and ignores the time cost of turns, which is critical for physical robots. These limitations led to a need for more "optimal" solutions considering robot dynamics.

## The Emergence of Flood Fill: A Paradigm Shift

The [[Flood Fill algorithm]], a variation of the [[Bellman-Ford algorithm]], revolutionized maze-solving. It assigns "distance" values to maze cells, starting from the goal, creating a "downhill" path. These values are dynamically updated as the robot discovers walls. The robot always moves to an adjacent cell with a smaller value. This dynamic pathfinding and maze mapping was a significant advancement, adapting in real-time to unknown environments and influencing [[SLAM]] systems.

## Modern Algorithms and Advanced Strategies in Micromouse
Modern Micromouse algorithms prioritize speed and efficiency.
### Advanced Pathfinding & Optimization
- **[[A_ (A-star) Algorithm]]_:** A "best-first" [[graph search algorithm]] that finds the least-cost path using a [[heuristic function]] (`f(x) = g(x) + h(x)`). It's efficient for optimal pathfinding after initial mapping.

- **[[Dijkstra's Algorithm]]**: Finds shortest paths on weighted graphs. While it guarantees the shortest path, it can be time-consuming for initial discovery and behaves like [[BFS]] on unweighted grids.

- **[[Partition-central Algorithm]]**: Divides the maze into partitions, applying dynamic exploration rules.

- **[[Genetic Algorithms]]**: [[Evolutionary search]] inspired by biology, used for pathfinding and maze generation.

### Movement Efficiency Enhancements
- **Turn Optimization**: Minimizing turns and maximizing straight paths is crucial for speed. Algorithms prioritize longer straight routes.

- **Diagonal Paths**: Robots use diagonal movements to avoid slow 90-degree turns, significantly reducing travel time.

- **"Vacuum Effect"**: A strategy to explore open, unvisited areas first to maximize straight path discovery.
### Mapping, Localization, & Control
- **[[SLAM | Simultaneous Localization and Mapping (SLAM)]]**: Robots build a map while tracking their position. This is fundamental for autonomous navigation and error correction.

- **[[Odometry]] and Error Correction**: Estimates robot position from motion data. [[Error accumulation]] is addressed through calibration and [[sensor fusion]] (e.g., combining data from encoders, IMUs).

### Machine Learning & Reinforcement Learning
- **[[Reinforcement Learning (RL)]]**: Allows robots to learn optimal solutions through trial-and-error, adapting to unknown mazes. It involves a [[Policy Function]], [[Reward Signal]], [[Value Function]], and balancing [[Exploit vs. Explore]].

- **[[Deep Learning]]**: Anticipated to enhance perception (e.g., wall detection), decision-making, and motion control, though it requires significant computational resources.


## 5. Conclusion

[[Micromouse]] competitions have evolved [[maze-solving algorithms]] from basic [[wall-following]] to sophisticated [[AI]]. This evolution, driven by increasing maze complexity and the pursuit of speed, integrates advanced [[pathfinding]] ([[A*]], [[Dijkstra's]]), [[movement optimizations]] ([[turn minimization]], [[diagonal paths]]), and robust [[mapping]]/[[localization]] ([[SLAM]], [[odometry]]). The frontier now includes [[machine learning]], especially [[Reinforcement Learning]], pushing innovation in both software and hardware. 