open Primatives;

let component = ReasonReact.statelessComponent("Beep");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Wrapper>
      <Heading> "My name is Matthew Jones" </Heading>
      <InlineColor> "yo" </InlineColor>
      <Nav> "beep" </Nav>

      <Link beep=BsCssCore.Css.bisque href="https://github.com/rtsao/styletron">
      (ReasonReact.stringToElement("Link example"))
      </Link>
    </Wrapper>
};
