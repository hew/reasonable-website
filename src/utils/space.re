open Theme;
open BsCssCore.Css;

module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~px, ~className, children) => {
    ...component,
    render: _self =>
      <div className> (ReasonReact.arrayToElement(children)) </div>
  };
};

let make = (~px, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=
      _props => style([px_(px)]),
    ~component=Component.component,
    ~make=Component.make(~px),
    children
  );
