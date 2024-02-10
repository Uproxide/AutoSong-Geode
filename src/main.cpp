#include <Geode/binding/LevelInfoLayer.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/Geode.hpp>
#include <chrono>
#include <thread>

using namespace geode::prelude;

class $modify(LevelInfoLayer) {
    bool init(GJGameLevel* p0, bool p1) {
        if (!LevelInfoLayer::init(p0, p1)) return false;

        if (this->m_songWidget->m_downloadBtn->isVisible()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            this->m_songWidget->onDownload(nullptr);
        } else {
            // no 
        }

        return true;
    }
};
