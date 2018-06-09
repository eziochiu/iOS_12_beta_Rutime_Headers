/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationSettingsScreenView : PBCodable <NSCopying> {
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _creativeId;
    struct { 
        unsigned int notificationSettingsScreenViewPresentationReason : 1; 
    }  _has;
    int  _notificationSettingsScreenViewPresentationReason;
}

@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasNotificationSettingsScreenViewPresentationReason;
@property (nonatomic) int notificationSettingsScreenViewPresentationReason;

- (void).cxx_destruct;
- (id)campaignId;
- (id)campaignType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCreativeId;
- (bool)hasNotificationSettingsScreenViewPresentationReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)notificationSettingsScreenViewPresentationReason;
- (bool)readFrom:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setHasNotificationSettingsScreenViewPresentationReason:(bool)arg1;
- (void)setNotificationSettingsScreenViewPresentationReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
