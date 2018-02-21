// Generated by BUCKLESCRIPT VERSION 2.2.0, PLEASE EDIT WITH CARE
'use strict';

var Caml_array = require("bs-platform/lib/js/caml_array.js");
var Css$BsCssCore = require("bs-css-core/lib/js/src/Css.js");

var pageWidth = Css$BsCssCore.maxWidth(Css$BsCssCore.em(72));

var scale = /* float array */[
  0,
  0.5,
  1,
  2,
  4
];

function space(x) {
  return Css$BsCssCore.em(Caml_array.caml_array_get(scale, x));
}

function p(x) {
  return Css$BsCssCore.padding(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function py(x) {
  return Css$BsCssCore.padding2(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)), Css$BsCssCore.em(Caml_array.caml_array_get(scale, 0)));
}

function px(x) {
  return Css$BsCssCore.padding2(Css$BsCssCore.em(Caml_array.caml_array_get(scale, 0)), Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function m(x) {
  return Css$BsCssCore.margin(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function mr(x) {
  return Css$BsCssCore.marginRight(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function ml(x) {
  return Css$BsCssCore.marginLeft(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function mt(x) {
  return Css$BsCssCore.marginTop(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

function mb(x) {
  return Css$BsCssCore.marginBottom(Css$BsCssCore.em(Caml_array.caml_array_get(scale, x)));
}

var Color = /* module */[
  /* primary */Css$BsCssCore.purple,
  /* secondary */Css$BsCssCore.red
];

exports.pageWidth = pageWidth;
exports.scale = scale;
exports.space = space;
exports.p = p;
exports.py = py;
exports.px = px;
exports.m = m;
exports.mr = mr;
exports.ml = ml;
exports.mt = mt;
exports.mb = mb;
exports.Color = Color;
/* pageWidth Not a pure module */