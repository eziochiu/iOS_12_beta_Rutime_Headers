/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate> {
    SKUIClientContext * _clientContext;
    UIViewController * _presentingViewController;
    SKUIRedeemConfiguration * _redeemConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

+ (void)beginThrottleInterval;
+ (bool)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void)show;

@end
