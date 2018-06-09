/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdController : NSObject <ADBannerViewInternalDelegate> {
    <SXAdProvider> * _adProvider;
    NSMutableDictionary * _bannerViews;
    NSObject<OS_dispatch_semaphore> * _bannerViewsSemaphore;
    NSMutableArray * _componentViewsDisplayingAds;
    <SXAdControllerDelegate> * _delegate;
    bool  _didLoadFirstBannerView;
    SXDocument * _document;
    <SXAdControllerPresentationDelegate> * _presentationDelegate;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) <SXAdProvider> *adProvider;
@property (nonatomic, retain) NSMutableDictionary *bannerViews;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *bannerViewsSemaphore;
@property (nonatomic, readonly) NSMutableArray *componentViewsDisplayingAds;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXAdControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLoadFirstBannerView;
@property (nonatomic, readonly) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SXAdControllerPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

+ (id)debugAdvertisementSettings;
+ (bool)interactivityDebuggingEnabled;
+ (bool)isDebugModeEnabled;
+ (void)setDebugAdvertisingSettings:(id)arg1;
+ (void)setDebugModeEnabled:(bool)arg1;
+ (void)setInteractivityDebuggingEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)adProvider;
- (bool)allowComponentViewInFirstViewport:(id)arg1;
- (id /* block */)bannerViewForComponentView:(id)arg1 component:(id)arg2 metadataProvider:(id)arg3 adType:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (id)bannerViews;
- (id)bannerViewsSemaphore;
- (bool)component:(id)arg1 isLastComponentInComponents:(id)arg2;
- (void)componentView:(id)arg1 didLoadBannerView:(id)arg2;
- (void)componentView:(id)arg1 didUnloadBannerView:(id)arg2 withError:(id)arg3;
- (void)componentView:(id)arg1 failedToLoadBannerView:(id)arg2 error:(id)arg3;
- (bool)componentViewWithinScreenHeightOfViewport:(id)arg1;
- (id)componentViewsDisplayingAds;
- (id)delegate;
- (bool)didLoadFirstBannerView;
- (void)disableAdInteraction;
- (id)document;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBannerViewForComponentIdentifier:(id)arg1;
- (id)initWithAdProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3;
- (bool)isComponentViewWithinFirstViewport:(id)arg1;
- (bool)isDisplayingAdsWithinScreenfullOfComponentView:(id)arg1;
- (bool)isRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinScreenFullOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewport:(struct CGSize { double x1; double x2; })arg3;
- (id /* block */)prerollForComponent:(id)arg1 metadataProvider:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)presentationDelegate;
- (void)reset;
- (void)resumeAdInteraction;
- (void)setBannerViews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidLoadFirstBannerView:(bool)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldRequestBannerViewForComponentView:(id)arg1;
- (void)transitionToSizeWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewport;

@end
