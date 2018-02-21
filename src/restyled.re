open Primatives;
open Utils;
open Theme;

let component = ReasonReact.statelessComponent("Beep");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Wrapper>
      <Heading> "My name is Matthew Jones" </Heading>
      <Space s=[p(2)]>(str("Hello"))</Space>
      <Highlight>"Hello"</Highlight>
      <Underline>"Hello"</Underline>
    </Wrapper>
};
