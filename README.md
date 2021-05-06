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
1. When a player presses the spacebar, a projectile is created.
2. The projectile moves forward at a constant rate.
3. There is a target, which is destroyed when it touches a projectile.
4. A particle effect plays when the target is destroyed.
5. A sound effect plays when the target is destroyed.
6. It takes three hits to destroy the target.

### Grade 2: multiplayer
For each step in grade 1, make it work with multiple players.
* Play with two or more standalone clients
* Make sure that the game behaviour works for each player.
* Make sure that each player can observe the desired behaviour/effect in response to another player's actions.

For example, for step 1 of Grade 1, each player should be able to create a projectile, and if any player does so then each other player should see the new projectile.

### Grade 3: test-driven development
For each step in grade 1, implement it using test-driven development.  That is,
1. Create the smallest possible functional test that fails.
2. Add as little game functionality as is necessary to make the test pass.
3. Refactor as needed, while all tests are passing.

For example, for step 3 of Grade 1, the test might create a target, create a projectile on top of it, and check that the target actor no longer exists.

This may not be possible for the multiplayer parts, due to the nature of UE4 functional tests.

Also note that this is not a great first introduction to test-driven development, because many elements of the game can be quite challenging to effectively test.  This makes it a quite good advanced exercise for those already practiced in TDD.  If this is your first exposure to TDD, consider writing tests only for the following steps from Grade 1: 2, 3, 6.
