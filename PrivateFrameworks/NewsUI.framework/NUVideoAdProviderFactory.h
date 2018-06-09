/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoAdProviderFactory : NSObject <NUVideoAdProviderFactory> {
    <NUAdProvider> * _adProvider;
    <SXVASTAnalyticsEventInfoFactory> * _analyticsEventInfoFactory;
    NSArray * _contextProviders;
    <NUVideoAdEventTracker> * _eventTracker;
    <SVModalPresentationViewControllerProviding> * _modalPresentationViewControllerProvider;
    <NUVideoPlaybackCounter> * _playbackCounter;
    <SVVisibilityMonitoring> * _videoPlayerVisibilityMonitor;
    <SVVideoVisibilityMonitorProviding> * _visibilityMonitorProviding;
}

@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) <SXVASTAnalyticsEventInfoFactory> *analyticsEventInfoFactory;
@property (nonatomic, readonly, copy) NSArray *contextProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUVideoAdEventTracker> *eventTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVModalPresentationViewControllerProviding> *modalPresentationViewControllerProvider;
@property (nonatomic, readonly) <NUVideoPlaybackCounter> *playbackCounter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) <SVVideoVisibilityMonitorProviding> *visibilityMonitorProviding;

- (void).cxx_destruct;
- (id)adProvider;
- (id)analyticsEventInfoFactory;
- (id)contextProviders;
- (id)createVideoAdProviderWithContextProviderForVideoBefore:(id)arg1 contextProviderForVideoAfter:(id)arg2;
- (id)eventTracker;
- (id)initWithAdProvider:(id)arg1 contextProviders:(id)arg2 eventTracker:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 videoVisibilityMonitorProvider:(id)arg5 analyticsEventInfoFactory:(id)arg6 playbackCounter:(id)arg7 modalPresentationViewControllerProvider:(id)arg8;
- (id)modalPresentationViewControllerProvider;
- (id)playbackCounter;
- (id)videoPlayerVisibilityMonitor;
- (id)visibilityMonitorProviding;

@end
