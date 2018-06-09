/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudQuotaController : NSObject <ICQBannerViewDelegate> {
    ICQOffer * _currentOffer;
    <PXCloudQuotaControllerDelegate> * _delegate;
    UIView * _informationBanner;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCloudQuotaControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *informationBanner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_currentOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_queue_initialSetup;
- (void)_updateCurrentOffer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)informationBanner;
- (id)init;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
