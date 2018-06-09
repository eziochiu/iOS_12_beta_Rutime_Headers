/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBItemRepresentation : NSObject {
    <PBItemRepresentationDataTransferDelegate> * _dataTransferDelegate;
    id /* block */  _loader;
    unsigned long long  _preferredRepresentation;
    NSString * _typeIdentifier;
    long long  _visibility;
}

@property (nonatomic) <PBItemRepresentationDataTransferDelegate> *dataTransferDelegate;
@property (nonatomic) unsigned long long preferredRepresentation;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (nonatomic) long long visibility;

- (void).cxx_destruct;
- (id)_loadCompletionBlock:(id /* block */)arg1;
- (id)copyWithDoNothingLoaderBlock;
- (id)dataTransferDelegate;
- (id)initWithNSItemRepresentation:(id)arg1;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(id /* block */)arg3;
- (id)loadDataWithCompletion:(id /* block */)arg1;
- (id)loadFileCopyWithCompletion:(id /* block */)arg1;
- (id)loadOpenInPlaceWithCompletion:(id /* block */)arg1;
- (id)loadWithCompletionHandler:(id /* block */)arg1;
- (id)performProgressTrackingWithLoaderBlock:(id /* block */)arg1 onCancelCallback:(id /* block */)arg2;
- (unsigned long long)preferredRepresentation;
- (void)setDataTransferDelegate:(id)arg1;
- (void)setLoaderBlock:(id /* block */)arg1;
- (void)setPreferredRepresentation:(unsigned long long)arg1;
- (void)setVisibility:(long long)arg1;
- (id)typeIdentifier;
- (id)v2_loadCompletionBlock:(id /* block */)arg1;
- (id)v2_loadOpenInPlaceWithCompletion:(id /* block */)arg1;
- (void)v2_setLoader:(id /* block */)arg1;
- (long long)visibility;

@end
