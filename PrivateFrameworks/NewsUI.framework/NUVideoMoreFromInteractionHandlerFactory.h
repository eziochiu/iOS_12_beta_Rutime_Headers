/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoMoreFromInteractionHandlerFactory : NSObject <SVMoreFromInteractionHandlerFactory> {
    <NUVideoCallToActionURLProviding> * _callToActionURLProvider;
    <SVVideoPlaybackController> * _playbackController;
    <NUURLHandling> * _urlHandler;
}

@property (nonatomic, readonly) <NUVideoCallToActionURLProviding> *callToActionURLProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NUURLHandling> *urlHandler;

- (void).cxx_destruct;
- (id)callToActionURLProvider;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 urlHandler:(id)arg2 callToActionURLProvider:(id)arg3;
- (id)playbackController;
- (id)urlHandler;

@end
