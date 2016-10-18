//
//  RandomWalker.hpp
//  OOPExample
//
//  Created by takawo on 2016/10/14.
//
//

#pragma once // 1度だけ読み込みするという命令

#ifndef RandomWalker_hpp
#define RandomWalker_hpp

// 外部ファイルの読み込み
#include "ofMain.h"
#include <stdio.h>

// クラスの定義
class RandomWalker {
public:
    RandomWalker(); // コンストラクタ（後述）
    void draw(); // 描画
    ofVec2f position; // 位置
}; // ← 最後に必ずセミコロン「;」を入れる

#endif /* RandomWalker_hpp */
