open Primatives;

open Utils;

let component = ReasonReact.statelessComponent("nav");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <nav>
      <NavItems>
        <NavItem> <Route href="/"> (str("home")) </Route> </NavItem>
        <NavItem> <Route href="/more"> (str("more")) </Route> </NavItem>
      </NavItems>
    </nav>
};
