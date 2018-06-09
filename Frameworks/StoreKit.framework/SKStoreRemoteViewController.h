/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface> {
    <SKStoreRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKStoreRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsTabSelection;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
