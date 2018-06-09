/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {
    NSString * _game;
    LPImage * _icon;
    LPImage * _image;
    unsigned int  _maximumNumberOfPlayers;
    unsigned int  _minimumNumberOfPlayers;
    unsigned int  _numberOfPlayers;
}

@property (nonatomic, copy) NSString *game;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic) unsigned int maximumNumberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers;
@property (nonatomic) unsigned int numberOfPlayers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)invitationText;
- (unsigned int)maximumNumberOfPlayers;
- (unsigned int)minimumNumberOfPlayers;
- (unsigned int)numberOfPlayers;
- (id)playerCountText;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumNumberOfPlayers:(unsigned int)arg1;
- (void)setMinimumNumberOfPlayers:(unsigned int)arg1;
- (void)setNumberOfPlayers:(unsigned int)arg1;

@end
