let str = ReasonReact.stringToElement;
let sty = ReactDOMRe.Style.make;

let get = (arg, default) =>
  switch arg {
  | None => default
  | Some(value) => value
  };

let listFromArray = (arr: array('a)) =>
  ArrayLabels.fold_right(~f=(ele, l) => [ele, ...l], arr, ~init=[]);

/* let parser = (arr: array('a)) => { */
/*  Array.iter((s) => { */
/*     switch s { */
/*       | float => Js.log(s) */
/*     }; */

/*   }, arr); */
/* }; */
