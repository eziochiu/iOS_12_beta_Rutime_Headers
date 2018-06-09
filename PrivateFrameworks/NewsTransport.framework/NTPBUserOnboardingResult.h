/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUserOnboardingResult : PBCodable <NSCopying> {
    NSMutableArray * _channelIds;
    struct { 
        unsigned int resultType : 1; 
        unsigned int totalChannelSelections : 1; 
        unsigned int totalResets : 1; 
        unsigned int totalTopicSelections : 1; 
        unsigned int icloudAccountMatch : 1; 
        unsigned int sawEmailOptIn : 1; 
    }  _has;
    bool  _icloudAccountMatch;
    NSString * _onboardAbandonStage;
    int  _resultType;
    bool  _sawEmailOptIn;
    NSMutableArray * _topicIds;
    int  _totalChannelSelections;
    int  _totalResets;
    int  _totalTopicSelections;
}

@property (nonatomic, retain) NSMutableArray *channelIds;
@property (nonatomic) bool hasIcloudAccountMatch;
@property (nonatomic, readonly) bool hasOnboardAbandonStage;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool hasSawEmailOptIn;
@property (nonatomic) bool hasTotalChannelSelections;
@property (nonatomic) bool hasTotalResets;
@property (nonatomic) bool hasTotalTopicSelections;
@property (nonatomic) bool icloudAccountMatch;
@property (nonatomic, retain) NSString *onboardAbandonStage;
@property (nonatomic) int resultType;
@property (nonatomic) bool sawEmailOptIn;
@property (nonatomic, retain) NSMutableArray *topicIds;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) int totalResets;
@property (nonatomic) int totalTopicSelections;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (void).cxx_destruct;
- (void)addChannelId:(id)arg1;
- (void)addTopicId:(id)arg1;
- (id)channelIdAtIndex:(unsigned long long)arg1;
- (id)channelIds;
- (unsigned long long)channelIdsCount;
- (void)clearChannelIds;
- (void)clearTopicIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcloudAccountMatch;
- (bool)hasOnboardAbandonStage;
- (bool)hasResultType;
- (bool)hasSawEmailOptIn;
- (bool)hasTotalChannelSelections;
- (bool)hasTotalResets;
- (bool)hasTotalTopicSelections;
- (unsigned long long)hash;
- (bool)icloudAccountMatch;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)onboardAbandonStage;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (bool)sawEmailOptIn;
- (void)setChannelIds:(id)arg1;
- (void)setHasIcloudAccountMatch:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasSawEmailOptIn:(bool)arg1;
- (void)setHasTotalChannelSelections:(bool)arg1;
- (void)setHasTotalResets:(bool)arg1;
- (void)setHasTotalTopicSelections:(bool)arg1;
- (void)setIcloudAccountMatch:(bool)arg1;
- (void)setOnboardAbandonStage:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setSawEmailOptIn:(bool)arg1;
- (void)setTopicIds:(id)arg1;
- (void)setTotalChannelSelections:(int)arg1;
- (void)setTotalResets:(int)arg1;
- (void)setTotalTopicSelections:(int)arg1;
- (id)topicIdAtIndex:(unsigned long long)arg1;
- (id)topicIds;
- (unsigned long long)topicIdsCount;
- (int)totalChannelSelections;
- (int)totalResets;
- (int)totalTopicSelections;
- (void)writeTo:(id)arg1;

@end
