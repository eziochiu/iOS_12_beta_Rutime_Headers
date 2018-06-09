/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPFetchThumbnailsOperation : FPOperation <NSSecureCoding> {
    NSArray * _itemIdentifiers;
    FPItemManager * _itemManager;
    id /* block */  _perThumbnailCompletionBlock;
    id /* block */  _perThumbnailCompletionBlock_v2;
    NSString * _providerIdentifier;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    id /* block */  _thumbnailsFetchCompletionBlock;
    id /* block */  _thumbnailsFetchCompletionBlock_v2;
}

@property (nonatomic, copy) id /* block */ perThumbnailCompletionBlock;
@property (nonatomic, copy) id /* block */ perThumbnailCompletionBlock_v2;
@property (nonatomic, copy) id /* block */ thumbnailsFetchCompletionBlock;
@property (nonatomic, copy) id /* block */ thumbnailsFetchCompletionBlock_v2;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithItemIdentifiers:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemManager:(id)arg1 providerIdentifier:(id)arg2 itemThumbnailIdentifiers:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5;
- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)perThumbnailCompletionBlock;
- (id /* block */)perThumbnailCompletionBlock_v2;
- (void)setPerThumbnailCompletionBlock:(id /* block */)arg1;
- (void)setPerThumbnailCompletionBlock_v2:(id /* block */)arg1;
- (void)setThumbnailsFetchCompletionBlock:(id /* block */)arg1;
- (void)setThumbnailsFetchCompletionBlock_v2:(id /* block */)arg1;
- (id /* block */)thumbnailsFetchCompletionBlock;
- (id /* block */)thumbnailsFetchCompletionBlock_v2;
- (id)transformData:(id)arg1 forLegacyCompletionBlockWithType:(id)arg2;

@end
