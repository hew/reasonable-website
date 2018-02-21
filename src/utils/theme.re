open BsCssCore;

open Css;

let scale = [| 0., 0.5, 1., 2., 4. |];

let s = (x) => em(scale[x]);

let p = (x) => padding(s(x));
let py = (x) => padding2(~v=s(x), ~h=s(0));
let px = (x) => padding2(~v=s(0), ~h=s(x));

let m = margin;
let mr = marginRight;
let ml = marginLeft;
let mt = marginTop;
let mb = marginBottom;

