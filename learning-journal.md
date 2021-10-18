(2021 Oct 18 Mon)
  - **Comma operator (,)**  
  The comma operator (,) evaluates each of its operands (from left to right) and returns the value of the last operand. 
  - **assignment returns the assigned value, which can be `truthy`**
  - **`onSomeEvent` (like `onload`) functions are overridden/replaced when declared again**
    - to avoid this, use `addEventListner`
  - when there're **multiple logical operators**(including comma operator)
    - `a && b || c && d ...` will be evaluated as `((a && b) || c) || d ...` (left-to-right order)
    - comma operator doesn't guarantee execution order unlike `&&` or `||`
  - [**Attribute Selectors**](https://developer.mozilla.org/en-US/docs/Web/CSS/Attribute_selectors)
    - `[attr=value]` : exact comparison
    - `[attr~=value]` : contains the exact value(among whitespcae-separated list)
    - `[attr|=value]` : exact comparison + exact match right before the `-`
    - `[attr^=value]` : value is prefix
    - `[attr$=value]` : value is suffix
    - `[attr*=value]` : string contains value at least once
    - `[attr operator value i]` : adding *i* before closing bracket does case-insensitive comparison flag
    - `[attr operator value s]` : adding *s* before closing bracket does case-insensitive comparison flag