#pragma once
#include <memory>
#include <chrono>

#include "ofMain.h"
#include "ofEasyCam.h"
#include "FluidRenderer.hpp"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	float mViscosity = 0.05;
	float mDensity = 1.0f;

private:
	ofEasyCam mCamera;
	FluidRenderer mFluidRenderer;
	std::chrono::high_resolution_clock::time_point lastFrameTime;
};
