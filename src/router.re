open Utils;

type route =
  | Home
  | Repos
  | Future;

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
  | ["repos"] => Repos
  | ["future"] => Future
  | _ => Home
  };

let component = ReasonReact.reducerComponent("Router");

let make = (_children) => {
  ...component,
  reducer,
  initialState: () => { route: ReasonReact.Router.dangerouslyGetInitialUrl() |> mapUrlToRoute },
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
        <li> <Link href="repos"> (str("Repos")) </Link> </li>
        <li> <Link href="future"> (str("Future")) </Link> </li>
      </ul>
      <div className="main">
        (
          switch self.state.route {
          | Home => <Home />
          | Repos => <Repos />
          | Future => <Future />
          }
        )
      </div>
    </div>
};
