/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBImage : PBCodable <NSSecureCoding, _SFPBImage> {
    _SFPBAppIconImage * _appIconImage;
    _SFPBContactImage * _contactImage;
    NSString * _contentType;
    _SFPBGraphicalFloat * _cornerRadius;
    NSString * _identifier;
    NSData * _imageData;
    bool  _isTemplate;
    NSString * _keyColor;
    _SFPBLocalImage * _localImage;
    _SFPBMonogramImage * _monogramImage;
    _SFPBGraphicalFloat * _scale;
    bool  _shouldCropToCircle;
    _SFPBPointSize * _size;
    int  _source;
    int  _type;
    _SFPBURLImage * _urlImage;
}

@property (nonatomic, retain) _SFPBAppIconImage *appIconImage;
@property (nonatomic, retain) _SFPBContactImage *contactImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) _SFPBGraphicalFloat *cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic, retain) _SFPBLocalImage *localImage;
@property (nonatomic, retain) _SFPBMonogramImage *monogramImage;
@property (nonatomic, retain) _SFPBGraphicalFloat *scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic, retain) _SFPBPointSize *size;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBURLImage *urlImage;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (void).cxx_destruct;
- (id)appIconImage;
- (id)contactImage;
- (id)contentType;
- (id)cornerRadius;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageData;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSFImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;
- (id)jsonData;
- (id)keyColor;
- (id)localImage;
- (id)monogramImage;
- (bool)readFrom:(id)arg1;
- (id)scale;
- (void)setAppIconImage:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setCornerRadius:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setLocalImage:(id)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setScale:(id)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUrlImage:(id)arg1;
- (bool)shouldCropToCircle;
- (id)size;
- (int)source;
- (int)type;
- (id)urlImage;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)imageWithData:(id)arg1;

@end
