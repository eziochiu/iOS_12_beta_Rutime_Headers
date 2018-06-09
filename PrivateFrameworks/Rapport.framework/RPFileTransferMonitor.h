/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPFileTransferMonitor : NSObject {
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _fileTransferAddedHandler;
    id /* block */  _fileTransferChangedHandler;
    id /* block */  _fileTransferRemovedHandler;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ fileTransferAddedHandler;
@property (nonatomic, copy) id /* block */ fileTransferChangedHandler;
@property (nonatomic, copy) id /* block */ fileTransferRemovedHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)fileTransferAddedHandler;
- (id /* block */)fileTransferChangedHandler;
- (id /* block */)fileTransferRemovedHandler;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFileTransferAddedHandler:(id /* block */)arg1;
- (void)setFileTransferChangedHandler:(id /* block */)arg1;
- (void)setFileTransferRemovedHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
