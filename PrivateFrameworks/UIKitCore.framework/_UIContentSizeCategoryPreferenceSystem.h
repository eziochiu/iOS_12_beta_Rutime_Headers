/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    bool  _applicationOverridesPreferredContentSizeCategory;
    bool  _didCheckForPreferredContentSizeCategoryOverride;
    bool  _observingNotification;
}

- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_readAndObservePreferences;
- (void)_updateContentSizeCategory:(id)arg1 postingNotification:(bool)arg2;
- (void)_updateContentSizeCategoryFromUserDefaultsPostingNotification:(bool)arg1;
- (void)checkForChanges;
- (void)dealloc;
- (id)initAsSystem;
- (void)setPreferredContentSizeCategory:(id)arg1;

@end
