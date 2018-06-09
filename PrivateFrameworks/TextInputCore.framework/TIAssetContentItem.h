/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetContentItem : NSObject {
    TIAsset * _asset;
    TIAssetAttributes * _attributes;
    NSURL * _url;
}

@property (nonatomic, readonly) TIAsset *asset;
@property (nonatomic, readonly) TIAssetAttributes *attributes;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)asset;
- (id)attributes;
- (void)dealloc;
- (id)description;
- (id)initWithAsset:(id)arg1 attributes:(id)arg2 url:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)url;

@end
