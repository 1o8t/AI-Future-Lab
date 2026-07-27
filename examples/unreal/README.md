# Unreal Engine City Generator Demo

## Target

Unreal Engine 5.x C++ project.

The project file currently declares an Unreal Engine 5.5 association. A newer Unreal version may offer to convert it.

## Setup

1. Install Unreal Engine and the required C++ development tools.
2. Right-click `AIFutureLab.uproject`.
3. Generate project files.
4. Open the generated solution.
5. Compile the `AIFutureLabEditor` target.
6. Open the project.
7. Create or open a level.
8. Search for `CityGenerator` in the Place Actors panel.
9. Add the Actor to the level.
10. Adjust `Grid Size`, `Spacing`, `Seed`, and height values in the Details panel.

## Output

The `ACityGenerator` Actor creates:

- Ground
- Road strips
- Building blocks

It rebuilds the generated city when its editable properties change in the editor.

## Purpose

This is a procedural visualization demonstration only. It does not contain the complete AI planning system.
