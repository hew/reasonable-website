open Primatives;
open Theme;

let component = ReasonReact.statelessComponent("Beep");

/* Js.log(p(2)); */

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Wrapper>
      <Heading> "My name is Matthew Jones" </Heading>
      <InlineColor> "yo" </InlineColor>
      <Nav> "beep" </Nav>
      <Flex s_=[p(2)] />
    </Wrapper>
};
