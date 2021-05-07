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

Each grade adds to the last.  It is recommended to run through grade 1 at least once before moving onto grade 2, and so on.

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
For each step in Grade 1, make it work with multiple players.
* Play with two or more standalone clients
* Make sure that the game behaviour works for each player.
* Make sure that each player can observe the desired behaviour/effect in response to another player's actions.

For example, for step 1 of Grade 1, each player should be able to create a projectile, and if any player does so then each other player should see the new projectile.

### Grade 3: functional tests
For the steps in Grade 1, implement the following tests before adding the functionality.  Make sure you observe the test failing (for the expected reason), and then passing once the feature is implemented.  Run all tests before moving on to the next step, and make sure they all pass.

Note that some steps do not include any tests.

* When a player clicks, a projectile is created.
  * [Give the pawn a Shoot() function.]  When a pawn shoots, a projectile is created.
  * When a pawn shoots, the pawn's transform has not changed.
* The projectile moves forward at a constant rate.
  * Given a projectile, when some time elapses, its position becomes different.
  * Given a pawn facing a random direction, when it shoots, and some time elapses, then the change in the projectile's location matches the pawn's forward vector.
* There is a target, which is destroyed when it touches a projectile.
  * Given a projectile that is moving towards a target, when some time elapses, then the target does not exist.
* Hitting the target also destroys the projectile.
  * Given a projectile that is moving towards a target, when some time elapses, then the projectile does not exist.
* A particle effect plays when the target is destroyed.
* A sound effect plays when the target is destroyed.
* It takes three hits to destroy the target.
  * Given three projectiles moving towards a target, when some time elapses, then the target does not exist.
  * Amend the test from step 3, to check that the target _still_ exists after being hit by one projectile.
