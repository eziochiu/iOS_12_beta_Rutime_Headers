/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdPreroll : NSObject <ADBannerViewDelegate> {
    NUAdBannerView * _bannerView;
    id /* block */  _completionBlock;
}

@property (nonatomic, retain) NUAdBannerView *bannerView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bannerView;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id /* block */)completionBlock;
- (void)finishedLoadingBannerView:(id)arg1 error:(id)arg2;
- (id)initWithContext:(id)arg1 timeout:(double)arg2 completionBlock:(id /* block */)arg3;
- (void)setBannerView:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)timeout;

@end