set -e
g++ code.cpp -o code
g++ gen.cpp -o gen
g++ brute.cpp -o brute
for((i = 1; ; ++i)); do
    ./gen $i > in
    ./code < in > out1
    ./brute < in > out2
    diff -Z out1 out2 > /dev/null || break
    # diff -w out1 out2 || break
    echo "Passed test: "  $i
done
echo "WA on the following test:"
cat in
echo "Your answer is:"
cat out1
echo "Correct answer is:"
cat out2
