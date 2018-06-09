/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRichText : PBCodable <NSSecureCoding, _SFPBRichText> {
    NSString * _contentAdvisory;
    NSArray * _formattedTextPieces;
    NSArray * _icons;
    _SFPBGraphicalFloat * _starRating;
    _SFPBText * _text;
}

@property (nonatomic, copy) NSString *contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *formattedTextPieces;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int maxLines;
@property (nonatomic, retain) _SFPBGraphicalFloat *starRating;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBText *text;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (void).cxx_destruct;
- (void)addFormattedTextPieces:(id)arg1;
- (void)addIcons:(id)arg1;
- (void)clearFormattedTextPieces;
- (void)clearIcons;
- (id)contentAdvisory;
- (id)dictionaryRepresentation;
- (id)formattedTextPieces;
- (id)formattedTextPiecesAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedTextPiecesCount;
- (unsigned long long)hash;
- (id)icons;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContentAdvisory:(id)arg1;
- (void)setFormattedTextPieces:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setStarRating:(id)arg1;
- (void)setText:(id)arg1;
- (id)starRating;
- (id)text;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)textWithString:(id)arg1;

- (unsigned int)maxLines;
- (void)setMaxLines:(unsigned int)arg1;

@end
