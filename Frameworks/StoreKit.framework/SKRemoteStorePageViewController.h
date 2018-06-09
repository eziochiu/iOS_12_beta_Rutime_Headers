/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController> {
    SKStorePageViewController * _storePageViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStorePageViewController *storePageViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)setStorePageViewController:(id)arg1;
- (void)showProductPageWithItemIdentifier:(id)arg1;
- (id)storePageViewController;

@end
