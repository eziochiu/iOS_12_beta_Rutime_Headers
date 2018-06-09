/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSnapBackSettings : PXSettings {
    bool  _allowSnapBackHistoryMenu;
}

@property (nonatomic) bool allowSnapBackHistoryMenu;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowSnapBackHistoryMenu;
- (id)parentSettings;
- (void)setAllowSnapBackHistoryMenu:(bool)arg1;
- (void)setDefaultValues;

@end
