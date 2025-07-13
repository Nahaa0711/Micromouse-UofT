
THESE ITEMS NEED TO BE CONVERTED INTO THE TENTATIVE PLAN TIMELINE

GamePlan - 5th July 
Backlog:
 
Hardware setup
1. Design breakdown and order all components and PCB
2. Find compatible motors and design a drivetrain
3. Assemble the basic chassis on the board and initialize fundamental hardware (i.e. MC, sensors, power, drivers)
4. Load basic firmware and test sensors
5. Mount motors and drive train, test basic motor functionality


Basic Mobility
1. Implement basic independent motor control,  2-DOF
2. Develop a PWM/wtv control system for smoother speed control
3. Implement basic movement protocols for precise turns without displacement


Sensor Integration
1. Implement functions to parse sensor data
2. Implement a reliable wall detection algorithm
3. Develop control loops to maintain position around walls
4. Integrate with motors


Navigation/Maze Solving
1. Implement Obometery using encoders and sensors 
2. Develop position tracking and mapping in mouse memory 
3. Implement basic maze solving algorithms and refine bugs/reliability issues
4. Progress to more advanced optimized pathfinding algorithms


Advanced mobility
1. Implement PID controls for fast straights
2. Create functions to record speed control data and use it to test and refine speed control algorithms
3. Develop and test smooth cornering and turning functions based on PID controls







Backlog Item
Execution Plan
Hardware #1
- Review design routing
- Create bill of materials
- Source components from reliable suppliers
- Design PCB layout
- Submit PCB order
Hardware #2
- Research compatible motors
- Design drivetrain in CAD software
- Simulate drivetrain performance
- 3D print or machine drivetrain components
Hardware #3
- Assemble PCB
- Mount microcontroller and sensors
- Connect power supply
- Set up motor drivers
Hardware #4
 Write basic firmware for component testing
- Develop sensor calibration routines
- Test each sensor individually
- Verify power management
           
Hardware #5
- Mount motors to chassis
- Install drivetrain
- Write basic motor control firmware
- Test motor rotation and basic movements
Basic Mobility #1
- Implement PWM control for each motor
- Develop functions for forward, backward, left, and right movements
- Test individual motor control
Basic Mobility #2
- Research and implement appropriate speed control algorithm (e.g., PID)
- Develop acceleration and deceleration profiles
- Test and tune speed control parameters
Basic Mobility #3
- Implement functions for precise 90-degree turns
- Develop algorithms for in-place rotation
- Create routines for small positional adjustments
Sensor Integration #1
- Write functions to read raw sensor data
- Implement data filtering and noise reduction
- Develop data conversion to useful units (e.g., distance)
Sensor Integration #2
- Implement threshold-based wall detection
- Develop algorithms for detecting corners and openings
- Test wall detection in various scenarios
Sensor Integration #3
- Implement PID control for wall following
- Develop functions to maintain set distance from walls
- Test and tune wall-following behavior
Sensor Integration #4
- Integrate sensor data with motor control
- Implement obstacle avoidance
- Test combined sensor and motor functionality
Navigation/Maze Solving #1
- Implement encoder reading functions
- Develop dead reckoning algorithms
- Integrate sensor data for position correction
Navigation/Maze Solving #2
- Design data structure for maze mapping
- Implement functions to update map based on sensor data
- Develop routines to store and retrieve position data
Navigation/Maze Solving #3
- Implement left-hand or right-hand wall following algorithm
- Develop flood-fill algorithm
- Test algorithms in simulated mazes
- Debug and optimize for reliability
Navigation/Maze Solving #4
- Research and implement A* or Dijkstra's algorithm
- Develop optimizations for micromouse-specific scenarios
- Implement path smoothing techniques
- Benchmark and compare algorithm performance
Advanced Mobility #1
- Implement PID control for straight line motion
- Tune PID parameters for optimal performance
- Test straight line motion at various speeds
Advanced Mobility #2
- Develop data logging system for speed and position
- Create visualization tools for collected data
- Analyze data to identify areas for improvement
- Implement and test refined control algorithms
Advanced Mobility #3
- Develop algorithms for smooth cornering
- Implement variable speed control during turns
- Test cornering performance at different speeds
- Fine-tune PID controls for optimal cornering


