# 🧩 Day 02 — Minimum Add to Make Parentheses Valid

**LeetCode 921** | **Difficulty:** Medium | **Topic:** Stack / String

🔗 [View Problem on LeetCode](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/)

---

## 📌 Problem Statement

A parentheses string is valid if and only if:

- It is the empty string.
- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings.
- It can be written as `(A)`, where `A` is a valid string.

You are given a parentheses string `s`.

In one move, you can **insert a parenthesis at any position** of the string.

For example, if `s = "()))"`, you can insert an opening parenthesis to make it valid.

Return the **minimum number of moves required to make `s` valid**.

---

## 📝 Examples

```text
Example 1:

Input:  s = "())"
Output: 1


Example 2:

Input:  s = "((("
Output: 3
