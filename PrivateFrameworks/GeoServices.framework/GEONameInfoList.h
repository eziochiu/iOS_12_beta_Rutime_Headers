/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONameInfoList : PBCodable <NSCopying> {
    NSMutableArray * _nameInfos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *nameInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)nameInfoType;

- (void).cxx_destruct;
- (void)addNameInfo:(id)arg1;
- (void)clearNameInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameInfoAtIndex:(unsigned long long)arg1;
- (id)nameInfos;
- (unsigned long long)nameInfosCount;
- (bool)readFrom:(id)arg1;
- (void)setNameInfos:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
