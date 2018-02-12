open Utilz;

let component = ReasonReact.statelessComponent("Future");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="future">
      <h1> ("Future Goals" |> str) </h1>
      <p> ("Future goals for reasonable website include but are not limited to:" |> str) </p>
      <ul>
        <li>
          <strong> ("Proper Routing" |> str) </strong>
          <p> ("A longer sentence than the above." |> str) </p>
        </li>
      </ul>
    </div>
};
