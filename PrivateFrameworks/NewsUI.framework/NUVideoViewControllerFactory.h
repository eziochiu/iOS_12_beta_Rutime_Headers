/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoViewControllerFactory : NSObject <NUVideoViewControllerFactory> {
    <NFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createVideoViewControllerWithItems:(id)arg1 visibilityMonitor:(id)arg2 eventTrackerConfiguration:(id)arg3 externalAnalyticsReferrer:(id)arg4 placement:(id)arg5 discoverMoreVideosInfo:(id)arg6;
- (id)initWithResolver:(id)arg1;
- (id)resolver;

@end
