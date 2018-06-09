/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPFetchParentOperation : FPActionOperation {
    id /* block */  _fetchCompletionBlock;
    id /* block */  _fetchCompletionBlock_v2;
    FPItem * _item;
}

@property (nonatomic, copy) id /* block */ fetchCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchCompletionBlock_v2;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionBlock;
- (id /* block */)fetchCompletionBlock_v2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)setFetchCompletionBlock_v2:(id /* block */)arg1;

@end
