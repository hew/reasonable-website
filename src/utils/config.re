open BsCssCore;

module type Config = {
  type t;
  let scale: array(float);
};

module Theme = (Config: Config) => {
  /* let's use a list as our naive backing data structure */
  type backingType = array(Config.t);
  type scale = backingType;
};

module Config = {
  type t = Css.cssunit;
  let scale = [| 0., 0.25, 0.5, 1., 2., 4. |];
};

module Init = Theme(Config);
