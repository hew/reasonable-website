open Utilz;

let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
    <h1>{str("Home")}</h1>
    <p>{str("Hello there human.")}</p>
    <p>
      <Link href="/repos">(str("Check out my repos."))</Link>
    </p>
  </div>
};
