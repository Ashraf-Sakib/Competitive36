<h2><a href="https://codeforces.com/contest/1832/problem/A" target="_blank" rel="noopener noreferrer">1832A — New Palindrome</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1832A](https://codeforces.com/contest/1832/problem/A) |

## Topics
`strings`

---

## Problem Statement

<div class="header"><div class="title">A. New Palindrome</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A palindrome is a string that reads the same from left to right as from right to left. For example, <span class="tex-font-style-tt">abacaba</span>, <span class="tex-font-style-tt">aaaa</span>, <span class="tex-font-style-tt">abba</span>, <span class="tex-font-style-tt">racecar</span> are palindromes.</p><p>You are given a string $$$s$$$ consisting of lowercase Latin letters. The string $$$s$$$ is a palindrome.</p><p>You have to check whether it is possible to rearrange the letters in it to get <span class="tex-font-style-bf">another</span> palindrome (not equal to the given string $$$s$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a string $$$s$$$ ($$$2 \le |s| \le 50$$$) consisting of lowercase Latin letters. This string is a palindrome.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-tt">YES</span> if it is possible to rearrange the letters in the given string to get <span class="tex-font-style-bf">another</span> palindrome. Otherwise, print <span class="tex-font-style-tt">NO</span>. </p><p>You may print each letter in any case (<span class="tex-font-style-tt">YES</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> will all be recognized as positive answer, <span class="tex-font-style-tt">NO</span>, <span class="tex-font-style-tt">no</span> and <span class="tex-font-style-tt">nO</span> will all be recognized as negative answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0048902176433365285" id="id002453606499238642" class="input-output-copier">Copy</div></div><pre id="id0048902176433365285"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">codedoc</div><div class="test-example-line test-example-line-even test-example-line-2">gg</div><div class="test-example-line test-example-line-odd test-example-line-3">aabaa</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00828423082565016" id="id0014762048444152798" class="input-output-copier">Copy</div></div><pre id="id00828423082565016">YES
NO
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is possible to rearrange the letters in the palindrome <span class="tex-font-style-tt">codedoc</span> to obtain the string <span class="tex-font-style-tt">ocdedco</span>, which is different from the given string, but also a palindrome.</p></div>