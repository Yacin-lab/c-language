# Targets
Things make tries to build.

## Common Use Cases
- executables
- libraries
- utility commands

## Skeleton Code

```make
all:
	cc main.c
```

## Common Targets
```make
all
clean
fclean
re
bonus
```

# Dependencies
- Files required before building another file.
- "If this file changes, rebuild dependent files."

## Skeleton Code

```make
main.o: main.c header.h
	cc -c main.c
```

## Notes From My Experience
...
