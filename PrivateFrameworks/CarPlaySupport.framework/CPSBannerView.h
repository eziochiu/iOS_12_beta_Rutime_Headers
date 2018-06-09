/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBannerView : UIView <SBUIBannerView> {
    SBUIBannerContext * _bannerContext;
    CPSBannerItem * _bannerItem;
}

@property (nonatomic, retain) SBUIBannerContext *bannerContext;
@property (nonatomic, retain) CPSBannerItem *bannerItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationIconImage;
- (id)bannerContext;
- (id)bannerItem;
- (id)initWithContext:(id)arg1;
- (void)setBannerContext:(id)arg1;
- (void)setBannerItem:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
