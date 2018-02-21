open BsCssCore;
open Css;

type beep = int;

type theme = {textColor: color};

let theme = {textColor: purple};

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
      ~rule=
        (props) =>
          BsCssCore.Css.(
            style([display(InlineBlock), backgroundColor(props##name), color(props##white)])
          ),
      ~props=Js.Obj.empty(),
      children
    );
};

/* let parser = (arr: array('a)) => { */
/*  Array.iter((s) => { */
/*     switch s { */
/*       | float => Js.log(s) */
/*     }; */

/*   }, arr); */
/* }; */

module Flex = {
  module Component = {
    let component = ReasonReact.statelessComponent("Component");
    let make = (~className, ~s_, children) => {
      ...component,
      render: (_self) => <div className> (ReasonReact.arrayToElement(children)) </div>
    };
  };
  let make = (~s_, children) => {
    Styletron.React.makeStyledComponent(
      ~rule=(_props) => style(s_),
      ~component=Component.component,
      ~make=Component.make(~s_),
      children
    )
  };
};
