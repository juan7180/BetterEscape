#include <Geode/Geode.hpp>

#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

#ifdef GEODE_IS_DESKTOP
class $modify(BetterEscapePauseLayer, PauseLayer) {
	void keyDown(cocos2d::enumKeyCodes key, double timestamp) {
		if (key == cocos2d::enumKeyCodes::KEY_Escape) {
			this->onResume(nullptr);
			return;
		}

		if (key == cocos2d::enumKeyCodes::KEY_L) {
			this->onQuit(nullptr);
			return;
		}

		PauseLayer::keyDown(key, timestamp);
	}

	void keyBackClicked() {
		this->onResume(nullptr);
	}
};
#endif
