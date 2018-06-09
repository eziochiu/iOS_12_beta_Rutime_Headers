/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRSharingCopyShareTokenOperation : BROperation {
    NSURL * _fileURL;
    id /* block */  _shareAndBaseTokenCompletionBlock;
    id /* block */  _shareTokenCompletionBlock;
}

@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;
@property (copy) id /* block */ shareTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setShareAndBaseTokenCompletionBlock:(id /* block */)arg1;
- (void)setShareTokenCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareAndBaseTokenCompletionBlock;
- (id /* block */)shareTokenCompletionBlock;

@end