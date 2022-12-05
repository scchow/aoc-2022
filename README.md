# aoc-2022

# Dependencies

## Cmake
```bash
sudo apt install cmake
```

## Gtest
```bash
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp lib/*.a /usr/lib
```

# Template for new days
```bash
sudo apt-get install rename # if needed
cp -r dayXX day<CURRENT_DAY>
cd day<CURRENT_DAY>
find . \( ! -regex '.*/\..*' \) -type f | xargs sed -i 's/dayXX/day<CURRENT_DAY>/g'
find . -name '*dayXX*' -exec rename 's/dayXX/day<CURRENT_DAY>/' {} \;
```
Replacing `<CURRENT_DAY>` with current day number.

Remember to update `input.txt`, `test.txt` and header, main, and test files accordingly.