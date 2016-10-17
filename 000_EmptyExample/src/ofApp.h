#pragma once // 1度だけ読み込み

#include "ofMain.h" // openFrameworksのライブラリの読み込み

//--------------------------------------------------------------
// ofAppクラス: 開発するアプリケーションの中身
class ofApp : public ofBaseApp{
    
    // public : 外部からもアクセスが可能なプロパティ（=変数）やメソッド(=関数)を記述する
	public:
		void setup(); // セットアップ
		void update(); // アップデート
		void draw(); //描画
    
        /* イベント関係はofApp.cppの各関数の行頭に記述 */
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // private : 外部からアクセスできないプロパティやメソッドを記述する
    private:
};
