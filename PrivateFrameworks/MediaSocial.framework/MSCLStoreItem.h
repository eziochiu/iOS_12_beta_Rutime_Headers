/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLStoreItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _artistName;
    MPArtworkCatalog * _artworkCatalog;
    SKUIArtworkList * _artworkList;
    SSLookupItemArtwork * _artworkTemplate;
    NSString * _collectionName;
    NSString * _displayName;
    NSString * _itemIdentifier;
    NSString * _kind;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, copy) SKUIArtworkList *artworkList;
@property (nonatomic, retain) SSLookupItemArtwork *artworkTemplate;
@property (nonatomic, copy) NSString *collectionName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, copy) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (id)artworkCatalog;
- (id)artworkList;
- (id)artworkTemplate;
- (id)collectionName;
- (id)copyMediaSocialPostItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemDictionary:(id)arg1;
- (id)initWithMPModelObject:(id)arg1;
- (id)itemIdentifier;
- (id)kind;
- (void)setArtistName:(id)arg1;
- (void)setArtworkCatalog:(id)arg1;
- (void)setArtworkList:(id)arg1;
- (void)setArtworkTemplate:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setKind:(id)arg1;

@end
