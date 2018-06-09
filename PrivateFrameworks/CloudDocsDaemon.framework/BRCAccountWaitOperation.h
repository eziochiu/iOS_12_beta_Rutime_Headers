/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    CKContainer * _ckContainer;
    long long  _lastAccountStatus;
    bool  _resumed;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountChangeHandler;
- (void)_accountDidChange;
- (void)cancel;
- (id)createActivity;
- (void)dealloc;
- (id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithCKContainer:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;
- (void)start;
- (id)subclassableDescriptionWithContext:(id)arg1;

@end