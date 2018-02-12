open Utilz;

let component = ReasonReact.statelessComponent("Future");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="future">
      <h1> ("Future Goals" |> str) </h1>
      <p> ("Future goals and bugs will be tracked on Github:" |> str) </p>
      <p> <Link href="https://github.com/hew/reasonable-website/issues/">("Check them out" |> str)</Link> </p>
    </div>
};
