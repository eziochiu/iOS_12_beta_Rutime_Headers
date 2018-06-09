/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying> {
    NSMutableArray * _scores;
}

@property (nonatomic, retain) NSMutableArray *scores;

+ (Class)scoresType;

- (void).cxx_destruct;
- (void)addScores:(id)arg1;
- (void)clearScores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scores;
- (id)scoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoresCount;
- (void)setScores:(id)arg1;
- (void)writeTo:(id)arg1;

@end
