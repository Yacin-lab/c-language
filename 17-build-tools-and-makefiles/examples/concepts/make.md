# make

## Definition
Build automation tool that executes commands based on rules and file changes.

## Common Use Cases
- compile projects
- avoid recompiling everything
- automate builds
- manage dependencies

## Mental Model
make checks:
- what changed
- what depends on it
- what must be rebuilt

## Skeleton Code

```make
all:
	cc main.c -o program
```
## Common Mistakes
- using spaces instead of TAB
- wrong target names
- rebuilding everything unnecessarily

## Notes From My Experience
