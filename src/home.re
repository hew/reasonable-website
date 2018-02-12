open Utilz;

let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
    <h1>{str("Home")}</h1>
    <p>{str("Hello there human. This website was written in pure Reasonml, and demonstrates the following technologies:")}</p>
    <ul>
      <li>(str("Fetching (bs-fetch)"))</li>
      <li>(str("Decoding (bs-json)"))</li>
      <li>(str("Rendering (reason-react)"))</li>
    </ul>
    <p>
      (str("To see everything in action, "))
      <Link href="/repos">(str("check out my repos."))</Link>
    </p>
  </div>
};
