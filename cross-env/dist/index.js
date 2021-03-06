'use strict';

Object.defineProperty(exports, '__esModule', {
  value: true
});

var _slicedToArray = (function () { function sliceIterator(arr, i) { var _arr = []; var _n = true; var _d = false; var _e = undefined; try { for (var _i = arr[Symbol.iterator](), _s; !(_n = (_s = _i.next()).done); _n = true) { _arr.push(_s.value); if (i && _arr.length === i) break; } } catch (err) { _d = true; _e = err; } finally { try { if (!_n && _i['return']) _i['return'](); } finally { if (_d) throw _e; } } return _arr; } return function (arr, i) { if (Array.isArray(arr)) { return arr; } else if (Symbol.iterator in Object(arr)) { return sliceIterator(arr, i); } else { throw new TypeError('Invalid attempt to destructure non-iterable instance'); } }; })();

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }

var _crossSpawn = require('cross-spawn');

var _lodashAssign = require('lodash.assign');

var _lodashAssign2 = _interopRequireDefault(_lodashAssign);

exports['default'] = crossEnv;

var envSetterRegex = /(\w+)=('(.+)'|"(.+)"|(.+))/;

function crossEnv(args) {
  var _getCommandArgsAndEnvVars = getCommandArgsAndEnvVars(args);

  var _getCommandArgsAndEnvVars2 = _slicedToArray(_getCommandArgsAndEnvVars, 3);

  var command = _getCommandArgsAndEnvVars2[0];
  var commandArgs = _getCommandArgsAndEnvVars2[1];
  var env = _getCommandArgsAndEnvVars2[2];

  if (command) {
    var _ret = (function () {
      var proc = (0, _crossSpawn.spawn)(command, commandArgs, { stdio: 'inherit', env: env });
      process.on('SIGTERM', function () {
        return proc.kill('SIGTERM');
      });
      proc.on('exit', process.exit);
      return {
        v: proc
      };
    })();

    if (typeof _ret === 'object') return _ret.v;
  }
}

function getCommandArgsAndEnvVars(args) {
  // eslint-disable-line
  var command = undefined;
  var envVars = (0, _lodashAssign2['default'])({}, process.env);
  var commandArgs = args.slice();
  while (commandArgs.length) {
    var shifted = commandArgs.shift();
    var match = envSetterRegex.exec(shifted);
    if (match) {
      envVars[match[1]] = match[3] || match[4] || match[5];
    } else {
      command = shifted;
      break;
    }
    if (process.env.APPDATA) {
      envVars.APPDATA = process.env.APPDATA;
    }
  }
  return [command, commandArgs, envVars];
}
module.exports = exports['default'];