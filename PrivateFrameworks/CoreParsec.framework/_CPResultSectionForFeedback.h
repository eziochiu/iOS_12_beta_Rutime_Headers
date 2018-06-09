/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultSectionForFeedback : PBCodable <NSSecureCoding, _CPResultSectionForFeedback> {
    NSString * _bundleIdentifier;
    NSData * _fallbackResultSection;
    NSString * _identifier;
    double  _rankingScore;
    NSArray * _results;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fallbackResultSection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double rankingScore;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)bundleIdentifier;
- (void)clearResults;
- (id)dictionaryRepresentation;
- (id)fallbackResultSection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)rankingScore;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFallbackResultSection:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
