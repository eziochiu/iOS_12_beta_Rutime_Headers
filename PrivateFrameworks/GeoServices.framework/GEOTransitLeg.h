/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitLeg : PBCodable <NSCopying> {
    struct { 
        unsigned int sectionOptionIndex : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _restrictedToSectionIndexs;
    int  _sectionOptionIndex;
}

@property (nonatomic) bool hasSectionOptionIndex;
@property (nonatomic, readonly) int*restrictedToSectionIndexs;
@property (nonatomic, readonly) unsigned long long restrictedToSectionIndexsCount;
@property (nonatomic) int sectionOptionIndex;

- (void)addRestrictedToSectionIndex:(int)arg1;
- (void)clearRestrictedToSectionIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionOptionIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;
- (int*)restrictedToSectionIndexs;
- (unsigned long long)restrictedToSectionIndexsCount;
- (int)sectionOptionIndex;
- (void)setHasSectionOptionIndex:(bool)arg1;
- (void)setRestrictedToSectionIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSectionOptionIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
