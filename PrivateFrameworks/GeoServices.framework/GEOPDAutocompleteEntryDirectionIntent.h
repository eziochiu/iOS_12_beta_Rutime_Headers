/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryDirectionIntent : PBCodable <NSCopying> {
    GEOPDDirectionIntent * _directionIntent;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDDirectionIntent *directionIntent;
@property (nonatomic, readonly) bool hasDirectionIntent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionIntent;
- (bool)hasDirectionIntent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionIntent:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
