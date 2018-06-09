/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    bool  _allowEmptySelection;
    _MRLanguageOptionProtobuf * _defaultLanguageOption;
    struct { 
        unsigned int allowEmptySelection : 1; 
    }  _has;
    NSMutableArray * _languageOptions;
}

@property (nonatomic) bool allowEmptySelection;
@property (nonatomic, retain) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (nonatomic) bool hasAllowEmptySelection;
@property (nonatomic, readonly) bool hasDefaultLanguageOption;
@property (nonatomic, retain) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

- (void).cxx_destruct;
- (void)addLanguageOptions:(id)arg1;
- (bool)allowEmptySelection;
- (void)clearLanguageOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLanguageOption;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowEmptySelection;
- (bool)hasDefaultLanguageOption;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageOptionsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllowEmptySelection:(bool)arg1;
- (void)setDefaultLanguageOption:(id)arg1;
- (void)setHasAllowEmptySelection:(bool)arg1;
- (void)setLanguageOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
