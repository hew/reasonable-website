open Utils;

type repo = {
  name: string,
  url: string,
  stars: int,
  forks: int
};

type action =
  | Loaded(array(repo));

type state = {data: array(repo)};

module Decode = {
  let repo = (json) : repo =>
    Json.Decode.{
      name: json |> field("name", string),
      url: json |> field("url", string),
      stars: json |> field("stars", int),
      forks: json |> field("forks", int)
    };
  let repos = (json) : array(repo) => Json.Decode.(json |> array(repo));
};

let component = ReasonReact.reducerComponent("Counter");

let make = (_children) => {
  ...component,
  initialState: () => {data: [||]},
  didMount: (self) => {
    let handleReposLoaded = self.reduce((repoData) => Loaded(repoData));
    Js.Promise.(
      Fetch.fetch("https://hewtools.herokuapp.com")
      |> then_(Fetch.Response.json)
      |> then_(
           (json) =>
             json
             |> Decode.repos
             |> (
               (repos) => {
                 handleReposLoaded(repos);
                 resolve()
               }
             )
         )
      |> ignore
    );
    ReasonReact.NoUpdate
  },
  reducer: (action, state) =>
    switch action {
    | Loaded(text) => ReasonReact.Update({...state, data: text})
    },
  render: ({state}) => {
    let repoList = Array.map((repo) => <p> (str(repo.name)) </p>, state.data);
    <div className="repos"> 
      <h1>("Hew's Github Repos" |> str)</h1>
      <p>("The ol', data fetch, map a list. Are these linked or anything? Uh.." |> str)</p>
      <hr />
      <div> (ReasonReact.arrayToElement(repoList)) </div> </div>
  }
};
