let str = ReasonReact.stringToElement;
let sty = ReactDOMRe.Style.make;

let get = (arg, default) =>
  switch arg {
  | None => default
  | Some(value) => value
  };
