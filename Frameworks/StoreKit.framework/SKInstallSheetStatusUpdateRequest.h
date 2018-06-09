/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKInstallSheetStatusUpdateRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
    bool  _isInstallSheetOpen;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool isInstallSheetOpen;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_start;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)isInstallSheetOpen;
- (void)setBundleId:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsInstallSheetOpen:(bool)arg1;

@end
