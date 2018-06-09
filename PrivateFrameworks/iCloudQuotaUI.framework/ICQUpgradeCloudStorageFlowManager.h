/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate> {
    NSURLSession * _buyProductSession;
    id /* block */  _purchaseCompletionHandler;
    PSCloudStorageOffersManager * _storageOffersManager;
    NSString * _storagePurchaseButtonId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ purchaseCompletionHandler;
@property (nonatomic, retain) PSCloudStorageOffersManager *storageOffersManager;
@property (nonatomic, retain) NSString *storagePurchaseButtonId;
@property (nonatomic, readonly) NSDictionary *storagePurchaseKeybag;
@property (readonly) Class superclass;

+ (bool)_canDoTokenPurchaseWithOffer:(id)arg1;
+ (bool)shouldSubclassShowForOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (id)_buyProductQueryDictionary;
- (id)_buyProductQueryKeySet;
- (void)_buyProductShouldUseToken:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)_dummyRequestWithAccount:(id)arg1 token:(id)arg2;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPurchase;
- (void)_performPurchaseUsingSettingsUI;
- (void)_performPurchaseUsingTouchID;
- (id)_storageContextHeaderDictionary;
- (id)_storageContextJSONString;
- (id)initSubclassWithOffer:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (id /* block */)purchaseCompletionHandler;
- (id)secureTokenMissingError;
- (void)setPurchaseCompletionHandler:(id /* block */)arg1;
- (void)setStorageOffersManager:(id)arg1;
- (void)setStoragePurchaseButtonId:(id)arg1;
- (id)storageOffersManager;
- (id)storagePurchaseButtonId;
- (id)storagePurchaseKeybag;

@end
