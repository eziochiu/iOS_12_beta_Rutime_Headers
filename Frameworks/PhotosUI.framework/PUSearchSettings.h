/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchSettings : PXSettings {
    bool  _autoExpandSingleSectionedResults;
    unsigned long long  _maxThumbnailsPerRow;
    bool  _preferFavoritesInTop8;
    bool  _showCategoriesSection;
    bool  _showEventsSection;
    bool  _showGroupsSection;
    bool  _showKeyboardForZeroKeywords;
    bool  _showOtherPhotosSection;
    bool  _showPeopleSection;
    bool  _showPlacesSection;
}

@property (nonatomic) bool autoExpandSingleSectionedResults;
@property (nonatomic) unsigned long long maxThumbnailsPerRow;
@property (nonatomic) bool preferFavoritesInTop8;
@property (nonatomic) bool showCategoriesSection;
@property (nonatomic) bool showEventsSection;
@property (nonatomic) bool showGroupsSection;
@property (nonatomic) bool showKeyboardForZeroKeywords;
@property (nonatomic) bool showOtherPhotosSection;
@property (nonatomic) bool showPeopleSection;
@property (nonatomic) bool showPlacesSection;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)autoExpandSingleSectionedResults;
- (unsigned long long)maxThumbnailsPerRow;
- (id)parentSettings;
- (bool)preferFavoritesInTop8;
- (void)setAutoExpandSingleSectionedResults:(bool)arg1;
- (void)setDefaultValues;
- (void)setMaxThumbnailsPerRow:(unsigned long long)arg1;
- (void)setPreferFavoritesInTop8:(bool)arg1;
- (void)setShowCategoriesSection:(bool)arg1;
- (void)setShowEventsSection:(bool)arg1;
- (void)setShowGroupsSection:(bool)arg1;
- (void)setShowKeyboardForZeroKeywords:(bool)arg1;
- (void)setShowOtherPhotosSection:(bool)arg1;
- (void)setShowPeopleSection:(bool)arg1;
- (void)setShowPlacesSection:(bool)arg1;
- (bool)showCategoriesSection;
- (bool)showEventsSection;
- (bool)showGroupsSection;
- (bool)showKeyboardForZeroKeywords;
- (bool)showOtherPhotosSection;
- (bool)showPeopleSection;
- (bool)showPlacesSection;

@end
