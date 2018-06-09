/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying> {
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _channelId;
    NSString * _creativeId;
    struct { 
        unsigned int notificationSubscribeUnsubscribeLocation : 1; 
        unsigned int userAction : 1; 
        unsigned int isPaidUserOfChannel : 1; 
    }  _has;
    bool  _isPaidUserOfChannel;
    int  _notificationSubscribeUnsubscribeLocation;
    int  _userAction;
}

@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic, readonly) bool hasChannelId;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasIsPaidUserOfChannel;
@property (nonatomic) bool hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) bool hasUserAction;
@property (nonatomic) bool isPaidUserOfChannel;
@property (nonatomic) int notificationSubscribeUnsubscribeLocation;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (id)campaignId;
- (id)campaignType;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasChannelId;
- (bool)hasCreativeId;
- (bool)hasIsPaidUserOfChannel;
- (bool)hasNotificationSubscribeUnsubscribeLocation;
- (bool)hasUserAction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPaidUserOfChannel;
- (void)mergeFrom:(id)arg1;
- (int)notificationSubscribeUnsubscribeLocation;
- (bool)readFrom:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setHasIsPaidUserOfChannel:(bool)arg1;
- (void)setHasNotificationSubscribeUnsubscribeLocation:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setIsPaidUserOfChannel:(bool)arg1;
- (void)setNotificationSubscribeUnsubscribeLocation:(int)arg1;
- (void)setUserAction:(int)arg1;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
