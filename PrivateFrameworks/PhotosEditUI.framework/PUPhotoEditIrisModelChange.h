/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditIrisModelChange : PUViewModelChange {
    bool  _videoEnabledDidChange;
}

@property (setter=_setVideoEnabledDidChange:, nonatomic) bool videoEnabledDidChange;

- (void)_setVideoEnabledDidChange:(bool)arg1;
- (bool)hasChanges;
- (bool)videoEnabledDidChange;

@end
