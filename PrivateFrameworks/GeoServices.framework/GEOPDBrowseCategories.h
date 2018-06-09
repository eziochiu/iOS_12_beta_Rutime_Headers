/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBrowseCategories : PBCodable <NSCopying> {
    NSMutableArray * _browseCategorys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *browseCategorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)browseCategoryType;

- (void).cxx_destruct;
- (void)addBrowseCategory:(id)arg1;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (id)browseCategorys;
- (unsigned long long)browseCategorysCount;
- (void)clearBrowseCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrowseCategorys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
