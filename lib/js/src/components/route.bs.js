// Generated by BUCKLESCRIPT VERSION 2.2.0, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("Route");

function handleClick(href, $$event) {
  if ($$event.defaultPrevented) {
    return 0;
  } else {
    $$event.preventDefault();
    return ReasonReact.Router[/* push */0](href);
  }
}

function make(href, children) {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return ReasonReact.createDomElement("a", {
                  href: href,
                  onClick: (function (param) {
                      return handleClick(href, param);
                    })
                }, children);
    });
  return newrecord;
}

exports.component = component;
exports.handleClick = handleClick;
exports.make = make;
/* component Not a pure module */