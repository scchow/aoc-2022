# aoc-2022

(Re)-Learning C++ for fun.

## Dependencies

### Cmake
```bash
sudo apt install cmake
```

### Gtest
```bash
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp lib/*.a /usr/lib
```

### Boost
```bash
cd deps
wget https://boostorg.jfrog.io/artifactory/main/release/1.80.0/source/boost_1_80_0.tar.gz
tar -xf boost_1_80_0.tar.gz
rm boost_1_80_0.tar.gz
```

Not sure if the following is necessary, but included just in case.
```bash
cd boost_1_80_0
./bootstrap
./b2
./b2 header
```


## Template for new days
```bash
sudo apt-get install rename # if needed
cp -r dayXX day<CURRENT_DAY>
cd day<CURRENT_DAY>
find . \( ! -regex '.*/\..*' \) -type f | xargs sed -i 's/dayXX/day<CURRENT_DAY>/g'
find . -name '*dayXX*' -exec rename 's/dayXX/day<CURRENT_DAY>/' {} \;
```
Replacing `<CURRENT_DAY>` with current day number.

Remember to update `input.txt`, `test.txt` with the new day's inputs.
