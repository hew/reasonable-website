open BsCssCore;
open Css;

type beep = int;

type theme = {
  textColor: color,
};

let theme = {
  textColor: purple
};

module Nav = {
  let make = (children) =>
    Styletron.React.makeStyled(
      ~base=`String("nav"),
      ~rule=(_props) => style([maxWidth(px(1000)), color(theme.textColor)]),
      ~props=Js.Obj.empty(),
      children
    );
};

module Wrapper = {
  let make = (children) =>
    Styletron.React.makeStyled(
      ~base=`String("div"),
      ~rule=(_props) => Css.(style([maxWidth(em(72.0))])),
      ~props=Js.Obj.empty(),
      children
    );
};

module Heading = {
  let make = (children) =>
    Styletron.React.makeStyled(
      ~base=`String("h1"),
      ~rule=(_props) => BsCssCore.Css.(style([fontSize(rem(2.0))])),
      ~props=Js.Obj.empty(),
      children
    );
};

module InlineColor = {
  let make = (children) =>
    Styletron.React.makeStyled(
      ~base=`String("h1"),
      ~rule= (props) => BsCssCore.Css.(style([display(InlineBlock), backgroundColor(props##name), color(props##white)])),
      ~props=Js.Obj.empty(),
      children
    );
};
