/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying> {
    NSString * _languageTag;
    NSMutableArray * _trendingTopics;
}

@property (nonatomic, readonly) bool hasLanguageTag;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic, retain) NSMutableArray *trendingTopics;

+ (Class)trendingTopicsType;

- (void).cxx_destruct;
- (void)addTrendingTopics:(id)arg1;
- (void)clearTrendingTopics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageTag;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setTrendingTopics:(id)arg1;
- (id)trendingTopics;
- (id)trendingTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendingTopicsCount;
- (void)writeTo:(id)arg1;

@end
