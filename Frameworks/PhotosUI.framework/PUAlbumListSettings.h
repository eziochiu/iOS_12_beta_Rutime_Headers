/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListSettings : PXSettings {
    bool  _allowNavigationTitleEditing;
    double  _avatarSpacing;
    bool  _combinePeoplePlacesAndMediaTypesOnIpad;
    bool  _shouldShowSubscriberMonograms;
    bool  _shouldUseEditorialLayout;
}

@property (nonatomic) bool allowNavigationTitleEditing;
@property (nonatomic) double avatarSpacing;
@property (nonatomic) bool combinePeoplePlacesAndMediaTypesOnIpad;
@property (nonatomic) bool shouldShowSubscriberMonograms;
@property (nonatomic) bool shouldUseEditorialLayout;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowNavigationTitleEditing;
- (double)avatarSpacing;
- (bool)combinePeoplePlacesAndMediaTypesOnIpad;
- (id)parentSettings;
- (void)setAllowNavigationTitleEditing:(bool)arg1;
- (void)setAvatarSpacing:(double)arg1;
- (void)setCombinePeoplePlacesAndMediaTypesOnIpad:(bool)arg1;
- (void)setDefaultValues;
- (void)setShouldShowSubscriberMonograms:(bool)arg1;
- (void)setShouldUseEditorialLayout:(bool)arg1;
- (bool)shouldShowSubscriberMonograms;
- (bool)shouldUseEditorialLayout;

@end
