/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedString : PBCodable <NSCopying> {
    NSString * _locale;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
