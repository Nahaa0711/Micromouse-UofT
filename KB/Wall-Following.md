
## Introduction

The Wall-Following algorithm is a foundational heuristic in robot navigation, frequently implemented in rudimentary robotics platforms.
- low computational overhead 
- minimal sensor suite requirements
The core objective is to guide an autonomous agent through an unknown maze by maintaining a consistent, pre-defined offset from a chosen wall, typically achieved through a[[ reactive control loop]].

## Operational Logic

The algorithm operates on a prioritized set of rules, executed based on immediate environmental sensing. For illustrative consistency, this explanation assumes a **left-hand rule** implementation, where the robot endeavors to maintain the wall on its left flank.

1. **Sensor Input Acquisition**: The robot continuously samples its immediate environment using an array of proximity sensors. Common sensor modalities include:
    
    - **Infrared (IR) Proximity Sensors**
    - **Ultrasonic Transducers**
    - **Time-of-Flight (ToF) Sensors**
    - **Incremental Encoder**
	These sensors provide discrete or continuous data streams indicating the presence and distance of walls to the robot's front, left, and right.
    
2. **Decision Hierarchy and State Transitions**: The robot executes a deterministic finite state machine, transitioning between actions based on the prioritized evaluation of sensor inputs:
    
    - **State 1: Prioritize Left (Turn Left)**:
        - **Condition**: If the sensor array indicates an unobstructed path to the immediate left (e.g., left-side proximity sensor registers no wall within the set offset, or a significant increase in distance).
        - **Action**: The robot does a 90-degree counter-clockwise rotation, followed by forward translation. This maneuver is typically executed via a pre-calibrated open-loop or a closed-loop PID control system for precise angular displacement, ensuring the robot aligns with the newly accessible left wall.
            
    - **State 2: Prioritize Forward (Move Straight)**:
        - **Condition**: If State 1's condition is false (left path is either blocked or a wall is present), AND the front-facing sensors indicate an clear path ahead.
        - **Action**: The robot maintains forward translation. A continuous feedback loop (e.g., using a differential drive system with encoder feedback and side-mounted proximity sensors) actively adjusts motor speeds to maintain a constant, desired lateral offset from the left wall, counteracting minor deviations and ensuring parallel movement.
            
    - **State 3: Prioritize Right (Turn Right)**
        - **Condition**: If both State 1 and State 2's conditions are false (i.e., left path is blocked, AND the path directly forward is also blocked by a wall).
        - **Action**: The robot executes a 90-degree clockwise rotation. This is the last available option for forward progress in a T-junction or corner scenario where the left and front are obstructed.
            
    - **State 4: Dead End (180-degree Turn)**:
        
        - **Condition**: If all three primary directions (left, front, and right) are detected as blocked by walls.
        - **Action**: The robot performs a 180-degree rotation (either two consecutive 90-degree turns or a single pivot turn). This allows the robot to backtrack and re-evaluate its path from the previous junction.
        
    This sequential, reactive decision-making process enables the robot to systematically traverse maze segments accessible by adhering to the chosen wall.
    
![[Pasted image 20250703234838.png]]
## Inherent Limitations

While conceptually simple and computationally lean, the Wall-Following algorithm exhibits significant limitations that constrain its efficacy in complex maze environments, particularly those encountered in Micromouse competitions:

- **Sub-optimality and Local Minima**: The algorithm is inherently a [[greedy algorithm]], making decisions based solely on local sensor data without any global knowledge or maze map. Consequently, it cannot guarantee the shortest or most efficient path to a destination. In mazes with multiple paths to the goal, it will follow the first available path dictated by its wall-following rule, which is often suboptimal in terms of distance or time. This behavior can lead to the robot getting trapped in local minima if the goal is not directly accessible by continuously following a single wall.

- **Loop Traversal and Infinite Cycles**: In mazes containing loops or islands (closed perimeters of walls that do not lead to the goal), the deterministic nature of the wall-following rule can cause the robot to enter an infinite cycle. It will endlessly traverse the perimeter of the loop or island, unable to break out and explore other parts of the maze. This highlights the absence of a visited state or global exploration strategy.

- **Goal Accessibility and Topological Constraints**: For mazes designed with the goal located centrally or in an inner chamber not connected to the outer perimeter by a continuous wall-following path, the algorithm will fundamentally fail to reach the target. Its reliance on maintaining contact with a wall means it cannot navigate open spaces or complex internal structures that require detaching from a wall for a period. This is a critical deficiency for typical Micromouse competition mazes.

- **Absence of Maze Mapping and Path Re-planning**: The basic Wall-Following algorithm does not construct or maintain an internal occupancy grid or state estimation of the maze layout. Without a persistent map, the robot cannot:

    - Identify previously visited cells or paths.
    - Detect if it has returned to a known location (i.e., perform loop closure).
    - Perform global path planning or path optimization once the goal is found (e.g., for a "fast run").
    - Adapt its strategy based on learned maze geometry or environmental changes.

This lack of memory and global awareness severely limits its utility beyond simple maze traversal.    

## Conclusion

The Wall-Following algorithm serves as an invaluable pedagogical tool for introducing fundamental concepts in robot navigation, sensor-based control, and finite state machines. However, its deterministic, locally reactive decision-making process renders it inefficient and unreliable for the complex, performance-driven scenarios characteristic of Micromouse competitions. Achieving optimal path discovery and comprehensive maze exploration necessitates the implementation of more sophisticated techniques, such as [[Flood Fill]], [[A* Algorithm]], or Simultaneous Localization and Mapping ([[SLAM]]), which incorporate global knowledge, advanced control systems, and computational intelligence to overcome the inherent limitations of purely reactive strategies.