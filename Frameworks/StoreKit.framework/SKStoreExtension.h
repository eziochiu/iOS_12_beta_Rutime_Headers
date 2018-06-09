/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)clientInterface;
+ (id)serviceInterface;

- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;
- (void)setRequestedIdentifier:(id)arg1;
- (void)setTabIdentifier:(id)arg1;
- (void)setupWithParameters:(id)arg1;
- (bool)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;

@end
