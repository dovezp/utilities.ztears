# ZTEARS - DATA Type Encryption

## About

ZTEARS is a small and portable library for data type encryption. This project provides efficient cipher implementation without adding unnecessary programming weight, making it ideal for applications requiring lightweight encryption solutions.

## Quick Start

### Basic Usage

Include `ZTEARS.h` or `ZBADTEARS.h` into your project.

```cpp
#include "ZTEARS.h"

#include <string>
#include <iostream>

utilities::ztears<int> int_trs;
int int_encoded = int_trs.encrypt(0x100);

std::cout << "0x100 == 0x" << std::hex << int_trs.decrypt(int_encoded) << std::endl;
```

```cpp
#include "ZBADTEARS.h"

#include <string>
#include <iostream>

utilities::zbadtears<uint32_t> uint_trs;
uint32_t uint_encoded = uint_trs.encrypt(0x100);

std::cout << "0x100 == 0x" << std::hex << uint_trs.decrypt(uint_encoded) << std::endl;
```

### License
This project operates under the [Apache License 2.0 (Apache-2.0)](https://tldrlegal.com/license/apache-license-2.0-(apache-2.0)). Please refer to the [LICENSE.md](./LICENSE.md) file for detailed information.

### Your Feedback Counts

Your insights and feedback, whether positive or constructive, are immensely valuable. Your contributions guide the refinement of the Codex Plugin for future iterations.

Share your thoughts by opening an issue in the [repository's issue section](https://github.com/dovezp/utilities.ztears/issues). Be sure to provide context and links when sharing your feedback.

Thank you for being an essential part of the Codex Plugin's growth journey.

<p align="center">
  <p align="center">
    <a href="https://github.com/dovezp/utilities.ztears/graphs/contributors">
      <img src="https://img.shields.io/github/contributors/dovezp/utilities.ztears?style=flat-square" alt="contributors"/>
    </a>
    <a href="https://github.com/dovezp/utilities.ztears/watchers">
      <img src="https://img.shields.io/github/watchers/dovezp/utilities.ztears?style=flat-square" alt="watchers"/>
    </a>
    <a href="https://github.com/dovezp/utilities.ztears/stargazers">
      <img src="https://img.shields.io/github/stars/dovezp/utilities.ztears?style=flat-square" alt="stars"/>
    </a>
    <a href="https://github.com/dovezp/utilities.ztears/network/members">
      <img src="https://img.shields.io/github/forks/dovezp/utilities.ztears?style=flat-square" alt="forks"/>
    </a>
  </p>
</p>

<p align="center">
  <a href="https://github.com/dovezp">
    <img width="64" heigth="64" src="https://avatars.githubusercontent.com/u/89095890" alt="dovezp"/>
  </a>
</p>
