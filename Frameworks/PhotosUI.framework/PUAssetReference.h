/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetReference : NSObject <NSCopying, PXAssetReferenceProtocol> {
    <PUDisplayAsset> * _asset;
    <PUDisplayAssetCollection> * _assetCollection;
    NSString * _dataSourceIdentifier;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) <PUDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } simpleIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asset;
- (id)assetCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)indexPath;
- (id)init;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })simpleIndexPath;

@end
