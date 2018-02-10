type action =
  | Tick;

type state = {
  count: int,
};

let component = ReasonReact.reducerComponent("App");

let make = _children => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, state) =>
    switch (action) {
    | Tick => ReasonReact.Update({count: state.count + 1})
    },
  subscriptions: self => [
    Sub(
      () => Js.Global.setInterval(() => self.send(Tick), 1000),
      Js.Global.clearInterval
    )
  ],
  render: ({state}) =>
    <div>
    {ReasonReact.stringToElement(string_of_int(state.count))}
    </div>
};

