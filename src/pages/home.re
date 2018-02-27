open Primatives;
open Theme;

open BsCssCore.Css;

let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Wrapper>
      <Space px=2 />
      <H1>(<Wavy> "Reasonable Website" </Wavy>)</H1>
      <H2> <Highlight> "about" </Highlight> </H2>
      <P>
        (
          "Reasonable website (RW) is a website boilerplate written in ",
          <Wavy> "Reasonml." </Wavy>
        )
      </P>
      <H2> <Highlight> "components" </Highlight> </H2>
      <P>"RW comes with a components, most of which you see now on the home page."</P>
      <Ul>
        (
          <Li> <Highlight bg=gray> "H1, H2, P" </Highlight> </Li>,
          <Li> <Highlight bg=gray> "Wrapper" </Highlight> </Li>,
          <Li> <Highlight bg=gray> "etc.." </Highlight> </Li>,
        )
      </Ul>
      <H2> <Highlight> "styling" </Highlight> </H2>
      <P>"rw comes with a theme/styling thing. You get some style helpers:"</P>
      <Ul>
        (
          <Li> <Highlight bg=gray> "p, px, py" </Highlight> </Li>,
          <Li> <Highlight bg=gray> "m, mt, mb, mr, ml" </Highlight> </Li>,
          <Li> <Highlight bg=gray> "etc..." </Highlight> </Li>,
        )
      </Ul>
    </Wrapper>
};
