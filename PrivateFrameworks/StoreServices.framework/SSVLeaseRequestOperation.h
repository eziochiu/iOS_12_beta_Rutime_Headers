/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseRequestOperation : SSVOperation {
    NSString * _bagKey;
    NSObject<OS_dispatch_semaphore> * _bagLoadSemaphore;
    NSData * _certificateData;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    id /* block */  _outputBlock;
    SSVPlaybackLeaseRequest * _request;
    unsigned long long  _retryCount;
    SSURLBag * _urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (readonly, copy) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (bool)_loadCertificateDataIfNecessary:(id*)arg1;
- (bool)_resolveConfigurationAndURLReturningError:(id*)arg1;
- (bool)_shouldRetryForError:(id)arg1;
- (void)cancel;
- (id)certificateURLBagKey;
- (id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2;
- (id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2;
- (id)leaseRequest;
- (void)main;
- (id /* block */)outputBlock;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
