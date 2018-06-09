/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {
    unsigned int  _blurredHourOfDay;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int blurredHourOfDay : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int maxCategories : 1; 
        unsigned int maxResultsPerCategory : 1; 
    }  _has;
    unsigned int  _maxCategories;
    unsigned int  _maxResultsPerCategory;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasBlurredHourOfDay;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasMaxCategories;
@property (nonatomic) bool hasMaxResultsPerCategory;
@property (nonatomic) unsigned int maxCategories;
@property (nonatomic) unsigned int maxResultsPerCategory;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)blurredHourOfDay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlurredHourOfDay;
- (bool)hasDayOfWeek;
- (bool)hasMaxCategories;
- (bool)hasMaxResultsPerCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxCategories;
- (unsigned int)maxResultsPerCategory;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlurredHourOfDay:(unsigned int)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasBlurredHourOfDay:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMaxCategories:(bool)arg1;
- (void)setHasMaxResultsPerCategory:(bool)arg1;
- (void)setMaxCategories:(unsigned int)arg1;
- (void)setMaxResultsPerCategory:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
