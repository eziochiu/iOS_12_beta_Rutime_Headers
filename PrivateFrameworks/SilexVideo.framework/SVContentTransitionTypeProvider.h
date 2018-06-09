/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVContentTransitionTypeProvider : NSObject <SVContentTransitionTypeProviding> {
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, readonly) long long contentTransitionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (long long)contentTransitionType;
- (id)initWithVideoViewControllerProvider:(id)arg1;
- (id)videoViewControllerProvider;

@end
