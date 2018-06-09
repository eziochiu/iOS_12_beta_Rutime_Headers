/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKRecordDecryptInfo : NSObject {
    id /* block */  _callback;
    NSObject<OS_dispatch_group> * _decryptGroup;
    NSError * _error;
    unsigned long long  _numUnwrapAttempts;
    CKRecord * _record;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *decryptGroup;
@property (nonatomic, retain) NSError *error;
@property unsigned long long numUnwrapAttempts;
@property (nonatomic, readonly) CKRecord *record;

- (void).cxx_destruct;
- (void)_setupDecryptCallbackForQueue:(id)arg1;
- (id /* block */)callback;
- (id)decryptGroup;
- (id)error;
- (id)init;
- (id)initWithRecord:(id)arg1 callbackQueue:(id)arg2;
- (unsigned long long)numUnwrapAttempts;
- (id)record;
- (void)setCallback:(id /* block */)arg1;
- (void)setDecryptGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNumUnwrapAttempts:(unsigned long long)arg1;

@end
