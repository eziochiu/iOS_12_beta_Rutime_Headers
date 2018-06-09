/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSource : PBCodable <NSCopying> {
    NSString * _sourceId;
    NSString * _sourceName;
    NSString * _sourceVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) NSString *sourceVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceVersion;
- (unsigned long long)hash;
- (id)initWithAttributionID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)sourceId;
- (id)sourceName;
- (id)sourceVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
