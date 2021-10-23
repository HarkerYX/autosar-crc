# AUTOSAR-CRC

A C++ implemented set of 8,16,32,64 bit cyclic redundancy check (CRC) functions conforming to the CRC spec given by [AUTOSAR](https://www.autosar.org/). Written in C++ and compiled as a 'C++ addon' for use in JavaScript.

## Getting Started

These instructions will get you up and running using the autosar-crc node module on your local machine.

### Prerequisites

To get going you need the following installed:

* NodeJS
* npm

### Installing

Autosar-crc is available on the npm registry, so within your console you can install `autosar-crc`.

```
npm install autosar-crc
```

### Different types of CRC

Autosar-crc provides the following:

```js example.js
const autocrc = require('autosar-crc');

console.log(autocrc.crc8('123456789'));
console.log(autocrc.crc8_h2f('123456789'));
console.log(autocrc.crc16('123456789'));
console.log(autocrc.crc32('123456789'));
console.log(autocrc.crc32_p4('123456789'));
console.log(autocrc.crc64('123456789'));

```
```
node example.js 
```

The polynomials of the CRC match the spec given in the AUTOSAR standard, see `crc_tables.h` for specifics on the polynomials.

Each CRC accepts the following types:

* `String`
* `TypedArray`
* `ArrayBuffer`

```js
const autocrc = require('autosar-crc');

const arr = new Uint8Array([0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39]);

console.log(autocrc.crc8(arr));
console.log(autocrc.crc8(arr.buffer));
console.log(autocrc.crc8('123456789'))

```

## Running the tests

The tests are found in the `main.test.js` file and are run with `Jest`.

### Break down into end to end tests

The test script is defined in `package.json` so you can run:

```
npm test
```

## Built With

* [Node Addon API](https://github.com/nodejs/node-addon-api) - Module to use the Node-API from C++
* [Jest](https://jestjs.io/) - Testing framework

## Authors

* **Richard Haar** - *Initial work* - [richhaar](https://github.com/richhaar)

<!--See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.-->

## License

This project is licensed under the ISC License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Bastian Molkenthin for the table generation [here](http://www.sunshine2k.de/coding/javascript/crc/crc_js.html)
