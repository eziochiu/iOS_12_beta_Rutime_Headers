/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreCollectionSongsRequest : MPStoreModelRequest {
    MPIdentifierSet * _collectionIdentifiers;
}

@property (nonatomic, retain) MPIdentifierSet *collectionIdentifiers;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setCollectionIdentifiers:(id)arg1;

@end
