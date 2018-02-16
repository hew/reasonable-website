open Utils;

let component = ReasonReact.statelessComponent("Home");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="home">
      <h1> ("Where We're At" |> str) </h1>
      <p> (str("Hello there human. Welcome to Reasonable Website (RW).")) </p>
      <p>
        (
          str(
            "I created RW to start thinking about the web side of this whole Reasonml thing. Accordingly, RW demonstrates the following UI standards:"
          )
        )
      </p>
      <ul>
        <li> ("Fetching" |> str) <span> (" (bs-fetch)" |> str) </span> </li>
        <li> ("Decoding" |> str) <span> (" (bs-json)" |> str) </span> </li>
        <li> ("Routing " |> str) <span> (" (reason-react)" |> str) </span> </li>
      </ul>
      <p>
        (str("To see everything in action, "))
        <Link href="/repos"> (str("check out my repos.")) </Link>
      </p>
    </div>
};
