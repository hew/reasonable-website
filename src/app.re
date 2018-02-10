type action =
  | PressureLoaded(string);

type state = {
  data: string
};

let component = ReasonReact.reducerComponent("Counter");

let make = _children => {
  ...component,
  initialState: () => {data: "hello" },
  didMount: (self) => {
    let handleReposLoaded = self.reduce(repoData => PressureLoaded(repoData));

    Js.Promise.(
      Fetch.fetch("https://hewtools.herokuapp.com")
      |> then_(Fetch.Response.text)
      |> then_(text => handleReposLoaded(text) |> resolve)
    );

    ReasonReact.NoUpdate;
  },
  reducer: (action, state) =>
    switch (action) {
    | PressureLoaded(text) => ReasonReact.Update({...state, data: text })
    },
  render: ({state, send}) =>
   <div>
    <div>{ReasonReact.stringToElement(state.data)}</div>
   </div>
};
