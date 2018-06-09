/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPerformer : PBCodable <NSCopying> {
    NSString * _itunesId;
    NSString * _itunesUrl;
    GEOLocalizedString * _name;
    NSString * _performerId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasItunesId;
@property (nonatomic, readonly) bool hasItunesUrl;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPerformerId;
@property (nonatomic, retain) NSString *itunesId;
@property (nonatomic, retain) NSString *itunesUrl;
@property (nonatomic, retain) GEOLocalizedString *name;
@property (nonatomic, retain) NSString *performerId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasItunesId;
- (bool)hasItunesUrl;
- (bool)hasName;
- (bool)hasPerformerId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itunesId;
- (id)itunesUrl;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)performerId;
- (bool)readFrom:(id)arg1;
- (void)setItunesId:(id)arg1;
- (void)setItunesUrl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPerformerId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
