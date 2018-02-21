open BsCssCore;

open Css;

open Theme;

module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~className, children) => {
    ...component,
    render: (_self) => <div className> (ReasonReact.arrayToElement(children)) </div>
  };
};

let makeStyledComponent = (s, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=(_props) => BsCssCore.Css.style(s),
    ~component=Component.component,
    ~make=Component.make,
    children
  );

let makeStyled = (styl, ~el="div", children) =>
  Styletron.React.makeStyled(
    ~base=`String(el),
    ~rule=(_props) => style(styl),
    ~props=Js.Obj.empty(),
    children
  );

module Space = {
  let make = (~s, children) => makeStyledComponent(s, children);
};

module Wrapper = {
  let make = (children) => makeStyled([pageWidth], children);
};

module Heading = {
  let make = (children) => makeStyled([fontSize(em(2.))], ~el="h1", children);
};

module Highlight = {
  let make = (~color_ = white, ~bg = Color.primary, children) =>
    makeStyled(
      [
        display(InlineBlock),
        backgroundColor(Color.primary),
        color(color_),
        backgroundColor(bg),
        p(1)
      ],
      children
    );
};

module Underline = {
  let make = (~color_ = Color.primary, children) =>
    makeStyled(
      [
        display(InlineBlock),
        borderBottomWidth(space(1)),
        borderBottomColor(color_),
        borderBottomStyle(Solid),
      ],
      children
    );
};
