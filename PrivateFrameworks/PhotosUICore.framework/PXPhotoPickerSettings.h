/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoPickerSettings : PXSettings {
    bool  _useLibraryPresentation;
}

@property (nonatomic) bool useLibraryPresentation;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setUseLibraryPresentation:(bool)arg1;
- (bool)useLibraryPresentation;

@end
