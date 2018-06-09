/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftViewController : UINavigationController {
    SKUIClientContext * _clientContext;
    SKUIGift * _gift;
    SKUIGiftConfiguration * _giftConfiguration;
    <SKUIGiftViewControllerDelegate> * _giftDelegate;
    long long  _initialBarStyle;
    NSOperationQueue * _operationQueue;
    UIViewController * _placeholderViewController;
    SKUIGiftComposeViewController * _rootViewController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly, copy) SKUIGift *gift;
@property (nonatomic) <SKUIGiftViewControllerDelegate> *giftDelegate;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishGiftingWithResult:(bool)arg1;
- (void)_loadGiftConfiguration;
- (id)_localizedString:(id)arg1;
- (id)clientContext;
- (id)gift;
- (id)giftDelegate;
- (id)initWithGift:(id)arg1;
- (id)operationQueue;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setClientContext:(id)arg1;
- (void)setGiftDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
