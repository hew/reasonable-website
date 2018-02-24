open BsCssCore;
open BsCssCore.Css;

let pageWidth = maxWidth(em(52.));
let scale = [| 0., 0.25, 0.5, 1., 2., 4. |];
let space = (x) => rem(scale[x]);

let p = (x) => x |> space |> padding;
let py = (~x=?, y) => {
  switch (x) {
    | Some(x_) => padding2(~v=space(x_), ~h=space(y));
    | None => padding2(~v=space(y), ~h=space(0));
  }
};
let px_ = (~y=?, x) => {
  switch (y) {
    | Some(y_) => padding2(~v=space(x), ~h=space(y_));
    | None => padding2(~v=space(0), ~h=space(x));
  }
};

let m = (x) => x |> space |> margin;
let mr = (x) => x |> space |> marginRight;
let ml = (x) => x |> space |> marginLeft;
let mt = (x) => x |> space |> marginTop;
let mb = (x) => x |> space |> marginBottom;

module Color = {
  let purple = hex("996BDE");
  let red = hex("FF4136");
  let green = hex("2ECC40");
  let gray = hex("AAAAAA");
  let yellow = hex("ffc107");
};

module Typography = {
  let one = Css.px(72);
  let two = Css.px(48);
  let three = Css.px(36);
  let four = Css.px(24);
  let five = Css.px(18);
  let six = Css.px(12);
};
