open BsCssCore;

open Css;

let pageWidth = maxWidth(em(72.));
let scale = [| 0., 0.5, 1., 2., 4. |];
let space = (x) => em(scale[x]);

let p = (x) => x |> space |> padding;
let py = (x) => padding2(~v=space(x), ~h=space(0));
let px = (x) => padding2(~v=space(0), ~h=space(x));

let m = (x) => x |> space |> margin;
let mr = (x) => x |> space |> marginRight;
let ml = (x) => x |> space |> marginLeft;
let mt = (x) => x |> space |> marginTop;
let mb = (x) => x |> space |> marginBottom;

module Color = {
  let primary = purple;
  let secondary = red;
}
