open BsCssCore.Css;

module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~href, ~className, children) => {
    ...component,
    render: (_self) => <a className href> (ReasonReact.arrayToElement(children)) </a>
  };
};

let make = (~href, ~beep, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=(_props) => style([flexGrow(1), flexBasis(rem(10.)), backgroundColor(beep)]),
    ~component=Component.component,
    ~make=Component.make(~href),
    children
  );
