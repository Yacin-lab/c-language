# Makefiles & Libraries

> Understanding how to build static libraries using Makefiles.

---

## What This Is About

C09 is where you learn to stop compiling manually and let **Makefiles** do the work. The goal is to build `libft.a` — a static library that bundles your own C utility functions — using a proper, reusable build system.

---

## Project Structure

```
ex01/
├── Makefile
├── libft.a           ← generated at root
├── srcs/
│   ├── ft_putchar.c
│   ├── ft_swap.c
│   ├── ft_putstr.c
│   ├── ft_strlen.c
│   └── ft_strcmp.c
└── includes/
    └── ft.h
```

> `.o` object files are generated next to their `.c` files, inside `srcs/`.

---

## The Makefile

### Rules

| Rule | What it does |
|------|--------------|
| `make` / `make all` | Compiles everything and builds `libft.a` |
| `make libft.a` | Same as `all` — builds the static library |
| `make clean` | Removes all `.o` object files |
| `make fclean` | `clean` + removes `libft.a` |
| `make re` | `fclean` + `all` — full rebuild from scratch |

### Compilation flags

```
cc -Wall -Wextra -Werror
```

### Key behaviors

- **No unnecessary recompilation** — only changed files get recompiled
- **All commands are printed** as they run
- **`.o` files stay near their `.c` files** (inside `srcs/`)
- **`libft.a` is created at the root** of the exercise directory

---

## Concepts You Need to Understand

### What is a Makefile?

A `Makefile` is a file that tells the `make` tool **how to build your project**. It defines rules: what files to compile, with what flags, and in what order.

### Anatomy of a rule

```makefile
target: prerequisites
	recipe
```

- **target** — the file to build (or a phony action like `clean`)
- **prerequisites** — files that must exist/be up-to-date first
- **recipe** — shell command(s) to run (must be indented with a **tab**, not spaces)

### Variables

```makefile
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
```

Variables keep things DRY and easy to change.

### Pattern rules

```makefile
%.o: %.c
	$(CC) $(CFLAGS) -I includes/ -c $< -o $@
```

This tells make: *"to build any `.o`, compile its matching `.c`"*.  
`$<` = the first prerequisite (the `.c` file)  
`$@` = the target (the `.o` file)

### .PHONY

```makefile
.PHONY: all clean fclean re
```

Marks rules that are **not real files** — prevents conflicts if a file named `clean` ever exists.

### Static library

```makefile
libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)
```

`ar rcs` bundles `.o` files into a single `.a` archive (static library).

---

## How `make` Knows What to Recompile

`make` checks **timestamps**. If a `.c` file is newer than its `.o`, it recompiles only that file. If `libft.a` is older than any `.o`, it rebuilds the archive. This is what makes Makefiles efficient.

---

## Common Pitfalls

- Using **spaces instead of tabs** for recipes → make will error
- Forgetting `-I includes/` → header not found
- Not listing `.PHONY` → unexpected behavior when filenames match rule names
- Hardcoding filenames instead of using variables or `wildcard` / pattern rules

---

## Quick Reference

```bash
make            # build libft.a
make clean      # remove .o files
make fclean     # remove .o files + libft.a
make re         # full clean rebuild
```
