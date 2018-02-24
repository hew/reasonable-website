open Primatives;
open Theme.Color;
open Utils;

let component = ReasonReact.statelessComponent("About");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Wrapper>
      <H1> <Wavy> "About" </Wavy> </H1>
      <P>
        "This page mostly exists to demonstrate routing capabilities. But just for kicks, below you'll find some future goals."
      </P>
      <H2> <Highlight> "future goals" </Highlight> </H2>
      <Ul>
        (
          <Li> <Highlight bg=gray> "extract theme into a functor thing" </Highlight> </Li>,
          <Li> <Highlight bg=gray> "general purpose <Space /> util" </Highlight> </Li>,
          <Li> (<a href="https://github.com/hew/reasonable-website/issues"> ("more on github" |> str )</a>) </Li>,
        )
      </Ul>
    </Wrapper>
};
