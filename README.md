# BouncePad-Challenge
A simple C++ program simulating a ball's movement within a console grid. Users can observe the ball's trajectory and interact with the simulation by advancing frames. The code demonstrates basic console graphics and user input handling
Introduction and Description
The objective of this mini-project is to engineer a C++ program that meticulously simulates the movement of a ball within a grid, thereby offering a tangible application of object-oriented programming (OOP) and sophisticated simulation concepts. This endeavor aims to achieve several primary goals, chief among them being the creation of an interactive and visually stimulating platform. This platform is designed to enable users to witness the dynamic behavior of a ball as it bounces within the confines of predefined boundaries, thereby mirroring the complexities of motion in a simplified, controlled environment. Through the execution of this project, participants will garner invaluable hands-on experience in applying a class-based architecture, effectively encapsulating critical properties such as grid dimensions, the ball's position, and its velocity, which are pivotal to the simulation's realism and functionality.

Our methodological approach is anchored in the development of a robust `Grid` class. This class acts as the cornerstone of our simulation, meticulously tracking the ball's position and updating it in accordance with a set of well-defined rules governing its collisions with the grid's boundaries. The grid itself is rendered within the console, providing users with a real-time visual depiction of the ball's trajectory and its interactions with the environment. By leveraging loops and conditional statements, we ensure that the simulation offers a seamless, uninterrupted experience, running continuously until such a time as the user elects to terminate the program. This design choice fosters an interactive and responsive user interface, where the immediacy of the simulation's reactions to user inputs enhances the overall engagement. Moreover, our code is crafted with a keen emphasis on clarity, structural organization, and the principle of encapsulation, mirroring the best practices in contemporary software development and reflecting a sophisticated understanding of OOP principles.

Furthermore, this project is not merely an exercise in programming but an exploration into the principles of physics and motion, albeit in a virtualized, controlled setting. By simulating the ball's interactions with the grid's boundaries, users gain insights into fundamental concepts such as velocity, acceleration, and the conservation of momentum, all visualized through the simple yet effective medium of a bouncing ball. This aspect of the project underscores the educational value of the simulation, making it a potent tool for illustrating complex principles in a manner that is both accessible and engaging.

In essence, this mini-project transcends the boundaries of traditional programming assignments, venturing into the realm of interactive simulations that bridge the gap between theoretical knowledge and practical application. It serves as a vivid demonstration of the capabilities of C++ and OOP in crafting simulations that are not only technically proficient but also richly educational and engaging for users. Through this project, participants will not only refine their programming skills but also develop a deeper appreciation for the intricate dance between code, logic, and the simulated dynamics of the physical world.

User Manual
User Manual for Running the Ball Simulation Application on Raspberry Pi Zero W

Step 1: Connect to Raspberry Pi Zero W
•	Power on the robot chassis, ensuring the Li-Ion cell is properly inserted.
•	Wait for the Raspberry Pi Zero W to complete the boot-up sequence.
•	Connect to the Raspberry Pi via WiFi using the command:
ssh pi@ee245zerow6.ee.mnsu.edu -p 55555
Step 2: Navigate to Application Directory
•	Go to the directory where the application files are located. 
•	Type “cd OENM” command.
Step 3: Run the Ball Simulation Application
•	Execute the compiled program or the script.
•	Type “./Lab8”
Step 4: Interact with the Application
•	Observe the initial display of the grid.
•	Press 'a' to move the paddle left.
•	Press 'd' to move the paddle right.
•	Press any other key to keep the paddle at its current position.
•	Press 'q' to quit the game.
Example Output and Screenshots:



