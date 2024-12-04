echo Test 1: STDIN
echo one one one | ./uniform-length > test1-output.txt

echo Test 2: STDIN
./uniform-length < ./tests/stdin-hello-there-one-one-one-one-two-one-three > test2-output.txt

echo Test 3: STDIN
./uniform-length < ./tests/hello-there-world-another123-several-jumping-jury-kylls-losing-money-bonkers  > test3-output.txt

echo Test 4: One Input File: one-line-test.txt
./uniform-length ./tests/one-line-test.txt  > test4-output.txt

echo Test 5: One Input File: two-line-tests.txt
./uniform-length ./tests/two-line-tests.txt  > test5-output.txt

echo Test 6: One Input File: simple-tests.txt
./uniform-length ./tests/simple-tests.txt  > test6-output.txt

echo Test 7: One Input File: pride-sentences.txt
./uniform-length ./tests/pride-sentences.txt  > test7-output.txt

echo Test 8: Two Input Files: pride-sentences.txt paradise-lost.txt
./uniform-length ./tests/pride-sentences.txt ./tests/paradise-lost.txt > test8-output.txt

echo Test 9: Two Input Files: two-line-tests.txt simple-tests.txt
./uniform-length ./tests/pride-sentences.txt ./tests/paradise-lost.txt > test9-output.txt

echo Test 10: Two Input Files: two-line-tests.txt file-doesnt-exist
./uniform-length ./tests/two-line-tests.txt file-doesnt-exist > test10-output.txt

echo Test 11: Three Input Files: pride-sentences.txt two-line-tests.txt simple-tests.txt
./uniform-length ./tests/pride-sentences.txt ./tests/two-line-tests.txt ./tests/simple-tests.txt > test11-output.txt

echo Test 12: Four Input Files: pride-sentences.txt paradise-lost.txt leaves-of-grass.txt jekyll-hyde-sentences.txt 4820
./uniform-length ./tests/pride-sentences.txt ./tests/paradise-lost.txt ./tests/leaves-of-grass.txt ./tests/jekyll-hyde-sentences.txt > test12-output.txt
