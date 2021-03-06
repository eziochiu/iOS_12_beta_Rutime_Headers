/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoPlayerAspectRatioProvider : NSObject <NUAdContextProvider> {
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithVideoViewControllerProvider:(id)arg1;
- (id)videoViewControllerProvider;

@end
