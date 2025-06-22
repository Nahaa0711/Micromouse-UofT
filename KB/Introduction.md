# Micromouse Introduction (Start-Here)

A Micromouse is a small, fully autonomous robot designed to navigate and solve a standardized maze as quickly and efficiently as possible. This guide summarizes core concepts for engineers to ramp up on rules, strategies, design, parts, and development processes.

---
Related Links:
[[Design graveyard]]
---
## 1. Rules & Strategies

>**Objective**  
 > Navigate from the designated start cell to the maze center without external intervention; fastest official time wins.

**Competition Specifications**  
- Maze: 16×16 grid cells, 25 cm per cell, walls ≤ 5 cm thick.  
- Time Limit: Typically 10 min total for exploration and speed runs.  
- Autonomy: No external control or remote sensing; minor repairs allowed only between runs.  

**Categories**  
- Classic Micromouse: Standard cell and robot size (≤ 25 cm square).  
- Half-Size Micromouse: Maze and robot dimensions halved; longer time limit (10 min).  

**Algorithm Evolution**  
- Early: Wall-following (left/right hand rule), DFS; simple but inefficient in complex mazes.  
- Mid-stage: Flood-fill variants, Dijkstra’s; dynamic mapping with cost propagation for optimized runs.  
- Advanced: Heuristic A*, potential fields, partial exploration methods for reduced search time.

**Common Algorithms**  
- Flood-Fill: Balances exploration and speed; updates distance map on each run.  
- Dijkstra’s/A*: Guarantees shortest path but higher computation and memory overhead.  
- Wall-Following: Low complexity, fails on loops or isolated sections.  

**Strategy Factors**  
- Dimensions & Weight: Smaller robots fit tighter turns but carry smaller batteries and sensors, affecting runtime and precision.  
- Sensor Suite: IR vs. ultrasonic vs. laser (LIDAR) trade accuracy vs. cost and mounting space.  
- Processing Power: Higher-speed MCUs enable complex algorithms at the cost of energy and space.  

**Innovations**  
- Partial exploration algorithms that prune irrelevant sections.  
- Multi-sensor fusion (e.g., IR + LIDAR) for resilient wall detection under varying light.  

---

## 2. Design Considerations

**Key Variables**  
- Size & Chassis: Fit within cell constraints; chassis stiffness affects sensor stability.  
- Weight & Power: Lighter builds reduce inertia but limit battery capacity and motor torque.  
- Maneuverability: Wheel configuration (two-wheel differential vs. four-wheel drive) impacts turning radius and speed control.

**Core Subsystems**  
- Mechanical: Chassis material (PCB panels vs. aluminum), drive train (belt vs. gear transmission).  
- Electronics: Microcontroller (Arduino, STM32, FPGA), motor drivers (H-bridge ICs).  
- Sensors: IR reflectance, ultrasonic range, LIDAR, encoders for odometry.  
- Software: Real-time OS vs. bare-metal loops, mapping/navigation stack (flood-fill, A*).

| Subsystem        | Trade-Offs                       | Impact               |
| ---------------- | -------------------------------- | -------------------- |
| Chassis Material | Rigidity vs. weight              | Stability vs. speed  |
| Drive Train      | Belt (smooth) vs. gear (compact) | Noise vs. packaging  |
| Sensors          | Accuracy vs. size & cost         | Precision mapping    |
| MCU              | Compute vs. power draw           | Algorithm complexity |

**Innovative Approaches**  
- Compact six-wheel steering for enhanced stability in half-size category.  
- FPGA-based control for parallel sensor processing and low-latency actuation.

---

## 3. Parts Inventory

**Essential Components**  
- Motors & Wheels: High RPM DC motors with encoders for speed and odometry.  
- Chassis & Frame: PCB or aluminum plates sized to fit within 25 cm square.  
- Microcontroller: STM32/Arduino Uno or FPGA for advanced designs.  
- Sensors: IR LED/photodiode pairs, ultrasonic modules, optional LIDAR units.  
- Power: LiPo battery ≤ 12 V; balance energy density vs. weight.

**Sensor Comparisons**  
- Infrared: Compact, low power, sensitive to surface reflectivity.  
- Ultrasonic: Good range, larger size, prone to cross-talk.  
- LIDAR: High accuracy, expensive, requires more processing.

**Component Constraints**  
- Weight ≤ 300–500 g to maintain agility.  
- Power consumption balanced to allow full exploration and multiple speed runs within time limit.

**Trade-Off Examples**  
- High-end LIDAR improves precision but increases cost and board complexity.  
- Smaller MCU reduces footprint but may limit algorithmic options.

---

## 4. Development Process & Timeline

| Stage                     | Tasks                                              | Deliverables                    |
| ------------------------- | -------------------------------------------------- | ------------------------------- |
| Planning                  | Define specs, select components, document road­map | Requirements doc                |
| Mechanical Prototyping    | Design chassis, 3D-print/PDF chassis layout        | Chassis prototype               |
| Electronics Integration   | Solder boards, assemble sensors & actuators        | Functional hardware platform    |
| Firmware & Algorithm Dev. | Implement mapping, navigation, motor control       | Basic search and speed-run code |
| Simulation Testing        | Virtual maze runs (MATLAB/ROS)                     | Performance report              |
| Physical Testing          | Real maze trials, tuning PID & sensor offsets      | Refined parameter set           |
| Iteration & Finalization  | Optimize code, weight balance, documentation       | Competition-ready robot, docs   |

**Collaboration & Documentation**  
- Use Obsidian vault with tags (`#micromouse`) and backlinks for cross-referencing.  
- Kanban board for sprint tasks and meeting notes.  
- Version control (Git) for firmware and CAD files.

**Testing Best Practices**  
- Unit tests for sensor reading and motor commands.  
- Maze simulation for algorithm validation before bench testing.  
- Record telemetry logs for post-run analysis and iterative improvements.

**Challenges & Mitigation**  
- Sensor noise: Add filtering capacitors and shielding.  
- Weight balance: Distribute components symmetrically; iterate CAD layout.  
- Firmware bugs: Employ continuous integration with hardware-in-the-loop tests.

---

This Start-Here guide equips engineering teams with concise, targeted knowledge to jump into Micromouse development, linking rules, strategies, designs, and process workflows under one roof. Good luck navigating the maze!