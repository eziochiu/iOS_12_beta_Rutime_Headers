/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEventCategory : PBCodable <NSCopying> {
    int  _eventLookupCategory;
    struct { 
        unsigned int eventLookupCategory : 1; 
    }  _has;
    NSMutableArray * _localizedCategorys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int eventLookupCategory;
@property (nonatomic) bool hasEventLookupCategory;
@property (nonatomic, retain) NSMutableArray *localizedCategorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)localizedCategoryType;

- (void).cxx_destruct;
- (int)StringAsEventLookupCategory:(id)arg1;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventLookupCategory;
- (id)eventLookupCategoryAsString:(int)arg1;
- (bool)hasEventLookupCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (id)localizedCategorys;
- (unsigned long long)localizedCategorysCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventLookupCategory:(int)arg1;
- (void)setHasEventLookupCategory:(bool)arg1;
- (void)setLocalizedCategorys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
