# [929. Unique Email Addresses](https://leetcode.com/problems/unique-email-addresses/)

**Difficulty:** Easy

---

## Problem Statement

Every valid email consists of a local name and a domain name, separated by the `'@'` sign.  
For example, in `"alice@leetcode.com"`, `"alice"` is the local name, and `"leetcode.com"` is the domain name.

- You may add dots `'.'` in the local name, and it will be ignored.
- Everything after a plus `'+'` in the local name is ignored.
- These rules do not apply to the domain name.

Given a list of email addresses, return the number of unique addresses that actually receive emails.

---

## Examples

### Example 1

**Input:**
```
emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
```
**Output:**
```
2
```
**Explanation:**  
All emails to `"test.email+alex@leetcode.com"` and `"test.e.mail+bob.cathy@leetcode.com"` go to `"testemail@leetcode.com"`.  
The third email goes to `"testemail@lee.tcode.com"`.  
So, there are 2 unique addresses.

---

### Example 2

**Input:**
```
emails = ["a@leetcode.com","b@leetcode.com","c@leetcode.com"]
```
**Output:**
```
3
```

---

## Constraints

- `1 <= emails.length <= 100`
- `1 <= emails[i].length <= 100`
- `emails[i]` consist of lowercase English letters, `'+'`, `'.'`, and `'@'`.

---

## Approach

- For each email, process the local name:
  - Ignore all dots `'.'`.
  - Ignore everything after a plus `'+'`.
- Keep the domain name unchanged.
- Combine the processed local name and domain name.
- Use a set or map to count unique processed emails.
- Return the size of the set/map.

---

