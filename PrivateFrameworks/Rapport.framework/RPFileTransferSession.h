/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPFileTransferSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    RPDevice * _peerDevice;
    id /* block */  _progressHandler;
    RPSession * _session;
    NSUUID * _transferIdentifier;
    NSArray * _urls;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) RPDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) RPSession *session;
@property (nonatomic, copy) NSUUID *transferIdentifier;
@property (nonatomic, copy) NSArray *urls;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addFileURL:(id)arg1;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id /* block */)progressHandler;
- (id)session;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)transferIdentifier;
- (id)urls;

@end
