# UE4 kata

My goal was to develop a _kata_; that is, an exercise that can be repeated many times in order to sharpen one's skills.  This one intends to cover many fundamentals of Unreal game development.

A beginner would need to learn everything from scratch, while an experienced developer can progress through it in a fairly straightforward way.  Significantly, both developers would benefit from repeated iterations of the exercise.

The code in this repository is my first attempt to follow this exercise.

## Topics covered
- Blueprints
- C++
- Functional tests
- Multiplayer/replication
- User input
- Timing and simple animation
- Broadcasts
- Sound effects
- Particle effects

## The spec:

Grade 2 extends Grade 1.  It is recommended to run through grade 1 at least twice before moving on to Grade 2.

### Grade 1: basic game
Start from the UE4 C++ "Third Person" demo.  Change the game incrementally, so that:
1. When a player clicks, a projectile is created.
2. The projectile moves forward at a constant rate.
3. There is a target, which is destroyed when it touches a projectile.
4. Hitting the target also destroys the projectile.
5. A particle effect plays when the target is destroyed.
6. A sound effect plays when the target is destroyed.
7. It takes three hits to destroy the target.

### Grade 2: multiplayer
For each step in grade 1, make it work with multiple players.
* Play with two or more standalone clients
* Make sure that the game behaviour works for each player.
* Make sure that each player can observe the desired behaviour/effect in response to another player's actions.

For example, for step 1 of Grade 1, each player should be able to create a projectile, and if any player does so then each other player should see the new projectile.