/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVControlItemManager : NSObject <SVControlItemManager> {
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (void)addControlItem:(id)arg1;
- (id)initWithVideoViewControllerProvider:(id)arg1;
- (void)removeControlItem:(id)arg1;
- (id)videoViewControllerProvider;

@end
