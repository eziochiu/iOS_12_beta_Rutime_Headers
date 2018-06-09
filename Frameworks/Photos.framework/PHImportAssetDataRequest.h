/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportAssetDataRequest : NSObject {
    PHImportAsset * _asset;
    id /* block */  _cancelBlock;
    PFCanceler * _canceler;
    id /* block */  _completionHandler;
    unsigned char  _fetchType;
    unsigned char  _type;
}

@property (nonatomic, retain) PHImportAsset *asset;
@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned char fetchType;
@property (nonatomic, readonly) unsigned char type;

+ (id)stringForRequestType:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (id /* block */)cancelBlock;
- (id /* block */)completionHandler;
- (unsigned char)fetchType;
- (id)init;
- (id)initWithType:(unsigned char)arg1;
- (bool)isCanceled;
- (void)setAsset:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFetchType:(unsigned char)arg1;
- (unsigned char)type;

@end
