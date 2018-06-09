/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {
    id /* block */  _completionBlock;
    bool  _createsDownloads;
    bool  _createsJobs;
    bool  _isBackgroundRequest;
    bool  _needsAuthentication;
    NSMutableSet * _openPurchaseIdentifiers;
    bool  _playbackRequest;
    id /* block */  _purchaseBlock;
    SSPurchaseManager * _purchaseManager;
    id /* block */  _purchaseResponseBlock;
    NSArray * _purchases;
    bool  _shouldValidatePurchases;
}

@property (getter=isBackgroundRequest, nonatomic) bool backgroundRequest;
@property (nonatomic) bool createsDownloads;
@property (nonatomic) bool createsJobs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSPurchaseRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsAuthentication;
@property (getter=isPlaybackRequest, nonatomic) bool playbackRequest;
@property (readonly) NSArray *purchases;
@property (nonatomic) bool shouldValidatePurchases;
@property (readonly) Class superclass;

- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)cancel;
- (id)copyXPCEncoding;
- (bool)createsDownloads;
- (bool)createsJobs;
- (void)dealloc;
- (id)init;
- (id)initWithPurchases:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundRequest;
- (bool)isPlaybackRequest;
- (bool)needsAuthentication;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (id)purchases;
- (void)setBackgroundRequest:(bool)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setCreatesJobs:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setPlaybackRequest:(bool)arg1;
- (void)setShouldValidatePurchases:(bool)arg1;
- (bool)shouldValidatePurchases;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithPurchaseBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)startWithPurchaseResponseBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;

@end
