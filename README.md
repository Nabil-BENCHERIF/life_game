

---


# Life Game – Predator-Prey Ecosystem Simulation in C

**life_game** is a C-based simulation that models an ecosystem of predators and prey interacting on a 2D grid. Each animal behaves according to simplified biological rules such as random movement, reproduction, predation, and death.

## 🧬 Features

- Models prey and predators with position, energy, and direction.
- Pseudo-random movement with probability-based direction change.
- Predation with probabilistic success.
- Reproduction with a given probability.
- ASCII-based ecosystem visualization in the console.
- Displays simulation stats: number of prey, predators, and steps.

## 🔧 Compilation

Use `make` to compile the project:

```bash
make
````

This generates:

* `tests_ecosys`: A test executable to initialize and visualize the ecosystem.
* `ecosys`: (To be completed) Main simulation executable.

## ▶️ Usage

### Run test:

```bash
./tests_ecosys
```

### Run full simulation (to be completed):

```bash
./ecosys
```

## ⚙️ Global Parameters (defined in `main_ecosys.c` or `main_tests.c`)

* `p_ch_dir`: Probability of direction change (`0.01`)
* `d_proie` / `d_predateur`: Energy lost per movement
* `p_manger`: Probability a predator eats a prey
* `p_reproduce`: Reproduction probability
* `energie`: Initial energy for all animals

## 📁 Project Structure

```text
.
├── ecosys.c          # Core animal and ecosystem functions
├── ecosys.h          # Function declarations and data structures
├── main_ecosys.c     # Main simulation loop (to be implemented)
├── main_tests.c      # Initial test program
├── Makefile          # Build configuration
├── README.md         # This file
└── LICENSE.txt       # MIT License
```

## ✅ To Do

* Implement `rafraichir_proies`, `rafraichir_predateurs`, `bouger_animaux`, `reproduce`, etc.
* Complete the main simulation loop in `main_ecosys.c`
* Optionally add saving/loading ecosystem state

## 📝 License

This project is licensed under the [MIT License](LICENSE.txt) – free to use, modify, and distribute.

## 👤 Author

Nabil BENCHERIF

```

---

Would you also like a short section on how to contribute or report bugs, in case others use or modify your project?
```
