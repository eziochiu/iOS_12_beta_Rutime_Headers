/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaSoftwareMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor> {
    NSString * _genre;
    LPImage * _icon;
    bool  _isMessagesOnlyApp;
    LPImage * _messagesAppIcon;
    NSString * _name;
    NSString * _platform;
    NSArray * _screenshots;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic) bool isMessagesOnlyApp;
@property (nonatomic, retain) LPImage *messagesAppIcon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) NSArray *screenshots;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isMessagesOnlyApp;
- (id)messagesAppIcon;
- (id)name;
- (id)platform;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)screenshots;
- (void)setGenre:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsMessagesOnlyApp:(bool)arg1;
- (void)setMessagesAppIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setScreenshots:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
