# Changelog

All notable changes to this project will be documented in this file. See [commit-and-tag-version](https://github.com/absolute-version/commit-and-tag-version) for commit guidelines.

## [2.4.1](https://github.com/sabertazimi/OJs/compare/v2.4.0...v2.4.1) (2024-04-01)


### :rocket: Building Work

* change release tool ([1d35d26](https://github.com/sabertazimi/OJs/commit/1d35d26bc91a91f160efcdaf9a07a0d145d40514))


### :wrench: Testing

* **vitest:** drop CJS configuration file ([c037d8e](https://github.com/sabertazimi/OJs/commit/c037d8eed54d95c57dd7d58db3f7cbc7423ca6d7))

## [2.4.0](https://github.com/sabertazimi/OJs/compare/v2.3.0...v2.4.0) (2022-04-30)


### :rocket: Building Work

* **CI:** add multiple environment for testing ([fead0f9](https://github.com/sabertazimi/OJs/commit/fead0f973d421de6cbef0e350d00a88d4c526863))
* **CI:** reduce virtual machines efforts ([02ec1f6](https://github.com/sabertazimi/OJs/commit/02ec1f699c12c4483b2d6883503242e2c29a78e0))
* **CI:** switch from `coveralls` to `codecov` ([30b549e](https://github.com/sabertazimi/OJs/commit/30b549ed7052bb7bb3f1fe36f5dbd2695fde797b))
* **deps-bot:** change PR concurrent limits ([2f82f8f](https://github.com/sabertazimi/OJs/commit/2f82f8ff511e5cb76a8f63bb074b54a7e73b3bde))
* **deps-bot:** disable bump `node` engine version ([05f61a9](https://github.com/sabertazimi/OJs/commit/05f61a9a555a7607f953bc1cfef18210c2c12ae6))
* **deps-bot:** disable lockfile maintenance ([82824db](https://github.com/sabertazimi/OJs/commit/82824db9be453f827ab52e5d47aa02361ed9a40a))
* **deps-bot:** remove GitHub dependabot ([be47088](https://github.com/sabertazimi/OJs/commit/be470880ddf126442f844938260cea9115a67f76))
* **deps-bot:** setup automerge configuration ([e57e8d6](https://github.com/sabertazimi/OJs/commit/e57e8d6c2fa57884cbbc56a24d7538bce610ac93))
* **deps-bot:** setup renovate bot configuration ([13510ed](https://github.com/sabertazimi/OJs/commit/13510ed57bd44187c00191f67180a4f584cda49f))
* **deps-bot:** widen peerDeps and engines ([8c65fc4](https://github.com/sabertazimi/OJs/commit/8c65fc43f1878348006acdd500971f1dbd3ae4d4))
* **deps-dev:** update dependency @types/node to ^16.10.1 ([c5a8389](https://github.com/sabertazimi/OJs/commit/c5a8389abf77f41ea640f42329dcc361aa113b3b))
* **deps:** bundle bod deps into single PR ([3f24e79](https://github.com/sabertazimi/OJs/commit/3f24e79363e5d118cde7ba544549e727acb32507))
* **eslint:** add `dg-scripts` eslint configuration ([d33c124](https://github.com/sabertazimi/OJs/commit/d33c124cfb73722b6a9384a4fa1b2226d77b5fea))
* **lint:** disable auto-fix for linter ([02cdad5](https://github.com/sabertazimi/OJs/commit/02cdad5c1bcc5164c7966bc8cf8886c6ffa41030))
* **yarn:** bump yarn from v3.0.2 to v3.1.0 ([2cb7000](https://github.com/sabertazimi/OJs/commit/2cb7000a0fcc33a10e30083d9237940c07cc8ebc))


### :sparkles: Features

* **test-vitest:** switch from `jest` to `vitest` ([#143](https://github.com/sabertazimi/OJs/issues/143)) ([8ad0c41](https://github.com/sabertazimi/OJs/commit/8ad0c41f100586f86721e7d57587d16323711707))

## [2.3.0](https://github.com/sabertazimi/OJs/compare/v2.2.0...v2.3.0) (2021-09-12)


### :sparkles: Array

* **leetcode-0001:** two sum (one iteration with hash map) ([d532c69](https://github.com/sabertazimi/OJs/commit/d532c6903202c37ab31636f13096b7b4577e7985))


### :sparkles: Features

* **yarn:** switch from npm to yarn berry ([9141445](https://github.com/sabertazimi/OJs/commit/914144595313445ab0ac3656092fc23f72062669))


### :rocket: Building Work

* **CI-azure:** remove azure pipelines ([641d1e9](https://github.com/sabertazimi/OJs/commit/641d1e93e81a55dea7e55289c5fecde618d6fa17))
* **CI-CodeQL:** add CodeQL analysis ([b9849e4](https://github.com/sabertazimi/OJs/commit/b9849e49d9524514645ff55af21477138b1d1628))
* **CI-report:** deploy coverage report ([590adda](https://github.com/sabertazimi/OJs/commit/590addaf3491be34df2665ef8113f3a3f72618bd))
* **CI:** change fetch depth ([38fd88c](https://github.com/sabertazimi/OJs/commit/38fd88cd2a424f6e7ffe85ee5a8ebcbf9184f676))
* **CI:** remove redundant stage ([f6ab45f](https://github.com/sabertazimi/OJs/commit/f6ab45fdbede96ca9a697c495554dae030273b07))
* **CI:** separate lint and test stage ([de655d9](https://github.com/sabertazimi/OJs/commit/de655d9bcc448f425ea0e54f97991be8b87b9eb6))
* **CI:** separate test and deploy stage ([8a1d128](https://github.com/sabertazimi/OJs/commit/8a1d128189eec616e1d7fb156b165e2fce33f7ff))
* **CI:** skip deploy on PRs ([be9aa5e](https://github.com/sabertazimi/OJs/commit/be9aa5e190a41eae2bb92020c7bfc333663069c9))
* **dependabot:** change versioning strategy ([ec1f9e4](https://github.com/sabertazimi/OJs/commit/ec1f9e4fc73faf07173c3db44c5bd3e2aae9e454))
* **deps-bot:** add renovate.json ([#17](https://github.com/sabertazimi/OJs/issues/17)) ([7730562](https://github.com/sabertazimi/OJs/commit/7730562f9ffc7eec7bd6e5c93cdc00805bd3f383))
* **deps-bot:** enable `pin` version ([c18d5fc](https://github.com/sabertazimi/OJs/commit/c18d5fcd1ade2eb8d3d39c57f2fc6aaa52510f0b))
* **deps-bot:** setup renovate bot configuration ([f0b3580](https://github.com/sabertazimi/OJs/commit/f0b35806aad601a90e0400232d1aa6e45de9fe5d))
* **deps-dev:** bump @types/node from 16.7.10 to 16.9.0 ([#12](https://github.com/sabertazimi/OJs/issues/12)) ([dfc617f](https://github.com/sabertazimi/OJs/commit/dfc617f28876364f5fd856989133a60f793b66f2))
* **deps-dev:** bump @types/node from 16.7.8 to 16.7.10 ([#11](https://github.com/sabertazimi/OJs/issues/11)) ([ae901ee](https://github.com/sabertazimi/OJs/commit/ae901ee48e5d6c8f7ae5ce40780990910d642665))
* **deps-dev:** bump @typescript-eslint/eslint-plugin ([#15](https://github.com/sabertazimi/OJs/issues/15)) ([42c5b50](https://github.com/sabertazimi/OJs/commit/42c5b509e4376f54729d207852e5f63019e7b694))
* **deps-dev:** bump @typescript-eslint/parser from 4.30.0 to 4.31.0 ([#13](https://github.com/sabertazimi/OJs/issues/13)) ([b25252b](https://github.com/sabertazimi/OJs/commit/b25252ba23fd01d11f14b83335fc141bddb0fa37))
* **deps-dev:** bump jest from 27.1.0 to 27.1.1 ([#16](https://github.com/sabertazimi/OJs/issues/16)) ([3d18079](https://github.com/sabertazimi/OJs/commit/3d180792dd54824f41b44e053bce88db2f66dad4))
* **deps-dev:** bump prettier from 2.3.2 to 2.4.0 ([#14](https://github.com/sabertazimi/OJs/issues/14)) ([87d2a4e](https://github.com/sabertazimi/OJs/commit/87d2a4e98274e4f86148d6d3ca22a2cc377acd72))
* **Jest:** enable Jest config intellisense ([b8bd4b2](https://github.com/sabertazimi/OJs/commit/b8bd4b299adb9c4949451431c6782193d4365d10))

## [2.2.0](https://github.com/sabertazimi/OJs/compare/v2.1.6...v2.2.0) (2021-08-31)


### :rocket: Building Work

* **deps-dev:** bump @types/node from 16.7.6 to 16.7.8 ([#9](https://github.com/sabertazimi/OJs/issues/9)) ([8fe49de](https://github.com/sabertazimi/OJs/commit/8fe49de69588e654fbf649f5b1b4c40d656d47be))
* **deps-dev:** bump @typescript-eslint/eslint-plugin ([#10](https://github.com/sabertazimi/OJs/issues/10)) ([5d8c499](https://github.com/sabertazimi/OJs/commit/5d8c499c5722870443c1a175d752742ded2ac0a0))
* **deps-dev:** bump @typescript-eslint/parser from 4.29.3 to 4.30.0 ([#8](https://github.com/sabertazimi/OJs/issues/8)) ([073c7d8](https://github.com/sabertazimi/OJs/commit/073c7d8580b45fffb4d0bdc13b38bc7c047f5911))
* **deps-dev:** bump eslint-plugin-prettier from 3.4.1 to 4.0.0 ([#7](https://github.com/sabertazimi/OJs/issues/7)) ([7d675ca](https://github.com/sabertazimi/OJs/commit/7d675cad22dccdaefaaf3fae314a458ff3dd94cd))


### :sparkles: Greedy

* **leetcode-0455:** assign cookies ([d31ddaa](https://github.com/sabertazimi/OJs/commit/d31ddaa5e57c17a80bd5cffccaf3d18f6b11e08b))


### :sparkles: Search

* **leetcode-0475:** heaters ([b03a46b](https://github.com/sabertazimi/OJs/commit/b03a46bcdf67d24f86180f937b27cd96931db97b))


### :sparkles: Stack

* **leetcode-0496:** next greater elment i (monotonic stack) ([6097995](https://github.com/sabertazimi/OJs/commit/6097995522c591382a8a74619f53a8febf9c1108))


### :sparkles: Array

* **leetcode-0453:** minimum moves to equal array elements ([a0eb9fe](https://github.com/sabertazimi/OJs/commit/a0eb9febd6b729d6bad091f8b81a6efb0a523a58))
* **leetcode-0485:** max consecutive ones ([51d89af](https://github.com/sabertazimi/OJs/commit/51d89afde36c162bffbb1af591f1b91d81d8f0b5))
* **leetcode-0548:** split array with equal sum ([8a5014e](https://github.com/sabertazimi/OJs/commit/8a5014e7a7e672ebd21e55a585a8964efefd2773))


### :sparkles: Graph

* **leetcode-0463:** island perimeter ([87f0b29](https://github.com/sabertazimi/OJs/commit/87f0b29ed0a4af4a147e254ace567b8f769d5be3))
* **leetcode-0547:** number of provinces ([812ae97](https://github.com/sabertazimi/OJs/commit/812ae97d5017b475ad330707accdb179c5a5b212))


### :sparkles: Tree

* **leetcode-0549:** binary tree longest consecutive sequence ii ([357d8a7](https://github.com/sabertazimi/OJs/commit/357d8a7d07240584cf158128009e3572feb97c9e))


### :sparkles: Hash Function

* **leetcode-0554:** brick wall ([b022178](https://github.com/sabertazimi/OJs/commit/b022178bb95fe2e297dbf1fe185bbb53d6802f13))


### :sparkles: String

* **leetcode-0459:** repeated substring pattern ([f4398ec](https://github.com/sabertazimi/OJs/commit/f4398ecb9b52d7a1c00b391861df79fa125c60a8))
* **leetcode-0500:** keyboard row ([fd92039](https://github.com/sabertazimi/OJs/commit/fd9203900b2ad058133ab1678c82cbd17959ef73))
* **leetcode-0521:** longest uncommon subsequence i ([9d91ce5](https://github.com/sabertazimi/OJs/commit/9d91ce5ebd3102f76d58d43d74b212f1bb85f543))
* **leetcode-0522:** longest uncommon subsequence ii ([3d91195](https://github.com/sabertazimi/OJs/commit/3d91195470b28edbfaa46971a2e583806131e547))
* **leetcode-0541:** reverse string ii ([9984cb6](https://github.com/sabertazimi/OJs/commit/9984cb665035041938749f4637914311362d013f))
* **leetcode-0557:** reverse words in a string iii ([b93d4b1](https://github.com/sabertazimi/OJs/commit/b93d4b1b4f84de4d36552fd9be14474d33b122c2))


### :sparkles: Math

* **leetcode-0461:** hamming distance ([cb13d41](https://github.com/sabertazimi/OJs/commit/cb13d4131529b5254d0d5592d9b6b368a78fe124))
* **leetcode-0476:** number complement ([ee844fe](https://github.com/sabertazimi/OJs/commit/ee844feb18b3c3ee829dcdc80597eb0ed899a437))
* **leetcode-0492:** construct the rectangle ([33bc287](https://github.com/sabertazimi/OJs/commit/33bc287f0a6e204afaa0a03fe787e14c4c605524))
* **leetcode-0556:** next greater element iii (monotonic stack) ([056af00](https://github.com/sabertazimi/OJs/commit/056af0086ba88f8952efcf5cc3491a6a1dd39f17))

### [2.1.6](https://github.com/sabertazimi/OJs/compare/v2.1.5...v2.1.6) (2021-08-30)


### :sparkles: String

* **leetcode-0409:** longest palindrome ([1b48a1c](https://github.com/sabertazimi/OJs/commit/1b48a1c2525ac4758fec727eeb0284f82215feed))
* **leetcode-0434:** number of segments in a string ([97aa732](https://github.com/sabertazimi/OJs/commit/97aa7325c4d781683d4604cd6ac8b539c86040bc))


### :sparkles: Tree

* **leetcode-0404:** sum of left leaves ([e129b3e](https://github.com/sabertazimi/OJs/commit/e129b3e787cba63c89b7ba93f367ca89e0e472f0))
* **leetcode-0437:** path sum iii ([708d501](https://github.com/sabertazimi/OJs/commit/708d50186d99f79f9bf892bf92d54d7722c0cd1b))


### :sparkles: Array

* **leetcode-0412:** fizz buzz ([ced54ec](https://github.com/sabertazimi/OJs/commit/ced54ec06fb0c4029f5050ca278357be1be6e638))
* **leetcode-0414:** third maximum number ([7ce8ebf](https://github.com/sabertazimi/OJs/commit/7ce8ebf80b7232039d01d838d5c2643fbf3e6a8d))
* **leetcode-0438:** find all anagrams in a string ([928a12d](https://github.com/sabertazimi/OJs/commit/928a12d91b6bbcd7bdabc0b45cf6ba1e3f890a47))


### :rocket: Building Work

* **deps-dev:** bump @types/node from 16.7.4 to 16.7.6 ([b5debed](https://github.com/sabertazimi/OJs/commit/b5debed4d17daf652acc221779c4457dc6168294))


### :sparkles: Math

* **leetcode-0401:** binary watch ([958fecb](https://github.com/sabertazimi/OJs/commit/958fecb8f6f0d0a3736cfb583a53547f8828e6df))
* **leetcode-0405:** convert a number to hexadecimal ([0fbfc54](https://github.com/sabertazimi/OJs/commit/0fbfc54716de719e5c49ed398c93a383c8a3e374))
* **leetcode-0415:** add strings (add big integer) ([995635b](https://github.com/sabertazimi/OJs/commit/995635bbc6e3fa395cd1a048ba61a37159c98ee9))
* **leetcode-0441:** arranging coins ([f12c1b5](https://github.com/sabertazimi/OJs/commit/f12c1b58c333a33061cc5e46084c803420586212))
* **leetcode-0447:** number of boomerangs ([a325c10](https://github.com/sabertazimi/OJs/commit/a325c10e687800b34b348574ea6b07cd828bd6b5))


### :sparkles: Hash Function

* **leetcode-0448:** find all numbers disappeared in an array ([d93d53c](https://github.com/sabertazimi/OJs/commit/d93d53c00e46745a6b60b478f376ea7d782f6ac2))

### [2.1.5](https://github.com/sabertazimi/OJs/compare/v2.1.4...v2.1.5) (2021-08-28)


### :sparkles: Queue

* **leetcode-0232:** implement queue using stacks ([f8e166a](https://github.com/sabertazimi/OJs/commit/f8e166ae579024d5c8c8c64ade834802ec178063))


### :rocket: Building Work

* **deps-dev:** bump @types/node from 16.7.1 to 16.7.4 ([9748045](https://github.com/sabertazimi/OJs/commit/97480459e46ef0c2fc2d5ceba4fae6284d3d7efe))
* **deps-dev:** bump jest from 27.0.6 to 27.1.0 ([27ee729](https://github.com/sabertazimi/OJs/commit/27ee729219331b202ecd13dcba2cd37df27b986c))
* **deps-dev:** bump typescript from 4.3.5 to 4.4.2 ([7e49374](https://github.com/sabertazimi/OJs/commit/7e493743d35e1e43bcfab7f0dd79d35122e3680d))


### :sparkles: Linked List

* **leetcode-0234:** palindrome linked list ([83c5995](https://github.com/sabertazimi/OJs/commit/83c59959f162fa52936d1f6f01c7a68dd3e79aed))
* **leetcode-0237:** delete node in a linked list ([4267e5a](https://github.com/sabertazimi/OJs/commit/4267e5af1c386bbc15f3831b109d2fff922613f6))


### :sparkles: Dynamic Programming

* **leetcode-0264:** ugly number ii (digits dynamic programming) ([a9b62d0](https://github.com/sabertazimi/OJs/commit/a9b62d0b8ebc37ceca74fcb97536fdb2e0a36dda))


### :sparkles: Hash Function

* **leetcode-0290:** word patterns ([f839b2b](https://github.com/sabertazimi/OJs/commit/f839b2bfc40a2390f8a704068a3a3582720d66da))


### :sparkles: Tree

* **leetcode-0235:** lowest common ancestor of a binary search tree ([b854cc4](https://github.com/sabertazimi/OJs/commit/b854cc406a94d5989d89c66867d46c491fdff81a))
* **leetcode-0297:** serialize and deserialize binary tree ([cbf2215](https://github.com/sabertazimi/OJs/commit/cbf2215febb247edaa5d610a98214c9049b9ea26))
* **Segment Tree:** implement segment tree for range update/query ([0f6b129](https://github.com/sabertazimi/OJs/commit/0f6b12903d5950c71315b92d02716e8d428b02cd))


### :sparkles: Array

* **leetcode-0283:** move zeros ([3174e4b](https://github.com/sabertazimi/OJs/commit/3174e4be1935bc6a43e7dbb0919d5db998d1af83))
* **leetcode-0303:** range sum query immutable (prefix sum) ([e474ab1](https://github.com/sabertazimi/OJs/commit/e474ab1bf66b14707bbabd7f1983e05e571d462a))
* **leetcode-0349:** intersection of two arrays ([8f2c26b](https://github.com/sabertazimi/OJs/commit/8f2c26b2b74568c9ec059913d6e02b508f52b0b4))
* **leetcode-0350:** intersection of two arrays ii ([15f5153](https://github.com/sabertazimi/OJs/commit/15f5153f6f952464114f7fb6415de7cec4bede03))


### :sparkles: Search

* **leetcode-0240:** search a 2d matrix ii ([c0e8b94](https://github.com/sabertazimi/OJs/commit/c0e8b944f9a245300560f547e83a94a1207c8586))
* **leetcode-0278:** first bad version ([58f6a70](https://github.com/sabertazimi/OJs/commit/58f6a7008ffe2e0c8d382314f601913aacfa38be))
* **leetcode-0374:** guess number higher or lower ([483bc77](https://github.com/sabertazimi/OJs/commit/483bc77f1ef15121c77aea3237b6f57b92b8a742))


### :sparkles: String

* **leetcode-0242:** valid anagram ([2eed025](https://github.com/sabertazimi/OJs/commit/2eed025d3848606925f0b6f08054241e76af1fd7))
* **leetcode-0344:** reverse string ([0045169](https://github.com/sabertazimi/OJs/commit/0045169bc6b2c16136e28b70789374fe34d806bb))
* **leetcode-0345:** reverse vowels of string ([712c0bb](https://github.com/sabertazimi/OJs/commit/712c0bb01744b639e22ae6d23cdb1f6fceb104f2))
* **leetcode-0383:** ransom note ([827b4d0](https://github.com/sabertazimi/OJs/commit/827b4d06d0872bfc9d1b1f15b17b86e1e094ffee))
* **leetcode-0387:** first unique character in a string ([db1cbff](https://github.com/sabertazimi/OJs/commit/db1cbffc45886bbb9ddd7e5dcc8520af8074fb6d))
* **leetcode-0389:** find the difference ([1f5ee01](https://github.com/sabertazimi/OJs/commit/1f5ee01d494e6c83e5ec97019ebcb82caaf13964))


### :sparkles: Math

* **leetcode-0231:** power of two ([2aaeb7d](https://github.com/sabertazimi/OJs/commit/2aaeb7d87be96dfac47b6c62d6cbf95b83e31cba))
* **leetcode-0258:** add digits ([f38770c](https://github.com/sabertazimi/OJs/commit/f38770c3cc4bc21167a416ca8e8c94eb6cdbfea2))
* **leetcode-0263:** ugly number ([03cd73a](https://github.com/sabertazimi/OJs/commit/03cd73a9ad16fb382323648a67d563e8182376ee))
* **leetcode-0268:** missing number ([647d649](https://github.com/sabertazimi/OJs/commit/647d64954da6fcefa277df7d8430f95b97ea9325))
* **leetcode-0292:** nim game ([5041a58](https://github.com/sabertazimi/OJs/commit/5041a5819eaa270945237f65224dd359ecb54f7f))
* **leetcode-0326:** power of three ([e5c7d02](https://github.com/sabertazimi/OJs/commit/e5c7d02260e66fb8264c38f726e7996176b3b07e))
* **leetcode-0342:** power of four ([792c17e](https://github.com/sabertazimi/OJs/commit/792c17e669e82c89bc5b43d9e5496ae69c744cf7))
* **leetcode-0367:** valid perfect square ([4007f1c](https://github.com/sabertazimi/OJs/commit/4007f1cf396ed7b70d6a21b2a1bd17be482ce228))
* **leetcode-0371:** sum of two integers ([b839a96](https://github.com/sabertazimi/OJs/commit/b839a96324b0ae0b7515e4c006415fbba7754fb8))
* **leetcode-0400:** nth digit ([388e1fd](https://github.com/sabertazimi/OJs/commit/388e1fdb9553506905f2d099b37cbf1f2a7e3a93))

### [2.1.4](https://github.com/sabertazimi/OJs/compare/v2.1.3...v2.1.4) (2021-08-27)


### :sparkles: Hash Function

* **leetcode-0217:** contains duplicate ([d270460](https://github.com/sabertazimi/OJs/commit/d27046057374a469bf63dc9ddfb8917d44032bda))
* **leetcode-0219:** contains duplicate ii ([09474bb](https://github.com/sabertazimi/OJs/commit/09474bb512239b61b66186fef4fbc1876fb5efd4))
* **leetcode-0220:** contains duplicate iii ([8dfb2e6](https://github.com/sabertazimi/OJs/commit/8dfb2e68b161ab462dd7d971a70903c7e2b3404d))


### :sparkles: Stack

* **leetcode-0225:** implement stack using queues ([276f608](https://github.com/sabertazimi/OJs/commit/276f60800db3ae46a9008613456f459dcddf05f9))

### [2.1.3](https://github.com/sabertazimi/OJs/compare/v2.1.2...v2.1.3) (2021-08-26)


### :sparkles: String

* **codewars-rank:** duplicate encoder ([1b5ea3f](https://github.com/sabertazimi/OJs/commit/1b5ea3fe1d96b8510ec9aea18a8cca21f1010dbf))


### :sparkles: Stack

* **leetcode-0155:** min stack ([10ab39d](https://github.com/sabertazimi/OJs/commit/10ab39ddc6c2497793f562b1b2a005547a5977ba))


### :sparkles: Search

* **leetcode-0153:** find minimum in rotated sorted array ([67f6557](https://github.com/sabertazimi/OJs/commit/67f6557749da6f940238ef9392b3b0b77255cb2d))
* **leetcode-0154:** find minimum in rotated sorted array ii ([59ae340](https://github.com/sabertazimi/OJs/commit/59ae3404efd73a1d680fc1997fa45a50d2c36b63))
* **leetcode-0162:** find peak element ([b5e31d4](https://github.com/sabertazimi/OJs/commit/b5e31d4f2b9aecf724e5f08d040577c308188b4d))
* **leetcode-0167:** two sum ii input array is sorted ([287b1d5](https://github.com/sabertazimi/OJs/commit/287b1d51e753a19d40bdca260d7ff9f7ea4e7a01))


### :sparkles: Array

* **leetcode-0169:** majority element ([2fe5799](https://github.com/sabertazimi/OJs/commit/2fe579915242e395b62ffd169c4715315989a024))
* **leetcode-0189:** rotate array ([3f4079a](https://github.com/sabertazimi/OJs/commit/3f4079a5954f6abce978c908033d903e0f335696))


### :sparkles: Dynamic Programming

* **leetcode-0198:** house robber ([7e867f1](https://github.com/sabertazimi/OJs/commit/7e867f1541c5fcd061a578d5f56ea01a2cb8ddad))


### :sparkles: Math

* **leetcode-0136:** single number (bitwise operator) ([2bc474f](https://github.com/sabertazimi/OJs/commit/2bc474f17dec0ab8b79ed17d01725d71bcba424e))
* **leetcode-0137:** single number ii ([10f037e](https://github.com/sabertazimi/OJs/commit/10f037edf350ce4b8b9a0037610037cc029573fd))
* **leetcode-0171:** excel sheet column number ([8a17b77](https://github.com/sabertazimi/OJs/commit/8a17b7746a993215d53076f038e9a2d6108e7676))
* **leetcode-0172:** factorial trailing zeroes ([2cc9b5f](https://github.com/sabertazimi/OJs/commit/2cc9b5f7c55c249b0f9a44d7e1d6c9e339690d15))
* **leetcode-0190:** reverse bits ([4914578](https://github.com/sabertazimi/OJs/commit/4914578c9cfcda512fdb3b106104c703b9ccdb5d))
* **leetcode-0191:** number of 1 bits ([c622eec](https://github.com/sabertazimi/OJs/commit/c622eeca6936c3e1c6497d796639ea1f18c10ecf))
* **leetcode-0202:** happy number ([9df015b](https://github.com/sabertazimi/OJs/commit/9df015b9340e27c7a07bba7971f506dca9f91fa4))
* **leetcode-0204:** count primes ([f4bbea3](https://github.com/sabertazimi/OJs/commit/f4bbea3023530178d914a3a24275a5cdca14983f))


### :sparkles: Hash Function

* **leetcode-0205:** isomorphic strings ([5385742](https://github.com/sabertazimi/OJs/commit/538574259bf861dc79206132c0b7edabe4483846))


### :sparkles: Linked List

* **leetcode-0141:** linked list cycle (two pointers algorithm) ([9a627df](https://github.com/sabertazimi/OJs/commit/9a627dfbe90651edb9ccc3adfde4fd7fc72005a5))
* **leetcode-0142:** linked cycle ii (set map) ([4219be5](https://github.com/sabertazimi/OJs/commit/4219be578b74f883568f2087d85d5bee530f5b92))
* **leetcode-0160:** intersection of two linked lists ([e1a2aac](https://github.com/sabertazimi/OJs/commit/e1a2aac7ab2ceab3ca07263b4299001d9978a684))
* **leetcode-0203:** remove linked list elements ([b367fd4](https://github.com/sabertazimi/OJs/commit/b367fd4e537883f6ca9b911228a935eadd16d702))
* **leetcode-0206:** reverse linked list ([8b78cff](https://github.com/sabertazimi/OJs/commit/8b78cff799443f3fa0cbfa32a7689c15dca0fae8))

### [2.1.2](https://github.com/sabertazimi/OJs/compare/v2.1.1...v2.1.2) (2021-08-25)


### :sparkles: Tree

* **leetcode-0108:** convert sorted array to binary search tree ([5c84be9](https://github.com/sabertazimi/OJs/commit/5c84be9aecdcb70f235597b272a098d396284a11))
* **leetcode-0109:** convert sorted list to binary search tree ([502d3c0](https://github.com/sabertazimi/OJs/commit/502d3c0e95411f83769199219388e005f71552d5))
* **leetcode-0110:** balanced binary tree ([9802e1a](https://github.com/sabertazimi/OJs/commit/9802e1a86a4de58e3c446c5ba57b72c5a8294753))
* **leetcode-0111:** minimum depth of binary tree ([323d116](https://github.com/sabertazimi/OJs/commit/323d1166a3c55145a65167d578cbaba6612f8646))
* **leetcode-0112:** path sum of binary tree ([2a84aff](https://github.com/sabertazimi/OJs/commit/2a84aff38d32809ca59197fdd10b92f48b2345ec))
* **leetcode-0113:** path sum ii ([cc10e95](https://github.com/sabertazimi/OJs/commit/cc10e952ecf6fa542a986a7e75b31c6a3d29809f))


### :sparkles: Math

* **leetcode-0118:** pascals triangle ([196a7f8](https://github.com/sabertazimi/OJs/commit/196a7f8f3b27a249abf6e9a71cbd9805e6784347))
* **leetcode-0119:** pascals triangle ii ([993bb9d](https://github.com/sabertazimi/OJs/commit/993bb9d5576dcec33fddcf74dc0c353826a427d1))


### :sparkles: Array

* **leetcode-0121:** best time to buy and sell stock ([570dca5](https://github.com/sabertazimi/OJs/commit/570dca53f9dbf39e8e6d925009779260f755f294))


### :sparkles: Greedy

* **leetcode-0122:** best time to buy and sell stock ii ([3846f8e](https://github.com/sabertazimi/OJs/commit/3846f8e2403b64a356ba83786d95849e65ea0501))


### :sparkles: Dynamic Programming

* **leetcode-0123:** best time to buy and sell stock iii ([d17a66c](https://github.com/sabertazimi/OJs/commit/d17a66cb72729e7c605cb08b790266d4268569dc))
* **leetcode-0188:** best time to buy and sell stock iv ([c566aa9](https://github.com/sabertazimi/OJs/commit/c566aa9a6196684f06cd7d549e5c4b709f6bd604))


### :sparkles: String

* **leetcode-0125:** valid palindrome string ([133c550](https://github.com/sabertazimi/OJs/commit/133c550895dd522f012eafb07c3470556cf3e577))

### [2.1.1](https://github.com/sabertazimi/OJs/compare/v2.1.0...v2.1.1) (2021-08-25)


### :sparkles: Tree

* **leetcode-0101:** symmetric tree ([077602b](https://github.com/sabertazimi/OJs/commit/077602bd0ec71df6aba20fcbc1661563a0593564))
* **leetcode-0102:** binary tree level order traversal ([525e114](https://github.com/sabertazimi/OJs/commit/525e11445cc1bac3a09834262c3e7de931e31a09))
* **leetcode-0103:** binary tree zigzag level order traversal ([f2ecc8a](https://github.com/sabertazimi/OJs/commit/f2ecc8ab7cd9a232b86ed81ccbf42a063861eeba))
* **leetcode-0104:** maximum depth of binary tree ([277d1c1](https://github.com/sabertazimi/OJs/commit/277d1c1eeb19cb82d75d65c5832e6184cb85aaf7))
* **leetcode-0105:** construct binary tree from preorder and inorder ([8c4160d](https://github.com/sabertazimi/OJs/commit/8c4160df06d0bd72aa77fcad77bed53eec37bdff))
* **leetcode-0106:** construct tree from inorder and postorder traversal ([c155603](https://github.com/sabertazimi/OJs/commit/c155603cc865d5073489ae2b0d55fe9cdf9e26e3))
* **leetcode-0107:** binary tree bottom level order traversal ([9a77237](https://github.com/sabertazimi/OJs/commit/9a77237e3f07d89c59a73e46605fe756bd41f625))


### :bug: Bug Fixes

* **leetcode-Tree:** rectify tree nodes array type ([8662ede](https://github.com/sabertazimi/OJs/commit/8662ededb3209ecff7b0860a13fa33eebdd7a958))


### :wrench: Testing

* **leetcode-List/Tree:** add more testing ([37bb2ea](https://github.com/sabertazimi/OJs/commit/37bb2ea81fcf3f2f753cdec058d31a05d74e60d7))
* **leetcode-List:** add List testing ([e70937b](https://github.com/sabertazimi/OJs/commit/e70937b34aad143366418f0912b07238b31105db))
* **leetcode-Tree:** add Tree testing ([1c8748e](https://github.com/sabertazimi/OJs/commit/1c8748e68dcd91250b87cf0b081079b9370796ff))

## [2.1.0](https://github.com/sabertazimi/OJs/compare/v2.0.0...v2.1.0) (2021-08-24)


### :sparkles: Recursion

* **leetcode-0038:** count and say ([d6d093f](https://github.com/sabertazimi/OJs/commit/d6d093f9b25085f15ef21ee097e482db5ea93c5e))


### :sparkles: Dynamic Programming

* **leetcode-0053:** maximum subarray (one variable store DP) ([76916e1](https://github.com/sabertazimi/OJs/commit/76916e15c1549bedd2b3a34aac12ab210b6511d2))


### :sparkles: Matrix

* **leetcode-0059:** spiral matrix II ([dfc589f](https://github.com/sabertazimi/OJs/commit/dfc589f0e609cd5ab507ce9d28dc4ba4e138e34a))


### :sparkles: String

* **leetcode-0028:** KMP substring algorithm ([39e3907](https://github.com/sabertazimi/OJs/commit/39e39075273c58e5e34f7da352d44f8279e877a9))
* **leetcode-0058:** length of last word ([6dc99d7](https://github.com/sabertazimi/OJs/commit/6dc99d7c3c0f97f03adcbffee6006a0c0348fe39))


### :sparkles: Math

* **leetcode-0066:** plus one (big int) ([968fc37](https://github.com/sabertazimi/OJs/commit/968fc375399e15dff61c51984442ca64518877fb))
* **leetcode-0067:** add binary string (big int) ([6836fdb](https://github.com/sabertazimi/OJs/commit/6836fdb30fe79b48ae662b72bc77b769af038c9c))


### :sparkles: Search

* **leetcode-0034:** search for a range (binary search in sorted array) ([791e328](https://github.com/sabertazimi/OJs/commit/791e32819c886e0591cc53360da062d6d011a73e))
* **leetcode-0035:** search insert position in sorted array ([325b1a7](https://github.com/sabertazimi/OJs/commit/325b1a7b451d4577a75a49b90e912159dac4c0f0))
* **leetcode-0074:** search a sorted 2d matrix (binary search) ([9d2f43c](https://github.com/sabertazimi/OJs/commit/9d2f43c699e33612db91ed653514c55f34d682a0))


### :bug: Bug Fixes

* **category:** add backtracking algorithm ([403fea7](https://github.com/sabertazimi/OJs/commit/403fea724c744efc61529e723d9b31537599035e))


### :sparkles: Backtracking

* **leetcode-0078:** subsets problem (backtracking) ([15b8806](https://github.com/sabertazimi/OJs/commit/15b8806bb544b3d82a24b5ec7b94b70a283f7181))


### :sparkles: Features

* **leetcode-Tree:** complete Tree utility functions ([b7521d4](https://github.com/sabertazimi/OJs/commit/b7521d453a42be7bfb8eb394fce0496850342a6d))


### :sparkles: Linked List

* **leetcode-0021:** merget two sorted lists ([6539d93](https://github.com/sabertazimi/OJs/commit/6539d936ae18e9f2cde53ac80cc0df27e0fb53ef))
* **leetcode-0083:** remove duplicates from sorted list ([1d296e2](https://github.com/sabertazimi/OJs/commit/1d296e27857efae6dd42cf0b498e11d0029af437))


### :sparkles: Tree

* **leetcode-0094/0144/0145:** binary tree traversal ([2d8fda0](https://github.com/sabertazimi/OJs/commit/2d8fda0248a7bfadbe64c0f267c537cbb6ed7fbd))
* **leetcode-0100:** same tree comparsion ([90caec8](https://github.com/sabertazimi/OJs/commit/90caec87640a369ff0682871b49194feef04e842))
* **leetcode-0226:** invert binary tree ([e62570e](https://github.com/sabertazimi/OJs/commit/e62570edaceb7cce984d95bc90a3447006022521))


### :sparkles: Stack

* **leetcode-0020:** valid parentheses ([9d6d649](https://github.com/sabertazimi/OJs/commit/9d6d649a193dbcf88e6a7e0de22de797f961e8c4))
* **leetcode-0084:** largest rectangle in histogram (increasing stack) ([59d06f8](https://github.com/sabertazimi/OJs/commit/59d06f8ccde2ccc39e9bb8c244dc1fbc5632c152))


### :sparkles: Array

* **leetcode-0015:** 3 sum array ([343560a](https://github.com/sabertazimi/OJs/commit/343560acd186f787b315416284d8ff2a0b7a00cb))
* **leetcode-0016:** 3sum closest ([d7539e6](https://github.com/sabertazimi/OJs/commit/d7539e60796725574e8b2d56ee9fa3ca31025241))
* **leetcode-0018:** 4sum problem ([92f58e9](https://github.com/sabertazimi/OJs/commit/92f58e96111ada43b0006a57a609e27c1cf4e46b))
* **leetcode-0026:** remove dups from sorted array in place ([492119b](https://github.com/sabertazimi/OJs/commit/492119bb32b7fb93e807306813285076509331db))
* **leetcode-0027:** remove element in place ([6c0b418](https://github.com/sabertazimi/OJs/commit/6c0b41840130e1af83f3da8e0579fdd6abe98d04))
* **leetcode-0088:** merge sorted array ([383b46f](https://github.com/sabertazimi/OJs/commit/383b46f9e69c9d86a90ef09dd81948598caeec71))


### :rocket: Building Work

* **CI:** set up CI with Azure Pipelines ([fe1856e](https://github.com/sabertazimi/OJs/commit/fe1856e1727738403dfa57defb7f4cb89840de4f))
* **deps-dev:** bump @typescript-eslint/eslint-plugin from 4.29.2 to 4.29.3 ([47205dc](https://github.com/sabertazimi/OJs/commit/47205dce81bf31b98ea99160b37bacba8faaa037))
* **deps-dev:** bump @typescript-eslint/parser from 4.29.2 to 4.29.3 ([4a833c7](https://github.com/sabertazimi/OJs/commit/4a833c7e1d961e281bb9304112891842c687d7b0))

## [2.0.0](https://github.com/sabertazimi/OJs/compare/v1.0.0...v2.0.0) (2021-08-22)


### ⚠ BREAKING CHANGES

* **archive:** remove archive OJ solutions

### :sparkles: Linked List

* **leetcode-0002:** add two numbers problem ([b697a34](https://github.com/sabertazimi/OJs/commit/b697a341fb72eca475071afad5fc0daf0880d729))
* **utils:** add List utility functions ([997333e](https://github.com/sabertazimi/OJs/commit/997333e171fddc3e6bc63992f4428da1c335ffd0))


### :sparkles: Sorting

* **leetcode-0004:** median of two sorted arrays ([6309946](https://github.com/sabertazimi/OJs/commit/6309946f3f6fd356767322dd8c9c34f4876f8857))


### :sparkles: Dynamic Programming

* **leetcode-0005:** longest palindromic substring ([778350d](https://github.com/sabertazimi/OJs/commit/778350d9ce0966a0d0e1276d6609786739c96e1a))


### :sparkles: Array

* **leetcode-0001:** two sum problem ([f33025a](https://github.com/sabertazimi/OJs/commit/f33025ab5998c8eb5384f09b982da8a5d63e3f01))
* **leetcode-0006:** string simulation zigzag conversion ([dc4e793](https://github.com/sabertazimi/OJs/commit/dc4e79336b10d31855a67b2d1351c605c91f843d))


### :sparkles: Math

* **leetcode-0007:** reverse integer problem ([64f7078](https://github.com/sabertazimi/OJs/commit/64f707888ddba45352b063217573c19893e2e83d))
* **leetcode-0008:** string to integer (atoi) ([82ab89f](https://github.com/sabertazimi/OJs/commit/82ab89fa1fd9b3ff3dd246dd19107cc089df106f))


### :sparkles: String

* **leetcode-0003:** longest substring without repeating characters ([69c842c](https://github.com/sabertazimi/OJs/commit/69c842cf07a51adc98d0dd7d4744cd44d8ceabdd))
* **leetcode-0005:** longest palindrome substring ([bcab436](https://github.com/sabertazimi/OJs/commit/bcab436be34c8739bf15ae7e4e419d5036b834f1))
* **leetcode-0009:** palindrome number ([8f4c2bb](https://github.com/sabertazimi/OJs/commit/8f4c2bb4bab5f0958ffbcc818c91415cd08e415a))
* **leetcode-0012:** integer to roman ([f0afe0c](https://github.com/sabertazimi/OJs/commit/f0afe0c392c95d32f82ab26647a9582ce2ec7b7c))
* **leetcode-0013:** roman to integer ([adcfc70](https://github.com/sabertazimi/OJs/commit/adcfc703d5ff7574c553caadc4ff86c8bcbd26f3))
* **leetcode-0014:** longest common prefix ([92f1458](https://github.com/sabertazimi/OJs/commit/92f1458533462bd581c8f62a508c6f95f2932e6a))


### :bug: Bug Fixes

* **archive:** remove archive OJ solutions ([2db84bd](https://github.com/sabertazimi/OJs/commit/2db84bdfc48c95844f5ec088217d4c800c559ddf))
* **leetcode-cpp:** remove cpp test suites ([e2b218a](https://github.com/sabertazimi/OJs/commit/e2b218a1502f2d1825a48adf9a9965396780fa59))
* **leetcode-limits:** add number litmits utililty ([f78ee35](https://github.com/sabertazimi/OJs/commit/f78ee35a886c7055ebe312b331d7c41829dbfe2d))
* **leetcode-test:** reorder expect statements ([d52674f](https://github.com/sabertazimi/OJs/commit/d52674f9868ae4fbc4ccd5793a93d2368b72756b))
* **leetcode:** add `level` anotation ([7f05413](https://github.com/sabertazimi/OJs/commit/7f05413a4284f7dc0bd9eaf5a28b16406ce530d5))
* **leetcode:** change to strict equal ([fe16c11](https://github.com/sabertazimi/OJs/commit/fe16c119756c87a134b4e04f3c56e4db858abb25))


### :rocket: Building Work

* **dependabot:** add dependabot support ([87aa480](https://github.com/sabertazimi/OJs/commit/87aa4806c33d0734ed926823da51f63be62cbefb))


### :wrench: Testing

* **Jest-mocks:** mock console function at `CI` mode ([8f290df](https://github.com/sabertazimi/OJs/commit/8f290dff381809b908098b1a2a748a3d8f2c6ed7))

## :tada: 1.0.0 (2021-08-21)


### :sparkles: Features

* **oj-codewars:** start haskell puzzle in codewarsoj ([a12c879](https://github.com/sabertazimi/OJs/commit/a12c8792bdc620bfef79bca82b04c354af6501ad)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **TypeScript:** add TypeScript solution support ([02b328a](https://github.com/sabertazimi/OJs/commit/02b328a3c8dce1f81614847de627e2511fc2cdf8))


### :rocket: Building Work

* **CI:** setup full CI steps ([a7756de](https://github.com/sabertazimi/OJs/commit/a7756de564519b99574b82c20e8f2029dcbae227))
* **commit:** add more types of commit ([f43b6d0](https://github.com/sabertazimi/OJs/commit/f43b6d08cd492f120549031ef4d56703e414c02e))


### :wrench: Testing

* **oj-hust-lab:** add input tests for lab 1 ([09cb2b4](https://github.com/sabertazimi/OJs/commit/09cb2b4bbda027aa5417488e8c4838170e2ab568)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)


### :sparkles: Dynamic Programming

* **leetcode-300:** longest increasing subsequence ([3448e06](https://github.com/sabertazimi/OJs/commit/3448e0644ad9aeaf510da435d04c34f0973565df))


### :sparkles: Solutions

* **basic-bfs:** bfs puzzle ([5d57684](https://github.com/sabertazimi/OJs/commit/5d576844200c5cecd11b45b2aadb7f206aaa91f2))
* **ccfoj-201312:** complete No.1 - No.3 (water probloem) ([353a9f8](https://github.com/sabertazimi/OJs/commit/353a9f83ee6378295c10f8130a747de56e2cecb7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140301:** inverse number - map/hashmap ([3b9f752](https://github.com/sabertazimi/OJs/commit/3b9f752d9f81fd1c26182d56a790dbda37081110)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140302:** windows click - matrix and brute-force ([55c1f43](https://github.com/sabertazimi/OJs/commit/55c1f43314cf5c2c0805e7555772d79e0c510a07)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140303:** cli puzzle - string match algorithm ([223f152](https://github.com/sabertazimi/OJs/commit/223f15208a7f138830919a176fafc90b207dce31)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140304:** router puzzle - floyd algorithm(minimal distance) ([947547c](https://github.com/sabertazimi/OJs/commit/947547c8de4b3b38b2e4162cf8cfa32869d24274)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140305:** try to solve cpu scheduling puzzle ([ce5bfc1](https://github.com/sabertazimi/OJs/commit/ce5bfc1c918d26f340800e01803cc4f32ad98b51)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140901:** sort puzzle - sort algorithm ([74ec4fc](https://github.com/sabertazimi/OJs/commit/74ec4fc7f7dcc258729fe1cbc814d14e01b3dc7c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140902:** painting puzzle - matrix brute-force algorithm ([b014c4d](https://github.com/sabertazimi/OJs/commit/b014c4da03bc5f549b848c0dd115b30eaf9d3570)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140903:** string matching puzzle - kmp algorithm ([1a8bd32](https://github.com/sabertazimi/OJs/commit/1a8bd323020ca256fbce7e28d202a1712a12d9c2)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140904:** takeout puzzle - bfs(shortest path) algorithm ([e1e37ac](https://github.com/sabertazimi/OJs/commit/e1e37acee08bb5f42413fb9322648794a45e8839)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140905:** jigsaw puzzle - dynamic programming algorithm ([b4ba9b8](https://github.com/sabertazimi/OJs/commit/b4ba9b8954a4f94938e7acae74c342891c368bf7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj:** create empty commit ([fcb041b](https://github.com/sabertazimi/OJs/commit/fcb041b6586cd625f18729df2da83417d1b045d0)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **hroj-bash:** complete compute the average challenge ([7a252f7](https://github.com/sabertazimi/OJs/commit/7a252f7cad49f701781546754885eeab13ede839)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **hroj-bash:** complete recursive tree print challenge ([ef0159e](https://github.com/sabertazimi/OJs/commit/ef0159ef657f46b4d2c54a912044cd24bf041cc9)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **jobdu:** review c algo tips ([5ff3deb](https://github.com/sabertazimi/OJs/commit/5ff3debfc92e7f0ec8f89172f3d55d2b6251d94f)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **leetCode-108:** List to BST - BST/List/Tree/Recursive ([2c413a3](https://github.com/sabertazimi/OJs/commit/2c413a333d05b06ace999ae1e02456d3b56d8654))
* **leetCode-109:** List to BST - BST/List/Tree/Recursion ([79335e2](https://github.com/sabertazimi/OJs/commit/79335e2c9a9f4e6a73a5e0ed315dc0d462f241e6))
* **leetCode-119:** Pascal Triangle - Simulation/Math ([30028a9](https://github.com/sabertazimi/OJs/commit/30028a998cff95deae40622d191df34a77ae8eb3))
* **leetCode-121:** Stocks - Simulation ([2772907](https://github.com/sabertazimi/OJs/commit/2772907ef649a168d7209ff54ce27d18a6cd2382))
* **leetCode-122:** Stock 2 - Max/Min/Simulation ([5ce097b](https://github.com/sabertazimi/OJs/commit/5ce097b869fc3f42a1258a24171410cb117a73ca))
* **leetcode-14:** Longest Common Prefix - Brute Force ([d404494](https://github.com/sabertazimi/OJs/commit/d4044942e053a426774c8154da5289cdaea8fd44))
* **leetcode-169:** Majority Element - Hash/Trick ([84d666b](https://github.com/sabertazimi/OJs/commit/84d666b8e364fe5bfda637f59d2f4ff78e279094))
* **leetcode-171:** Excel Sheet Column Number - Math ([b2c07c5](https://github.com/sabertazimi/OJs/commit/b2c07c5e730ffd3b912d09da327f4882672a0124))
* **leetcode-172:** Factorial Trailing Zeroes - Math ([fb80e74](https://github.com/sabertazimi/OJs/commit/fb80e74005f72793cb5cd59d79cccb3c3ef4f516))
* **leetcode-189:** Rotate Array - Array ([9e45181](https://github.com/sabertazimi/OJs/commit/9e4518123ca3d68f3b8c9dc8e3701479149f88f6))
* **leetcode-190:** Reverse Bits - Bits Manipulation ([6e58673](https://github.com/sabertazimi/OJs/commit/6e5867327328f8811079acd44a4283e7a7affc60))
* **leetcode-198:** House Robber - DP ([45aed66](https://github.com/sabertazimi/OJs/commit/45aed663e4f497c90a4a99860631b87a8e6be47c))
* **leetcode-202:** Happy Number - Math/Two Pointer ([84b4f02](https://github.com/sabertazimi/OJs/commit/84b4f029709df4e2d7c4d36eb420a3d41e09e9cf))
* **leetcode-203:** Remove Linked List Elements - Linked List ([9a8ea8e](https://github.com/sabertazimi/OJs/commit/9a8ea8e1c553b1319960bcdcc6e038671a853f72))
* **leetcode-204:** Count Primes - Math ([b3eef32](https://github.com/sabertazimi/OJs/commit/b3eef32369e33495b86b0e531d541ec50583bb6b))
* **leetcode-205:** Isomorphic Strings - String/Map ([81c1795](https://github.com/sabertazimi/OJs/commit/81c1795af7a5ec8bd250f9dd7ff21777c7ddcbc0))
* **leetcode-206:** Reverse Linked List - Linked List ([d77c5a0](https://github.com/sabertazimi/OJs/commit/d77c5a0342ddc7b536e46d960b8a0c8ccc4cab3f))
* **leetcode-20:** Valid Parentheses - Stack ([efe7b19](https://github.com/sabertazimi/OJs/commit/efe7b193ae95b8653a82d7d0bda6e53c52e11cd5))
* **leetcode-217:** Contains Duplicate - Array ([0d637ee](https://github.com/sabertazimi/OJs/commit/0d637ee415eb5e20c5aadb9e270864bb31558ff6))
* **leetcode-219:** Contains Duplicate 2 - Array/Set ([ba2ac0a](https://github.com/sabertazimi/OJs/commit/ba2ac0ae587e76ae19bc180cd383e3595494f080))
* **leetcode-21:** Merge Two Sorted Lists - Merge/List ([8a9b1a0](https://github.com/sabertazimi/OJs/commit/8a9b1a0dbd9587578119a1ad16d6af0b3684b104))
* **leetcode-225:** Implement Stack Using Queues - Stack/Queue ([4859133](https://github.com/sabertazimi/OJs/commit/4859133dfc80281eadf3c146f72fe0eb3465fdb7))
* **leetcode-232:** Implement Queue Using Stacks - Stack/Queue ([a6ba675](https://github.com/sabertazimi/OJs/commit/a6ba6755ebf14af4ca15d4ec4615c03e561383b5))
* **leetcode-234:** Palindrome Linked List - Linked List/Two Pointer ([5ed3a1d](https://github.com/sabertazimi/OJs/commit/5ed3a1dd6c46403c94650401191421fa02443082))
* **leetcode-235:** Lowest Common Ancestor of a BST - BST/Recursion ([87c83db](https://github.com/sabertazimi/OJs/commit/87c83db2c88390d4b3a69329ef3b2d2e7439181a))
* **leetcode-237:** Delete Node in A Linked List - Linked List ([58d182c](https://github.com/sabertazimi/OJs/commit/58d182c989d525a74146f6d37b7c8dd894046e14))
* **leetcode-242:** Valid Anagram - String ([f3a184a](https://github.com/sabertazimi/OJs/commit/f3a184a45beb306cdc82642e616fc14845f79c19))
* **leetcode-257:** Binary Tree Paths - Tree/Recursion ([031bbbc](https://github.com/sabertazimi/OJs/commit/031bbbc0bba647b23fbbf3d0daca0b5e0894fc51))
* **leetcode-258:** Add Digits - Math ([563733c](https://github.com/sabertazimi/OJs/commit/563733c20c72fc29c8a85b76ba7410823c6b9dca))
* **leetcode-263:** Ugly Number - Math ([844b1b0](https://github.com/sabertazimi/OJs/commit/844b1b083f6104e77f5b91c9b965e7c8c593c7b5))
* **leetcode-267:** Valid Perfect Square - Math ([e154974](https://github.com/sabertazimi/OJs/commit/e1549743427d739d978f9ef25b60e770e8942dbd))
* **leetcode-278:** First Bad Version - Binary Search ([71aa6b2](https://github.com/sabertazimi/OJs/commit/71aa6b2217c41c8bb697cd0a3da2dea495612e1f))
* **leetcode-283:** Move Zeroes - Array ([927db5b](https://github.com/sabertazimi/OJs/commit/927db5b656ea0b649e214fa5f0260d2a860eeb57))
* **leetcode-28:** Implement strStr - String Manipulation ([e35da6a](https://github.com/sabertazimi/OJs/commit/e35da6a9000c2163d0de2641488c437b5fa8d246))
* **leetcode-290:** Word Pattern - String/Hash/Map ([02c9d3c](https://github.com/sabertazimi/OJs/commit/02c9d3c3c5b44b63372d344fb17380a270378cc4))
* **leetcode-345:** Reverse Vowels of String - String ([7887e08](https://github.com/sabertazimi/OJs/commit/7887e081bf6632322c7b1921efbe18674f7132b1))
* **leetcode-349:** Intersection of Two Arrays - Set ([ea6f93a](https://github.com/sabertazimi/OJs/commit/ea6f93ac87d9c994c7769f1397134865fe629325))
* **leetcode-350:** Intersection of Two Arrays - Set/Hash ([6a26f25](https://github.com/sabertazimi/OJs/commit/6a26f2595a52e3093abf828bf345527875831459))
* **leetcode-371:** Sum of Two Integers - Math/Bit Manipulation ([6b12a60](https://github.com/sabertazimi/OJs/commit/6b12a6069e03868742c9dd8d1c4c7495e12d1551))
* **leetcode-374:** Guess Number Higher or Lower ([1f108cb](https://github.com/sabertazimi/OJs/commit/1f108cb1b45a6df0dfc10e2a9107565e9cf6ecec))
* **leetcode-383:** Ransom Note - Map/Hash ([fd2b1cb](https://github.com/sabertazimi/OJs/commit/fd2b1cb03c5d510266263b1f1cef31795fd1739f))
* **leetcode-387:** First Unique Character in a String - Map/Hash ([5c1b923](https://github.com/sabertazimi/OJs/commit/5c1b923f7750283048db64d9de453d945ddcb832))
* **leetcode-389:** Find the Difference - XOR/Map/Hash ([3af0576](https://github.com/sabertazimi/OJs/commit/3af057696cfcc9e03dbbdb5220a2c1c5c6f96346))
* **leetcode-38:** Count and Say - String ([ca3a8d0](https://github.com/sabertazimi/OJs/commit/ca3a8d00c2eb114c68c6aaea944169eea703ab9f))
* **leetcode-400:** Nth Digit - Math ([aef6237](https://github.com/sabertazimi/OJs/commit/aef6237819da6133fcbae503378bc5c61cc56c61))
* **leetcode-401:** Binary Watch - Bit/Math ([bd5ce25](https://github.com/sabertazimi/OJs/commit/bd5ce250a3ba445831c39aa4246d5e8c005f206f))
* **leetcode-404:** Sum of Left Leaves - Tree/Recursion ([39c273c](https://github.com/sabertazimi/OJs/commit/39c273c0ab6e8d4c25853e58fdd5e80a6f2f31af))
* **leetcode-405:** Convert a Number to Hexadecimal - Math/Bit ([b4a714d](https://github.com/sabertazimi/OJs/commit/b4a714d0a3a795e97a2e49055c50e2ae9129040a))
* **leetcode-409:** Longest Palindrome - Map/Count/String ([6ab71d9](https://github.com/sabertazimi/OJs/commit/6ab71d98ae06386d8e5d8e4151121455f0ea43e7))
* **leetcode-412:** Fizz Buzz - String/Math ([172912e](https://github.com/sabertazimi/OJs/commit/172912ef8b3312758f5bd39bc417a02396bf5ebb))
* **leetcode-414:** Third Maximum Number - Math/Set ([9f4794a](https://github.com/sabertazimi/OJs/commit/9f4794a3eb2be8699ebce0d8b9d120ea2ca6abb7))
* **leetcode-415:** Add Strings -String/Big Integer ([311a189](https://github.com/sabertazimi/OJs/commit/311a1891d838a6f98b1b890d98790f60b3f275bf))
* **leetcode-434:** Number of Segments in a String - String ([76f6c06](https://github.com/sabertazimi/OJs/commit/76f6c065578cf864901869b281ce1f1bad97a081))
* **leetcode-438:** Find all Anagrams in a String - String/Slide Window ([3660f62](https://github.com/sabertazimi/OJs/commit/3660f6244fb1b56576f191245e152da01d9fdadf))
* **leetcode-441:** Arranging Coins - Math ([96d04c9](https://github.com/sabertazimi/OJs/commit/96d04c9fe1f3a186ae7e0350ad5e69f2aaac2008))
* **leetcode-447:** Number of Boomerangs - Math ([cf7f7d7](https://github.com/sabertazimi/OJs/commit/cf7f7d78316384aec1527c50bbfbb4418504edc7))
* **leetcode-453:** Minimum Moves to Equal Array Elements - Math ([c4ed242](https://github.com/sabertazimi/OJs/commit/c4ed2422032a8d36058a7923db6c26107f8788a3))
* **leetcode-455:** Assign Cookies - Array/Greedy ([c628e25](https://github.com/sabertazimi/OJs/commit/c628e252d818e9fa89e52dc5b34ee7d330a9db8a))
* **leetcode-459:** Repeated Substring Pattern - String/KMP ([67feddc](https://github.com/sabertazimi/OJs/commit/67feddc077a1c81015803152aa579006bab4d80c))
* **leetcode-461:** Hamming Distance - Math/Bit ([044abfd](https://github.com/sabertazimi/OJs/commit/044abfd46aa73b517fed3a7939cacdf88936fe65))
* **leetcode-463:** Island Perimeter - Map/DFS/BFS ([6c878de](https://github.com/sabertazimi/OJs/commit/6c878de68494c0b620ea799161b72a5fdfb77821))
* **leetcode-475:** Heaters - Array ([300b267](https://github.com/sabertazimi/OJs/commit/300b2674b9eb4632fe8212e6c620adf78ba28029))
* **leetcode-476:** Number Complement - Bit ([3e9837c](https://github.com/sabertazimi/OJs/commit/3e9837c4adbc4bfc36a0ed0737b5c5102bce1452))
* **leetcode-485:** Max Consecutive Ones - Array ([6b373ea](https://github.com/sabertazimi/OJs/commit/6b373eac7a22fcceba93534d367d4395dc70bc71))
* **leetcode-488:** Find All Numbers Disappeared - Array/Hash Map ([dedaa1c](https://github.com/sabertazimi/OJs/commit/dedaa1ce5d6f38651c1b7c5038362129981a0fe0))
* **leetcode-492:** Construct the Rectangle - Math ([3cfdb83](https://github.com/sabertazimi/OJs/commit/3cfdb839676b4957f190a73b0543cec6f2e4b242))
* **leetcode-496:** HashMap/Stack/Array ([bacdfa1](https://github.com/sabertazimi/OJs/commit/bacdfa15fb8b1f88234be5dbcb7ded4fb0a47588))
* **leetcode-500:** Keyboard Row - Set ([7dfcc85](https://github.com/sabertazimi/OJs/commit/7dfcc85c9f3464c0b0b8f698bb60f72665469475))
* **leetcode-53:** Maximum Subarray - Array/DP ([ded79b9](https://github.com/sabertazimi/OJs/commit/ded79b9d69ea7def4133969576d92412c52e8125))
* **leetcode-58:** Length of Last Word - String ([be9014d](https://github.com/sabertazimi/OJs/commit/be9014d3125e7df7c3321bc39adf7f31091cc8e1))
* **leetcode-67:** Add Binary - Binary/String ([abff42c](https://github.com/sabertazimi/OJs/commit/abff42c7a535bdffbc567fe112b4a90c5dd579d5))
* **leetcode-70:** Climbing Stairs - DP ([7d4fe63](https://github.com/sabertazimi/OJs/commit/7d4fe63baac93aa1ecc01ff8896fce220dbb440f))
* **leetcode-7:** Reverse Integer - Math ([630c3f1](https://github.com/sabertazimi/OJs/commit/630c3f12144b4327b3effade672e5d0f3075826e))
* **leetCode-83:** Remove Duplicates from Sorted List - List ([9e48008](https://github.com/sabertazimi/OJs/commit/9e4800814f9423addebc76e07cd5e6fccdc378ba))
* **list:** review list operation ([d622abc](https://github.com/sabertazimi/OJs/commit/d622abc3e12c89b264c1fb247232b43eac206498)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-2104:** K nth number - segment tree/range query ([57ca81d](https://github.com/sabertazimi/OJs/commit/57ca81d15bca26a41ef6fbc2f65f8f74e677a744)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-2785:** 4 Sum - brute force/divide and conquer ([8f44ec7](https://github.com/sabertazimi/OJs/commit/8f44ec75488909473707dd232a55ac3036109aaa)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-3279:** Filptile - dp/state compression ([9255976](https://github.com/sabertazimi/OJs/commit/925597644763874e9d5fff85a7f70f9ade7875d3)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-basic-priority_queue:** learn basic usage of priority_queue ([e3871fe](https://github.com/sabertazimi/OJs/commit/e3871fe3e2802d732a4de3fd1419ecdb5b738f78)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-ccf-201604/201609:** copy code ([6cb8548](https://github.com/sabertazimi/OJs/commit/6cb85485545eb4f432fd959fd1c1748b9e860488)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-ds-segment tree/bit:** impl segment tree/bit ([b3a0175](https://github.com/sabertazimi/OJs/commit/b3a0175536bd5d0e83a0caf079b38fefaba1b9a3)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust lab:** try to implement dijkstra algorithm ([6d87d43](https://github.com/sabertazimi/OJs/commit/6d87d434869b4bed10c51aa3afa092364b892d7a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-dijkstra:** implement floyd algorithm ([aaef568](https://github.com/sabertazimi/OJs/commit/aaef568662e58200125045e77457819b3b460bfe)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-report:** start to work on report draft ([4082937](https://github.com/sabertazimi/OJs/commit/4082937f323b1540c0f84a0a92eac46a9a683caa)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-interview-wanmei:** pass wanmei interview ([beb7328](https://github.com/sabertazimi/OJs/commit/beb73281561f3dc5388167cb606d142d85fd3cd6)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-100:** Same Tree - Tree/DFS ([9b1ecc6](https://github.com/sabertazimi/OJs/commit/9b1ecc66657180120b1e39140874c3d76d58c3c3)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-101:** Symmetric Tree - Tree/DFS ([ed07f43](https://github.com/sabertazimi/OJs/commit/ed07f4370f7462ef365089d11ccd9ea0dca39117)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-102:** Level Order Traversal - Tree/BFS ([e359319](https://github.com/sabertazimi/OJs/commit/e35931920ce86ddbbc9583dd561a865b103eef40)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-103:** Zigzag Level Order - Tree/BFS ([f4aa228](https://github.com/sabertazimi/OJs/commit/f4aa2281f1e1800e2ac7889b1d6d22fd46f3a91d)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-104/111:** Depth of Binary Tree - Tree/DFS/BFS ([1d4224c](https://github.com/sabertazimi/OJs/commit/1d4224c3a451a37e4a0fe7b425a3b3629f362636)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-105/106:** Construct Binary Tree - Tree/Recursion/DFS ([db92cee](https://github.com/sabertazimi/OJs/commit/db92cee5a1251aa01a9f616bd3900e9fb2ce1489)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-107:** Level Order Traversal - Tree/BFS ([f40060a](https://github.com/sabertazimi/OJs/commit/f40060a1febd940c397870bc615a8241c7830607)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-110:** Balanced Binary Tree - Tree/DFS ([e43b4ff](https://github.com/sabertazimi/OJs/commit/e43b4ff549e6db0c5c77822b8dd0368cdde02ece)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-112:** Path Sum - Tree/DFS ([c70c002](https://github.com/sabertazimi/OJs/commit/c70c0023044d7e0abed604debb3ca002e089874b)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-113:** Path Sum 2 - Tree/DFS ([44d015e](https://github.com/sabertazimi/OJs/commit/44d015e25a910fc4be389c48a41cecb6719e264c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-118:** Pascal Triangle - simulation/print ([b34d109](https://github.com/sabertazimi/OJs/commit/b34d109764ed0ee9c5c783f0f0ff3af2155d18a7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-125:** Valid Palindrome - String ([a0892e9](https://github.com/sabertazimi/OJs/commit/a0892e9c8499ed354d02b4882a7f59aa43214a6a))
* **oj-leetcode-136:** Single Number - Bit ([a8928f6](https://github.com/sabertazimi/OJs/commit/a8928f6bc3196e7a87da11527ca56d10b2da6381))
* **oj-leetcode-13:** Roman to Integer - Math ([6696d28](https://github.com/sabertazimi/OJs/commit/6696d28d2d69fe5ac8fd41f8533c1a1f15c35c41))
* **oj-leetcode-141:** Linked List Cycle - List/Two Pointer ([0b78c81](https://github.com/sabertazimi/OJs/commit/0b78c815e2d37a45a9be61960da5927eade54421))
* **oj-leetcode-15:** 3 sum - two pointers ([65a31e3](https://github.com/sabertazimi/OJs/commit/65a31e3ddbf8c538dd75b430e495e4d6fd8b98cf)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-153/154:** Find Min in Rotated Sorted Arr - binary search ([b83d195](https://github.com/sabertazimi/OJs/commit/b83d195489ca7db4cf863e9333e7be70b0c88486)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-155:** Min Stack - Stack ([5b3c9c0](https://github.com/sabertazimi/OJs/commit/5b3c9c09b8602feacd597e0d80c683d148a25c1a))
* **oj-leetcode-160:** Intersection of Two Linked Lists - Two Pointer ([1afe960](https://github.com/sabertazimi/OJs/commit/1afe96050652bb67bd949c044acfa3f37bc8c4b1))
* **oj-leetcode-162:** Find Peak Element - Binary Search ([47fea44](https://github.com/sabertazimi/OJs/commit/47fea44de61b096fcfca5b9c71ad2e672e9b74f9)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-16:** 3 Sum Closest - two pointers ([29263a7](https://github.com/sabertazimi/OJs/commit/29263a7a2698a494095bae42ea1d774dab02ecf0)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-167:** Two Sum II - Array/Two Pointer ([71c5ad1](https://github.com/sabertazimi/OJs/commit/71c5ad1536cfc61e3b059b6cf56f6ed1749255da))
* **oj-leetcode-168:** Excel Sheet Column - Math ([0673637](https://github.com/sabertazimi/OJs/commit/06736374b70d014726b5723a0e190bcb4eb0fcc0))
* **oj-leetcode-18:** 4 Sum - two pointers/brute-force ([8c9a222](https://github.com/sabertazimi/OJs/commit/8c9a2227e53fa1f18b04fe7329d8f573b3634352)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-191:** Number of 1 Bits - Bit Manipulation ([1f6ca72](https://github.com/sabertazimi/OJs/commit/1f6ca72acfe3cdee152578df5ffc7bcccf5136b7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-1:** Two Sum - map ([51f32bd](https://github.com/sabertazimi/OJs/commit/51f32bd206d3d63eb928a48475a754980f0f1485)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-226:** Invert Binary Tree - Tree/Recursion ([beb7a91](https://github.com/sabertazimi/OJs/commit/beb7a91606c2d45fa9d703aef88bb478ecd38fdf)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-231:** Power of Two - Bit Manipulation ([b0fbbc0](https://github.com/sabertazimi/OJs/commit/b0fbbc062851239fe494dbad2b1c86acb5465131)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-268:** Missing Number - Bit Manipulation ([84a7b57](https://github.com/sabertazimi/OJs/commit/84a7b57ae0f6fe492214c1cee158313ced81cc0a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-26:** Remove dup from soretd array - 2 pointers ([c4897fa](https://github.com/sabertazimi/OJs/commit/c4897facfb29a0fffe40be15ebdb6f7fbf1d574a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-27:** Remove Element - two pointers ([3231c97](https://github.com/sabertazimi/OJs/commit/3231c97cc8e2698d788f7b55186e266b6eefa193)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-297:** (De)Serialize Binary Tree - Tree/DFS/Recursion ([46c5f7b](https://github.com/sabertazimi/OJs/commit/46c5f7bf5cc53155081b1616efdb0670f2cec40d)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-303:** range sum query - bit/segment tree ([e65e4a4](https://github.com/sabertazimi/OJs/commit/e65e4a4bd68fa64e8ead4372f1b9744843714214)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-326:** Power of Three - Bit/Math ([233291b](https://github.com/sabertazimi/OJs/commit/233291bdde65fd18d343d51b3884f889f60fa4ce)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-342:** Power of Four - Bit/Math ([f4b3618](https://github.com/sabertazimi/OJs/commit/f4b3618753dad9339dfc261ecad9a838fb9777e4)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-344:** Reverse String - String ([6bbfdc5](https://github.com/sabertazimi/OJs/commit/6bbfdc5a3ae3aff85465efbc5558135ff99c821e)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-34:** Search for a Range - Binary Search ([ba1acce](https://github.com/sabertazimi/OJs/commit/ba1acce731341a8837b5f49ef990601621fc34bb)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-35:** Search Insert Position - Binary Search ([d48f92a](https://github.com/sabertazimi/OJs/commit/d48f92a2265f4212e5afce6028085aa7ad04e5bb)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-437:** Path Sum 3 - Tree/DFS ([924b644](https://github.com/sabertazimi/OJs/commit/924b644aef31eda1d58bce5e4255b010895d700a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-521:** Longest Uncommon Subsequence - recursion ([75bf682](https://github.com/sabertazimi/OJs/commit/75bf6826ce2c6805f15d578192157e98e7226ad1)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-522:** Longest Uncommon Subsequence 2 - recursion ([339f3fd](https://github.com/sabertazimi/OJs/commit/339f3fd7f0e3533382b8c796b637a2ce45b9864f)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-541:** Reverse String 2 - String ([9403d98](https://github.com/sabertazimi/OJs/commit/9403d98b537afdd94bc1302ec44177220a8bbdd6)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-547:** Friend Circles - DFS/Union Find ([163151f](https://github.com/sabertazimi/OJs/commit/163151fed1b1bc9a7a7fed5d51c01dbb787c9a4c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-549:** Tree Longest Consecutive Sequence - Tree/DFS ([18ebfda](https://github.com/sabertazimi/OJs/commit/18ebfdac6521cf98b2f6ec686cd10067ab42ee3f)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-554:** Brick Wall - Hasp Map/Discretization ([a6fad61](https://github.com/sabertazimi/OJs/commit/a6fad6126f24d7d766cd5adf08dd29a4824ac663)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-556:** Next Greater Element - Math/String ([4a90a31](https://github.com/sabertazimi/OJs/commit/4a90a31412c72cae4cb9aa792c49fc8c6bd5700c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-557:** Reverse Words - String/Two Pointers ([5f73e64](https://github.com/sabertazimi/OJs/commit/5f73e64838dbb207810421db5caf4b0e62d2a3b7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-66:** Plus One - carry/simulation ([48ca247](https://github.com/sabertazimi/OJs/commit/48ca247d885b143a44d8fd673cd29b95b339a89e)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-74:** Search A 2D Matrix - Matrix/Binary Search ([71571bb](https://github.com/sabertazimi/OJs/commit/71571bb490a0413fe844abc4b0c0d2cb5d64ca3d)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-84:** Largest Rectangle in Histogram - stack ([37396cc](https://github.com/sabertazimi/OJs/commit/37396cc8af797b2d7c7d58d10ea22ba465408748)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-85:** Maximal Rectangle - DP/Stack ([4a880bc](https://github.com/sabertazimi/OJs/commit/4a880bc9d6c66fe4dc1ec74366f849a42195f4d2)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-88:** Merge Sorted Array - merge sort ([f7abb71](https://github.com/sabertazimi/OJs/commit/f7abb711c4c4cb82ee9092be98271781d620cb4c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-94/144/145:** Binary Tree Traversal - Tree/DFS/Recursion ([eb4b3a1](https://github.com/sabertazimi/OJs/commit/eb4b3a153bfaca4b1d2d9337638590dd3875adf4)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-9:** Palindrome Number - Math/String ([b944f0d](https://github.com/sabertazimi/OJs/commit/b944f0dccc4abe4046e5365544b77ad92a785dc8)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-contest 27:** all wrong answers ([11c6e49](https://github.com/sabertazimi/OJs/commit/11c6e493302423d4a932d74f3b92ece5bbc7b947)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode:** start to complete leetcode puzzle ([8f84138](https://github.com/sabertazimi/OJs/commit/8f84138d618da6a6c7a31e5fdd52f028efbda401)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-newcoder-exam:** complete exam on newcoder ([5939518](https://github.com/sabertazimi/OJs/commit/5939518520d829b11412f2b1ceb40df36410eb71)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-nowcoder-huawei:** add huawei testing solutions ([3df6341](https://github.com/sabertazimi/OJs/commit/3df6341269bdec132a0a674cc45af3c1ba3501e0)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-nowcoder-netease:** complete netease intern testing ([7e6fdef](https://github.com/sabertazimi/OJs/commit/7e6fdefa611d050aa6a2e6a326d7066086f41ec7)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-1064:** Cable master - binary search/brute-force/max-min ([094ad10](https://github.com/sabertazimi/OJs/commit/094ad10673c5464352802ba47da65836a93e4be6)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-1182:** Food chain - union/disjoint sets ([b795f5b](https://github.com/sabertazimi/OJs/commit/b795f5b50d4bd52fec4b4d8be99af1da295fca07)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-1852:** Ants - puzzle ([8b986cb](https://github.com/sabertazimi/OJs/commit/8b986cb9235103cd4e0c6b41f56a55a0a8210550)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-2386:** Lake Counting - dfs and map ([3d4cac0](https://github.com/sabertazimi/OJs/commit/3d4cac06934cadf80f0e306b787fef26d8c1429a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-2431:** Expedition - greedy and priority queue ([77f1e71](https://github.com/sabertazimi/OJs/commit/77f1e71a703ea49ad63ddff828c4710e50006042)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-2456:** Aggressive cows - binary search/brute-force/greedy ([c8e52e8](https://github.com/sabertazimi/OJs/commit/c8e52e8c05814fba2d01e2df294c7c280622de8c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3169:** Layout - map/bellman-ford ([374b932](https://github.com/sabertazimi/OJs/commit/374b932101d182b383310d2bb0ae195ca102ad21)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3255:** Roadblocks - map/bfs/dijkstra ([8f0d162](https://github.com/sabertazimi/OJs/commit/8f0d162c83200ad08c9471a4b71da9e66f8fb1e1)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3320:** Reading problem - two pointers/range/brute-force ([c6a4087](https://github.com/sabertazimi/OJs/commit/c6a40878619fe9a8795b12f8c50c9da28b8f9d63)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3320:** Subsequeue - range/pointer ([8bc7c12](https://github.com/sabertazimi/OJs/commit/8bc7c1207d583df501fee79a342140251d66bb29)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3468:** a simple problem with integers - segment tree ([96cc687](https://github.com/sabertazimi/OJs/commit/96cc6871187dc7fa34c232285297c4208bd697b3)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3617:** Best Cow Line - Greedy ([af71bac](https://github.com/sabertazimi/OJs/commit/af71bac70ad032f735802c1797880a55fe5f296c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-3723:** Conscription - map/spamtree/kruskal/union ([92f9398](https://github.com/sabertazimi/OJs/commit/92f939887c1bf3e27986ea12de2a1908c3a39e7b)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-set:** learn more usage of set ([20399c1](https://github.com/sabertazimi/OJs/commit/20399c1240dba963b09ad3ff6f081062a8ee9268)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-poj-union:** impl union data structure ([e9e6b77](https://github.com/sabertazimi/OJs/commit/e9e6b77e035a4d81b9781fd10279be73c5c1d40c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-sudoku:** start to solve sudoku puzzle(brute-force) ([d4b748b](https://github.com/sabertazimi/OJs/commit/d4b748b56d52ed4c2fa168e26880d75d416747ef)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-1103:** Ancient Message - map and dfs ([6d90ca1](https://github.com/sabertazimi/OJs/commit/6d90ca1116caea8f0707aa4c069498696e1fbb7e)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-11988:** broken keyboard - link list ([b6f2085](https://github.com/sabertazimi/OJs/commit/b6f20853500346fe325fce06b0597d764534953d)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-12657:** Boxes in a Line - doubly linked list ([0690caa](https://github.com/sabertazimi/OJs/commit/0690caa007ac2c6e9dcfaefe9444f0d978b33902)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-442:** Matrix Chain Multiplication- expr stack ([7d8efec](https://github.com/sabertazimi/OJs/commit/7d8efec7b4fbafe30a84b3013dc46aff50de1254)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-514:** Rails - stack ([b7b15b0](https://github.com/sabertazimi/OJs/commit/b7b15b0382a752ea1274bac3ee805488bca43d80)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-548:** Tree - dfs and recursion ([a3bfb81](https://github.com/sabertazimi/OJs/commit/a3bfb81c6afba7976337475ff1b443eb8c47ae71)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-572:** Oil Deposits - connected graph and dfs ([4211678](https://github.com/sabertazimi/OJs/commit/42116780d6f745c4d30e1a0cec44771405882194)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-679:** dropping balls - tree traverse ([7c45a80](https://github.com/sabertazimi/OJs/commit/7c45a80a86d185635b5810be5a0a34fc97bb2726)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-699:** The Falling Leaves - tree and recursion ([41cfa27](https://github.com/sabertazimi/OJs/commit/41cfa27a0478bc3897599535532ab743ceb2afae)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-839:** not so mobile - recursion and tree ([77af4b0](https://github.com/sabertazimi/OJs/commit/77af4b0d1a0ad1c0fc3d974c1b2b6ec825c91b83)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ojs:** move all archive of oj code into this repo ([ee22100](https://github.com/sabertazimi/OJs/commit/ee221002545799afb4c5f5e72670df11874f8cb8)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)


### :hammer: Updates

* **basic-bfs:** bug fix ([85beed6](https://github.com/sabertazimi/OJs/commit/85beed65cbc31c665b6eea1df2f3cd7e2ee449cf))
* **basic-bfs:** print shortest path ([49f9b64](https://github.com/sabertazimi/OJs/commit/49f9b64b76017f5c18487fc1da29f6121e506bf0))
* **basic-bfs:** push final node into paths ([dbd979e](https://github.com/sabertazimi/OJs/commit/dbd979ead18be17a75c05557484b6d98aa16ccff))
* **ccfoj-stuck_maze:** ccf 20131205 - dfs algorithm ([406fd60](https://github.com/sabertazimi/OJs/commit/406fd60e96ffb55bf560cbff26b3787865efd8a1)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **hroj-bash:** polish code up ([2c7e591](https://github.com/sabertazimi/OJs/commit/2c7e5910337e1820df725d9f76de8cd24a9223c1)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **leetcode-169:** move file to right position ([cce1dce](https://github.com/sabertazimi/OJs/commit/cce1dce0ccad31eb16f3a89c4cc965384d7fdfd0))
* **oj-ccf-201503:** copy code from github ([f96f346](https://github.com/sabertazimi/OJs/commit/f96f34600e39aaceb26332c4bef85489fd0df40e)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-ccf-201509/201512:** copy code ([0ac2937](https://github.com/sabertazimi/OJs/commit/0ac2937f0834ce707070031f850b13e9bf112035)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-ccf-201604:** copy code ([3d2ac02](https://github.com/sabertazimi/OJs/commit/3d2ac02b54c419df0977e5f70bdac793d8ab251d)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-lab:** complete n-queens' problem ([aacbf66](https://github.com/sabertazimi/OJs/commit/aacbf66a2816237c42a4110933c3cbbec2695c28)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-lab:** print path for floyd ([ae370c1](https://github.com/sabertazimi/OJs/commit/ae370c1aac96bf7375eed608b2766c8718af582c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-report:** complete algorithm lab report ([c5e671b](https://github.com/sabertazimi/OJs/commit/c5e671b24619cd90a96d3f800285b08cd86e678e)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-report:** complete report for 5 algorithms ([904024d](https://github.com/sabertazimi/OJs/commit/904024d358ff09b7350cea49432f44200bcaf8d6)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-hust-report:** complete report for quicksort2 ([f247d88](https://github.com/sabertazimi/OJs/commit/f247d881030b88bcec12a4f5b41ff9dee8a41755)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-231:** Power of Two - Bit/Math ([98acb05](https://github.com/sabertazimi/OJs/commit/98acb0589dcc5d8283a1f325c6261790c914d163)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode-94/144/145:** Binary Tree Traversal - Tree/DFS ([cea870e](https://github.com/sabertazimi/OJs/commit/cea870eb7feba8e51d8acc910914f9babbed8c69)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-leetcode:** rename leet code solution ([d2187ff](https://github.com/sabertazimi/OJs/commit/d2187ff18731394aadd10b476804ad61b8367a87)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-readme:** polish readme up ([26f5f32](https://github.com/sabertazimi/OJs/commit/26f5f32e42943850aaf7e1c5857803e86902d4bf))
* **oj-string:** learn how to implement split function ([9fa4931](https://github.com/sabertazimi/OJs/commit/9fa49312c16d707a64cdb357c455db01ae359476)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-sudoku:** solved sudoku puzzle ([ccab67b](https://github.com/sabertazimi/OJs/commit/ccab67b05da4b79eec9d0375bb92c37a55f46e00)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-10391:** Compound Words - string substr find ([1a5c2f9](https://github.com/sabertazimi/OJs/commit/1a5c2f9450ac62ff83a1429656d68f3b274c7a3a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-10935:** Throwing cards away - queue ([e54821a](https://github.com/sabertazimi/OJs/commit/e54821ab9097e7fc3ddebaaaa833d12c20927f7c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-1592:** Database - string compare algorithm ([b210210](https://github.com/sabertazimi/OJs/commit/b210210f372b8bec67d6a45b9fce6d0b93d1c2bb)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-1594:** Ducci Sequence - map and sort ([e2ac360](https://github.com/sabertazimi/OJs/commit/e2ac360f54239e71f79f874c47ab91eebaff97df)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva-1595:** Symmetry - set (math) ([029b550](https://github.com/sabertazimi/OJs/commit/029b550901e48d5328cd16f09662d550fbd532e6)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uva:** change to uva oj ([552a9b0](https://github.com/sabertazimi/OJs/commit/552a9b030c8dd7de12a5235d6890715a506ec96c)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **oj-uvaoj-1593:** alignment of code - simple string stream usage ([b541369](https://github.com/sabertazimi/OJs/commit/b54136973c3ff3f0a2742c049fa4429597968b1a)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140902:** painting puzzle - matrix brute-force algorithm ([ac444c2](https://github.com/sabertazimi/OJs/commit/ac444c2b7db46507b059c6a316f17d21034215ce)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140904:** takeout puzzle - bfs algorithm ([0db625a](https://github.com/sabertazimi/OJs/commit/0db625aa9d86d3864ccb33d0b87b3aa457875286)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **ccfoj-20140904:** takeout puzzle - bfs(shortest path) algorithm ([4380f88](https://github.com/sabertazimi/OJs/commit/4380f88923c1b55aeed37cc6f6d781f89cb25586)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **gh-pages:** create empty gh pages ([7b0afc5](https://github.com/sabertazimi/OJs/commit/7b0afc5f7a2377fe94a79f5c391392be8a568c79))
* **hroj-select2:** fix error when input equal to zero ([d0819a5](https://github.com/sabertazimi/OJs/commit/d0819a5c660e366303f000992ff37e4964d08b36)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **leetCode-108:** rectify file type extension ([49d197d](https://github.com/sabertazimi/OJs/commit/49d197dcf461bbc1d35833a35cdd557979c8ab28))
* **leetCode-109:** rectify file type extension ([c59ff5c](https://github.com/sabertazimi/OJs/commit/c59ff5c2888065b3ed9728872aa595e257e57051))
* **leetcode-14:** add correct extension of file type ([6131fd4](https://github.com/sabertazimi/OJs/commit/6131fd49e52e40fd56cac593b1b211ffd80aaadc))
* **leetcode-232:** Implement Queue Using Stacks - Stack/Queue ([359b8f7](https://github.com/sabertazimi/OJs/commit/359b8f7473c860ebaf96f927c131fa57df5954b9))
* **leetCode-521:** add ID for file name ([88f8ce5](https://github.com/sabertazimi/OJs/commit/88f8ce59e243611a577dbf6d9008aaa5e87bd1de))
* **leetcode-53:** add correct extension of file type ([decfd98](https://github.com/sabertazimi/OJs/commit/decfd9820361ce68a7b2025bce8b848883785708))
* **oj-hust:** rectify -1 judgement error ([63d99d1](https://github.com/sabertazimi/OJs/commit/63d99d11b48aba2b50422078692b126fb2b77f67)), closes [sabertazimi/awesome-notes#88](https://github.com/sabertazimi/awesome-notes/issues/88)
* **tsconfig:** add `paths` for `ts-jest` ([7d556d4](https://github.com/sabertazimi/OJs/commit/7d556d4f8b68cd000f233897c825b189cd0a99ae))
