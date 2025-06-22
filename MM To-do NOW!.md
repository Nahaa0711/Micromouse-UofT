
- Core hardware bring-up and validation (STM, soldering, mounts, motors, sensors) are **urgent & important**.
- Research, rig construction, and control-system design are **important but not urgent**.
- BLE integration is **urgent but lower priority**, while final end-to-end algorithm tests can wait.

---

## Timeline

1. ~~Get new STM to work  
   - ~~Consult Tiger  
   - ~~Look into ST-Link driver documentation  
     - Do we need to update our driver or go to a different version?  
     - Connectivity fluctuates on both PCB revisions; sometimes changing ST-Link Utility settings helps, but it isn’t reliable.
2. Solder remaining components/sensors

3. Fabricate adjusted motor mounts  
   - Make changes to CAD model – adjust for new PCB  
   - Print models and assemble drive

4. Test & map duty cycles  
   - Hard-code a sequence of duty values and record actual speeds  
   - Evaluate reliability and consistency of motor performance

1. Find and evaluate Micromouse algorithms  
   - Locate or acquire an MMS platform for live testing  
   - Become familiar with core pathfinding and maze-solving methods  
   - Research and document each algorithm  
   - Develop a graph data structure to represent the maze

6. Test encoders  
   - Verify accurate distance measurement for the micromouse

7. Test sensors  
   - Obstacle detection  
     - Time-of-flight sensors  
     - Infrared sensors

8. Build maze testing rig  
   - Create a surface with adjustable, reconfigurable walls for iterative trials

9. Test full algorithms on the physical mouse  
   - Validate integration of pathfinding, maze solving, and routing on hardware

10. Develop a control system  
    - Implement speed-optimization logic based on the maze graph

11. Get BLE module to work

---

## Prioritization Matrix

|                | Urgent                                                                                                                                                                                             | Not-urgent                                                                                       |
| -------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- |
| **Important**  | - Task 1: Get new STM to work<br>- Task 2: Solder remaining components/sensors<br>- Task 3: Fabricate adjusted motor mounts<br>- Task 4: Test & map duty cycles<br>- Task 6: Test encoders<br>- Task 7: Test sensors | - Task 5: Find and evaluate micromouse algorithms<br>- Task 8: Build maze testing rig<br>- Task 10: Develop control system |
| **Not-important** | - Task 11: Get BLE module to work                                                                                                                                                                | - Task 9: Test full algorithms on the physical mouse                                             |