/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewControllerProvider : NSObject <SVVideoViewControllerProviding> {
    SVVideoViewController * _videoViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SVVideoViewController *videoViewController;

- (void).cxx_destruct;
- (void)setVideoViewController:(id)arg1;
- (id)videoViewController;

@end
