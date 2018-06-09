/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedDisambiguationLabel : PBCodable <NSCopying> {
    NSString * _locale;
    NSString * _string;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasString;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
