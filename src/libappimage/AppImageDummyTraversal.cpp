#include "AppImageDummyTraversal.h"

void AppImage::AppImageDummyTraversal::next() {

}

bool AppImage::AppImageDummyTraversal::isCompleted() {
    return true;
}

std::string AppImage::AppImageDummyTraversal::getEntryName() {
    return std::string();
}

void AppImage::AppImageDummyTraversal::extract(const std::string& target) {}
