/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int maxArticlesShown : 1; 
    }  _has;
    NSMutableArray * _mandatoryArticles;
    unsigned long long  _maxArticlesShown;
    NSMutableArray * _personalizedArticles;
}

@property (nonatomic) bool hasMaxArticlesShown;
@property (nonatomic, retain) NSMutableArray *mandatoryArticles;
@property (nonatomic) unsigned long long maxArticlesShown;
@property (nonatomic, retain) NSMutableArray *personalizedArticles;

+ (Class)mandatoryArticlesType;
+ (Class)personalizedArticlesType;

- (void)addMandatoryArticles:(id)arg1;
- (void)addPersonalizedArticles:(id)arg1;
- (void)clearMandatoryArticles;
- (void)clearPersonalizedArticles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxArticlesShown;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mandatoryArticles;
- (id)mandatoryArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mandatoryArticlesCount;
- (unsigned long long)maxArticlesShown;
- (void)mergeFrom:(id)arg1;
- (id)personalizedArticles;
- (id)personalizedArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizedArticlesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxArticlesShown:(bool)arg1;
- (void)setMandatoryArticles:(id)arg1;
- (void)setMaxArticlesShown:(unsigned long long)arg1;
- (void)setPersonalizedArticles:(id)arg1;
- (void)writeTo:(id)arg1;

@end
