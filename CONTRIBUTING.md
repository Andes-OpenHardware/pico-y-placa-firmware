### To get started

1. Fork the repository on Github
2. Make a branch off the `master`
3. Set up your development environment as described below
4. Start coding and,
5. Submit you pull request!

---

## Setting up your development environment

There are several ways to install PlatformIO as it provides official packages (plugins, extensions) for the most popular IDEs and text editors. You can choose the IDE or text editor of your preference and install PlatformIO as described on its [official documentation](http://docs.platformio.org/en/latest/ide/pioide.html).

### PlatformIO on Atom

If you want yo use PlatformIO with [Atom](https://atom.io/), you can install it as an Atom package. More instructions on how to install PlatformIO can be found [here](http://docs.platformio.org/en/latest/ide/atom.html#ide-atom).
That's all you need to start developing on this project.

### Running tests on each platform

The test code is ready to be executed in the following environments:
- _native_: Your local operating system
- _uno_: The arduino UNO board

PIO Unit Testing is a feature that's enabled in the Basic Plan. However, you get a 30 days free trial of this feature (__NEXT STEPS ON THIS TO BE DEFINED ALREADY__).

#### Running tests in the _native_ environment

To run tests on the native environment, execute on your terminal:
`pio test -e native` or `platformio test -e native`

#### Running tests in the _uno_ environment

To run tests on the native environment, execute on your terminal:
`pio test -e uno` or `platformio test -e uno`

#### Running tests for all of the environments

To run tests for all of the environments, execute on your terminal:
`pio test` or `platformio test`

---

## Code standards

- We develop all our code with [TDD](https://martinfowler.com/bliki/TestDrivenDevelopment.html). We strongly encourage you to use it to. Any code that does not meet the quality expectations, would not be accepted.
- We follow the C++ [conventions and styles from Google](https://google.github.io/styleguide/cppguide.html) (mostly) in our code.
- The `test` directory contains the unit tests (written in unity) for all the code and has inside three dirs: `common`, `native` and `embedded` which correspond to the platforms we support. All the tests that can (and should) be run on all environments, should be placed inside the `common` directory.
- All the code that depends upon the embedded capabilities (hardware) should be placed into the `src` directory. This code may be tested both in the native and embedded platforms. You should be able to determine what tests can be run on each one and place them appropiately.
- The `lib` directory is intended to have code that doesn't depend upon the embedded capabilities of the platform. All the code that contains domain logic may be placed here following the structure defined in the _readme.txt_ (located inside of the lib dir).
