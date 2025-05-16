Unreal Editor version 5.0.3

## Preface

This is a coding project for CAGD 380. The project is to create a prototype that implements features from the popular arcade game Gauntlet. 

## About the Developers

Wyatt and Patrick are two Unity devs who, before this project, have had no experience developing in Unreal. This experience has been an exploration not only of the assignment but of the engine as a whole. 

## What's Been Implemented

Upon loading up Level1, the character can be moved using WASD, with J attacking the area just in front of the player and K firing a projectile. 

Generators have been implemented, and they can be placed in the scene. They expose an Object To Spawn variable that designers can change in-editor to be whatever actor class they desire. They can also be destroyed.

BP_PawnTestEnemy holds our implementation of enemy code. The enemy follows the player and hurts them over time once collided with them. They can be destroyed. This could be modified to allow for different varieties of enemies. 

The BP_ThirdPersonCharacter holds our implementation of player character code. The BP_StatComponent holds variables for player stats that are used in gameplay, and sits as a component on BP_ThirdPersonCharacter. These stats have been modified based on what information we could find about the Warrior, Valkyrie, Wizard, and Elf characters. 

The public C++ Pickup class is the base class for all of our pickup objects. It provides the basis for all pickup functionality, and it has been implemented in a few pickup prefabs for what was mentioned on the Gauntlet wiki. Pickups have the ability to affect player stats depending on an enum value used for switching. We couldn't find any solid documentation as to how each individual pickup functioned exactly, but the ability for the statistics to be modified in the editor is available and could be balanced as needed. 

## Postmortem

As this group's first foray into Unreal, it was not a good first impression. The requirements of this assignment are considerable, and the requirement that this project be completed in Unreal led to experiences that were often demoralizing. Due to our lack of experience with the engine, we spent more time troubleshooting problems than making progress. It seemed like the engine was actively trying to get us to stop developing in it. We would solve problems, attempt to implement a new feature, and then a new problem would crop up on behalf of the engine or our PCs that could not be ignored. What C++ was implemented was only at the discretion of what we thought we could get away with without the engine finding a new way to break. Since we were not sure of the integrity of our tools, it made it difficult to make any confident development decisions. 

To say we experienced growing pains would be putting it lightly. If we had the opportunity to develop this project in Unity, we are extremely confident our final product would have been entirely different, and the requirements of the assignment would have been met without issue. For now, this was more of an exercise in exploring the fundamentals and an opportunity to find out what not to do while wrestling with Unreal. 
