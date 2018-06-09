/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (getter=isInitialUpdate, nonatomic, readonly) bool initialUpdate;
@property (getter=isUpdating, nonatomic, readonly) bool updating;

- (bool)isInitialUpdate;
- (bool)isUpdating;
- (void)updateProgressWithCompletionHandler:(id /* block */)arg1;

@end
