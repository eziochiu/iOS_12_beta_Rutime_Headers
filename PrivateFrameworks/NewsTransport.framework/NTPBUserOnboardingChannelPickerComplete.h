/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying> {
    NSMutableArray * _channelIds;
    int  _channelPickerPresentationReason;
    bool  _fromPersonalizeNews;
    struct { 
        unsigned int channelPickerPresentationReason : 1; 
        unsigned int totalChannelSelections : 1; 
        unsigned int totalTopicSelections : 1; 
        unsigned int fromPersonalizeNews : 1; 
    }  _has;
    NSMutableArray * _topicIds;
    int  _totalChannelSelections;
    int  _totalTopicSelections;
}

@property (nonatomic, retain) NSMutableArray *channelIds;
@property (nonatomic) int channelPickerPresentationReason;
@property (nonatomic) bool fromPersonalizeNews;
@property (nonatomic) bool hasChannelPickerPresentationReason;
@property (nonatomic) bool hasFromPersonalizeNews;
@property (nonatomic) bool hasTotalChannelSelections;
@property (nonatomic) bool hasTotalTopicSelections;
@property (nonatomic, retain) NSMutableArray *topicIds;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) int totalTopicSelections;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (void).cxx_destruct;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;
- (void)addChannelId:(id)arg1;
- (void)addTopicId:(id)arg1;
- (id)channelIdAtIndex:(unsigned long long)arg1;
- (id)channelIds;
- (unsigned long long)channelIdsCount;
- (int)channelPickerPresentationReason;
- (id)channelPickerPresentationReasonAsString:(int)arg1;
- (void)clearChannelIds;
- (void)clearTopicIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fromPersonalizeNews;
- (bool)hasChannelPickerPresentationReason;
- (bool)hasFromPersonalizeNews;
- (bool)hasTotalChannelSelections;
- (bool)hasTotalTopicSelections;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelIds:(id)arg1;
- (void)setChannelPickerPresentationReason:(int)arg1;
- (void)setFromPersonalizeNews:(bool)arg1;
- (void)setHasChannelPickerPresentationReason:(bool)arg1;
- (void)setHasFromPersonalizeNews:(bool)arg1;
- (void)setHasTotalChannelSelections:(bool)arg1;
- (void)setHasTotalTopicSelections:(bool)arg1;
- (void)setTopicIds:(id)arg1;
- (void)setTotalChannelSelections:(int)arg1;
- (void)setTotalTopicSelections:(int)arg1;
- (id)topicIdAtIndex:(unsigned long long)arg1;
- (id)topicIds;
- (unsigned long long)topicIdsCount;
- (int)totalChannelSelections;
- (int)totalTopicSelections;
- (void)writeTo:(id)arg1;

@end
