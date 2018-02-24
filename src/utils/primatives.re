open BsCssCore.Css;

open Theme;

open Theme.Typography;

module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~className, children) => {
    ...component,
    render: (_self) => <div className> (ReasonReact.arrayToElement(children)) </div>
  };
};

let makeStyled = (styl, ~el="div", children) =>
  Styletron.React.makeStyled(
    ~base=`String(el),
    ~rule=(_props) => style(styl),
    ~props=Js.Obj.empty(),
    children
  );

module Wrapper = {
  let make = (children) => makeStyled([pageWidth, px_(4)], children);
};

/* Lists */
module NavItems = {
  let make = (children) =>
    makeStyled([display(Flex), fontSize(four), m(0), p(4)], ~el="ul", children);
};

module NavItem = {
  let make = (children) => makeStyled([listStyleType(None), px_(1)], ~el="li", children);
};

module Foot = {
  let make = (children) => makeStyled([display(Flex), backgroundColor(Color.yellow), py(5), mt(5)], ~el="div", children);
};


/* Type */
module H1 = {
  let make = (children) => makeStyled([fontSize(one), fontWeight(W700), m(0), py(3)], ~el="h1", children);
};

module H2 = {
  let make = (children) => makeStyled([fontSize(three), fontWeight(W400), mt(5)], ~el="h2", children);
};

module H3 = {
  let make = (children) => makeStyled([fontSize(four), fontWeight(W700), mt(3), mb(0)], ~el="h3", children);
};

module H4 = {
  let make = (children) => makeStyled([fontSize(four), fontWeight(W700), color(white), mt(3), mb(0)], ~el="h3", children);
};

module P = {
  let make = (children) => makeStyled([fontSize(four)], ~el="p", children);
};

module Span = {
  let make = (children) => makeStyled([], ~el="span", children);
};

module Ul = {
  let make = (children) => makeStyled([listStyleType(Square), fontSize(four), m(0), mt(2)], ~el="ul", children);
};

module Li = {
  let make = (children) => makeStyled([fontSize(four), py(2)], ~el="li", children);
};

module Wavy = {
  let make = (children) =>
    makeStyled(
      [
        textDecoration(UnderlineWavy(Color.green)),
        color(gray)
      ],
      ~el="span",
      children
    );
};

module Highlight = {
  let make = (~color_=white, ~bg=Color.purple, children) =>
    makeStyled(
      [
        display(InlineBlock),
        backgroundColor(Color.purple),
        color(color_),
        backgroundColor(bg),
        px_(2)
      ],
      children
    );
};

module Underline = {
  let make = (~color_=Color.purple, children) =>
    makeStyled(
      [
        display(InlineBlock),
        borderBottomWidth(space(1)),
        borderBottomColor(color_),
        borderBottomStyle(Solid)
      ],
      children
    );
};

