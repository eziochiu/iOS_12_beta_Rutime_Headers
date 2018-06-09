/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRSharingCopyShortTokenOperation : BROperation {
    NSURL * _fileURL;
    id /* block */  _shortTokenCompletionBlock;
}

@property (copy) id /* block */ shortTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setShortTokenCompletionBlock:(id /* block */)arg1;
- (id /* block */)shortTokenCompletionBlock;

@end
