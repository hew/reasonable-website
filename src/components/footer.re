open Primatives;
open Utils;

let component = ReasonReact.statelessComponent("footer");

let imgSrc = "https://user-images.githubusercontent.com/3103241/36555966-702746f4-17b8-11e8-83b3-777e63ed99da.png";

let make = (_children) => {
  ...component,
  render: (_self) =>
    <footer>
      <Foot>
        <Wrapper>
          <H4> "page meta" </H4>
          <P>
            (
              " view the source ",
              <a href="https://github.com/hew/reasonable-website"> <span>("here." |> str)</span> </a>,
              " made by ",
              <a href="https://hew.tools"> <span>("hew." |> str)</span> </a>,
            )
          </P>
        </Wrapper>
      </Foot>
    </footer>
};
