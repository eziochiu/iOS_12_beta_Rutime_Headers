/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAddRemovePairingOperation : HMFObject {
    bool  _admin;
    id /* block */  _completionHandler;
    NSString * _identifier;
    long long  _operation;
    bool  _operationExecuting;
    NSData * _publicKey;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool admin;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long operation;
@property (nonatomic) bool operationExecuting;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)admin;
- (id /* block */)completionHandler;
- (id)identifier;
- (id)initWith:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(bool)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (long long)operation;
- (bool)operationExecuting;
- (id)publicKey;
- (id)queue;
- (void)setAdmin:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setOperationExecuting:(bool)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setQueue:(id)arg1;

@end
