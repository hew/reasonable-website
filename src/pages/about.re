let component = ReasonReact.statelessComponent("About");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>{ReasonReact.stringToElement("About")}</div>
};
