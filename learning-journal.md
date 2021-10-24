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


(2021 Oct 19 Tue)
- **using `<input id="inputId">` with `<label for="inputId">`** to check a state
  - no need to add an event listener. if you click the label, the checkbox would be checked!
  - use with css selector like `#inputId ~ .someClass`
- **css `transition` can have time delay**
  - `transition: <property> <duration> <timing-function> <delay>;`
- **`toggle` function can be used for DOMTokenList(like classList)**
  - returns `false` when removed, returns `true` when added
- **DOMTokenList methods**
  - `list.item(idx)`
  - `list.contains(token)`
  - `list.add(token1, token2, ..)`
  - `list.remove(token1, token2, ..)`
  - `list.replace(oldToken, newToken)`
  - `list.toggle(token [, force])` : if force set to false, only removal happens. if set to true, only addition happens.
  - `list.supports(token)` : *experimental*! check if support the feature kind of things
  - `list.entries()`, `list.forEach(callback [, thisArg])`, `list.keys()`, `list.values()`

(2021 Oct 20 Wed)
- **How apple get viewport width**
  ```css
  #ac-gn-viewport-emitter {
    overflow: hidden;
    position: absolute;
    top: 0;
    left: 0;
    width: 0;
    height: 0;
    visibility: hidden;
    z-index: -1;
  }
  #ac-gn-viewport-emitter::before {
    content: "large";
  }
  @media only screen and (max-width: 1023px) {
    #ac-gn-viewport-emitter::before {
      content: "medium";
    }
  }
  @media only screen and (max-width: 833px) {
    #ac-gn-viewport-emitter::before {
      content: "small";
    }
  }
  @media only screen and (max-width: 419px) {
    #ac-gn-viewport-emitter::before {
      content: "xsmall";
    }
  }
  ```
  - Desktop size : ~ 1069
    - max-width break points: 2560px, 1440px
    - some images stay still but some images stretches to fill the 100vw
  - tablet size : 735 ~ 1068 (max-width: 734px || max-width: 1068px)
  - use 'small-hide' and 'medium-hide' for each brkp
  - smallest device width support is 320pxs
- **`backdrop-filter` applied to transparent background**
  - so you don't need another div for backdrop! just make the container as big as the viewport
- **To apply `transition` to a property, it should have value to go through.**
  - so in [case](https://stackoverflow.com/questions/27900053/css-transition-with-visibility-not-working) of `transition: visibility 1s` will only make the change happen 1s later.
- **when you want to delay the transition only one-way**
  - add `transition-delay: 0` to the state you don't want the delay
- **`z-index` only works for positioned elements**  



(2021 Oct 21 Thu ~ 2021 Oct 22 Fri)
- **increment/decrement operator returns the value before operation**
  - ex) `1--` will return 1
- use `mouseenter/mouseleave` instead of `mouseover/mouseout`