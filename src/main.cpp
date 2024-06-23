#include <Geode/Geode.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;

class $modify(LevelInfoLayer) {
	void levelDownloadFinished(GJGameLevel *level) {
		LevelInfoLayer::levelDownloadFinished(level);
		if (m_songWidget->m_downloadBtn->isVisible()) {
			m_songWidget->onDownload(nullptr);
		}
	}
};
