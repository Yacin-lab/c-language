# Makefile

## Definition
Special file containing build rules for make.

# make

## Definition
Build automation tool that executes commands based on rules and file changes.


## Common Use Cases
- compile projects
- avoid recompiling everything
- automate builds
- manage dependencies
- library builds
- testing automation

## Mental Model
make checks:
- what changed
- what depends on it
- what must be rebuilt

## Skeleton Code

```make
NAME = program

all:
	cc main.c -o $(NAME)
```
## Important Concepts
- variables
- rules
- targets
- dependencies
- recipes
  
## Common Mistakes
- using spaces instead of TAB
- wrong target names
- hardcoding paths
- rebuilding everything unnecessarily

## Notes From My Experience
