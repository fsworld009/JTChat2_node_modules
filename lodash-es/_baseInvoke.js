import apply from './_apply';
import baseCastPath from './_baseCastPath';
import isKey from './_isKey';
import last from './last';
import parent from './_parent';

/**
 * The base implementation of `_.invoke` without support for individual
 * method arguments.
 *
 * @private
 * @param {Object} object The object to query.
 * @param {Array|string} path The path of the method to invoke.
 * @param {Array} args The arguments to invoke the method with.
 * @returns {*} Returns the result of the invoked method.
 */
function baseInvoke(object, path, args) {
  if (!isKey(path, object)) {
    path = baseCastPath(path);
    object = parent(object, path);
    path = last(path);
  }
  var func = object == null ? object : object[path];
  return func == null ? undefined : apply(func, object, args);
}

export default baseInvoke;
