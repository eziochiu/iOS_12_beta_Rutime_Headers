/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStatusTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor> {
    NSString * _album;
    NSString * _artist;
    LPImage * _artwork;
    LPArtworkMetadata * _artworkMetadata;
    NSString * _lyrics;
    NSString * _name;
    NSArray * _offers;
    NSURL * _previewURL;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPImage *artwork;
@property (nonatomic, copy) LPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *lyrics;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSURL *previewURL;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (id)statusForText:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)transcriptBoldTextFont;

- (void).cxx_destruct;
- (id)actionURLForTransformer:(id)arg1;
- (id)album;
- (id)artist;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)destroyForTransformer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesPlaybackInformationForURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initializeForTransformer:(id)arg1;
- (id)lyrics;
- (id)name;
- (id)offers;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewURL;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)statusForTransformer:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;

@end