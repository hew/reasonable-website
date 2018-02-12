[%bs.raw {|require('./router.css')|}];

let str = ReasonReact.stringToElement;
let sty = ReactDOMRe.Style.make;

type route =
  | Home
  | About;

type state = {route};

type action =
  | ChangeRoute(route);

let reducer = (action, _state) =>
  switch action {
  | ChangeRoute(route) => ReasonReact.Update({route: route})
  };

let mapUrlToRoute = (url: ReasonReact.Router.url) =>
  switch url.path {
  | [] => Home
  | ["about"] => About
  | _ => Home
  };

let component = ReasonReact.reducerComponent("Router");

let make = (_children) => {
  ...component,
  reducer,
  initialState: () => {route: Home},
  subscriptions: (self) => [
    Sub(
      () => ReasonReact.Router.watchUrl((url) => self.send(ChangeRoute(url |> mapUrlToRoute))),
      ReasonReact.Router.unwatchUrl
    )
  ],
  render: (self) =>
    <div>
      <ul className="nav">
        <li> <Link href="home"> (str("Home")) </Link> </li>
        <li> <Link href="about"> (str("About")) </Link> </li>
      </ul>
      <div>
        (
          switch self.state.route {
          | Home => <Home />
          | About => <App />
          }
        )
      </div>
    </div>
};
