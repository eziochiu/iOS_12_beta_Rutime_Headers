/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoAdHistoryEventTracker : NSObject <NUVideoPlayerEventTracker> {
    NUAdBannerView * _mostRecentBannerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NUAdBannerView *mostRecentBannerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearHistory;
- (void)loadingFinishedForVideoAdWithMetadata:(id)arg1;
- (id)mostRecentBannerView;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)setMostRecentBannerView:(id)arg1;

@end
