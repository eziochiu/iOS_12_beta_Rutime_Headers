/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaMovieMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor> {
    LPImage * _artwork;
    LPArtworkMetadata * _artworkMetadata;
    LPImage * _branding;
    NSString * _brandingText;
    NSString * _genre;
    NSString * _name;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) LPImage *artwork;
@property (nonatomic, copy) LPArtworkMetadata *artworkMetadata;
@property (nonatomic, retain) LPImage *branding;
@property (nonatomic, retain) NSString *brandingText;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkMetadata;
- (id)branding;
- (id)brandingText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)populateLinkMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setBranding:(id)arg1;
- (void)setBrandingText:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
