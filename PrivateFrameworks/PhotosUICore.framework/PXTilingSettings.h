/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingSettings : PXSettings {
    bool  _flipLayoutsHorizontally;
}

@property (nonatomic) bool flipLayoutsHorizontally;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)flipLayoutsHorizontally;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setFlipLayoutsHorizontally:(bool)arg1;

@end
