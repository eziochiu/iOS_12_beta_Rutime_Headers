/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISMachineDataActionOperation : ISOperation {
    bool  _blocksPurchaseRequests;
    bool  _hidesServerDrivenDialogs;
    SSMachineDataRequest * _request;
    id /* block */  _resultBlock;
    NSString * _syncState;
    NSString * _userAgent;
}

@property bool blocksPurchaseRequests;
@property bool hidesServerDrivenDialogs;
@property (readonly) SSMachineDataRequest *machineDataRequest;
@property (copy) id /* block */ resultBlock;
@property (readonly) NSString *syncState;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (bool)_eraseProvisioning;
- (bool)_provisionWithRequest:(id)arg1 error:(id*)arg2;
- (bool)_shouldRetryAfterError:(id)arg1;
- (bool)_syncMachineWithRequest:(id)arg1 error:(id*)arg2;
- (bool)blocksPurchaseRequests;
- (bool)hidesServerDrivenDialogs;
- (id)initWithMachineDataRequest:(id)arg1;
- (id)machineDataRequest;
- (id /* block */)resultBlock;
- (void)run;
- (void)setBlocksPurchaseRequests:(bool)arg1;
- (void)setHidesServerDrivenDialogs:(bool)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setUserAgent:(id)arg1;
- (id)syncState;
- (id)uniqueKey;
- (id)userAgent;

@end
