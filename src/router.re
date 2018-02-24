type route =
  | Home
  | More;

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
  | ["more"] => More
  | _ => Home
  };

let component = ReasonReact.reducerComponent("Router");

let make = (_children) => {
  ...component,
  reducer,
  initialState: () => {route: ReasonReact.Router.dangerouslyGetInitialUrl() |> mapUrlToRoute},
  subscriptions: (self) => [
    Sub(
      () => ReasonReact.Router.watchUrl((url) => self.send(ChangeRoute(url |> mapUrlToRoute))),
      ReasonReact.Router.unwatchUrl
    )
  ],
  render: (self) =>
    <Styletron.React.Provider>
      <div>
        <Nav />
        <main>
          (
            switch self.state.route {
            | Home => <Home />
            | More => <More />
            }
          )
        </main>
        <Footer />
      </div>
    </Styletron.React.Provider>
};
