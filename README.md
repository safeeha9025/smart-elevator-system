# Smart Elevator System

## Problem Statement

A smart elevator system needs to determine the correct direction of movement based on the passenger's request.

When a user selects a floor, the system compares the destination floor with the current floor.

- If the destination floor is above the current floor, the lift moves *UP*.
- If the destination floor is below the current floor, the lift moves *DOWN*.
- If the user is already on the requested floor, the lift *STAYS*.

Given the current floor and the destination floor, determine and print the appropriate movement command.

## Input Format

The first line contains two space-separated integers:

- Current Floor
- Destination Floor

## Output Format

Print one of the following:

```text
UP
DOWN
STAY
