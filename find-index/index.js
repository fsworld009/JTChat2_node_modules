function findIndex(array, predicate, self) {
  var len = array.length;
  var i;
  if (len === 0) return -1;
  if (typeof predicate !== 'function') {
    throw new TypeError(predicate + ' must be a function');
  }

  if (self) {
    for (i = 0; i < len; i++) {
      if (predicate.call(self, array[i], i, array)) {
        return i;
      }
    }
  } else {
    for (i = 0; i < len; i++) {
      if (predicate(array[i], i, array)) {
        return i;
      }
    }
  }

  return -1;
}

module.exports = findIndex
