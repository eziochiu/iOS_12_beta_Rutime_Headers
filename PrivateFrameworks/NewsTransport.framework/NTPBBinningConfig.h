/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBBinningConfig : PBCodable <NSCopying> {
    double  _decreaseConsumptionThreshold;
    int  _defaultChannelBin;
    int  _defaultTopicBin;
    bool  _enabled;
    long long  _evaluationFrequency;
    struct { 
        unsigned int decreaseConsumptionThreshold : 1; 
        unsigned int evaluationFrequency : 1; 
        unsigned int historyLength : 1; 
        unsigned int increaseConsumptionThreshold : 1; 
        unsigned int minimumArticleCount : 1; 
        unsigned int defaultChannelBin : 1; 
        unsigned int defaultTopicBin : 1; 
        unsigned int enabled : 1; 
    }  _has;
    long long  _historyLength;
    double  _increaseConsumptionThreshold;
    long long  _minimumArticleCount;
}

@property (nonatomic) double decreaseConsumptionThreshold;
@property (nonatomic) int defaultChannelBin;
@property (nonatomic) int defaultTopicBin;
@property (nonatomic) bool enabled;
@property (nonatomic) long long evaluationFrequency;
@property (nonatomic) bool hasDecreaseConsumptionThreshold;
@property (nonatomic) bool hasDefaultChannelBin;
@property (nonatomic) bool hasDefaultTopicBin;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasEvaluationFrequency;
@property (nonatomic) bool hasHistoryLength;
@property (nonatomic) bool hasIncreaseConsumptionThreshold;
@property (nonatomic) bool hasMinimumArticleCount;
@property (nonatomic) long long historyLength;
@property (nonatomic) double increaseConsumptionThreshold;
@property (nonatomic) long long minimumArticleCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decreaseConsumptionThreshold;
- (int)defaultChannelBin;
- (int)defaultTopicBin;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (long long)evaluationFrequency;
- (bool)hasDecreaseConsumptionThreshold;
- (bool)hasDefaultChannelBin;
- (bool)hasDefaultTopicBin;
- (bool)hasEnabled;
- (bool)hasEvaluationFrequency;
- (bool)hasHistoryLength;
- (bool)hasIncreaseConsumptionThreshold;
- (bool)hasMinimumArticleCount;
- (unsigned long long)hash;
- (long long)historyLength;
- (double)increaseConsumptionThreshold;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleCount;
- (bool)readFrom:(id)arg1;
- (void)setDecreaseConsumptionThreshold:(double)arg1;
- (void)setDefaultChannelBin:(int)arg1;
- (void)setDefaultTopicBin:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEvaluationFrequency:(long long)arg1;
- (void)setHasDecreaseConsumptionThreshold:(bool)arg1;
- (void)setHasDefaultChannelBin:(bool)arg1;
- (void)setHasDefaultTopicBin:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasEvaluationFrequency:(bool)arg1;
- (void)setHasHistoryLength:(bool)arg1;
- (void)setHasIncreaseConsumptionThreshold:(bool)arg1;
- (void)setHasMinimumArticleCount:(bool)arg1;
- (void)setHistoryLength:(long long)arg1;
- (void)setIncreaseConsumptionThreshold:(double)arg1;
- (void)setMinimumArticleCount:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
