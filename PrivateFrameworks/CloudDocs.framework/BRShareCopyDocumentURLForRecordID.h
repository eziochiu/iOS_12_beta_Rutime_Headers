/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyDocumentURLForRecordID : BROperation {
    id /* block */  _copyDocumentURLCompletionBlock;
    CKRecordID * _recordID;
    bool  _withServerLookup;
}

@property (copy) id /* block */ copyDocumentURLCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)copyDocumentURLCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRecordID:(id)arg1 withServerLookup:(bool)arg2;
- (void)main;
- (void)setCopyDocumentURLCompletionBlock:(id /* block */)arg1;

@end
