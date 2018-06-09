/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAcceptShareOperation : _BRCOperation <BRCOperationSubclass> {
    id /* block */  _acceptShareCompletionBlock;
    CKShareMetadata * _shareMetadata;
}

@property (nonatomic, copy) id /* block */ acceptShareCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)acceptShareCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2;
- (void)main;
- (void)setAcceptShareCompletionBlock:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
