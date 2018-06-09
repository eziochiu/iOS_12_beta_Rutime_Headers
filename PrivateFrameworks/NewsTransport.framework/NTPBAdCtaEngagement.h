/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAdCtaEngagement : PBCodable <NSCopying> {
    int  _adCreativeType;
    int  _adCtaEngagemetType;
    int  _adEngagementType;
    NSString * _adImpressionId;
    int  _adLocation;
    int  _adType;
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int videoAdDuration : 1; 
        unsigned int videoAdPlayTime : 1; 
        unsigned int adCreativeType : 1; 
        unsigned int adCtaEngagemetType : 1; 
        unsigned int adEngagementType : 1; 
        unsigned int adLocation : 1; 
        unsigned int adType : 1; 
        unsigned int feedType : 1; 
        unsigned int newsProductType : 1; 
        unsigned int videoAdPlacementPosition : 1; 
        unsigned int videoAdType : 1; 
        unsigned int videoAdViewComplete : 1; 
    }  _has;
    NSString * _iadAd;
    NSString * _iadCampaign;
    NSString * _iadLine;
    int  _newsProductType;
    NSString * _sourceChannelId;
    long long  _videoAdDuration;
    int  _videoAdPlacementPosition;
    long long  _videoAdPlayTime;
    int  _videoAdType;
    bool  _videoAdViewComplete;
}

@property (nonatomic) int adCreativeType;
@property (nonatomic) int adCtaEngagemetType;
@property (nonatomic) int adEngagementType;
@property (nonatomic, retain) NSString *adImpressionId;
@property (nonatomic) int adLocation;
@property (nonatomic) int adType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) bool hasAdCreativeType;
@property (nonatomic) bool hasAdCtaEngagemetType;
@property (nonatomic) bool hasAdEngagementType;
@property (nonatomic, readonly) bool hasAdImpressionId;
@property (nonatomic) bool hasAdLocation;
@property (nonatomic) bool hasAdType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic, readonly) bool hasIadAd;
@property (nonatomic, readonly) bool hasIadCampaign;
@property (nonatomic, readonly) bool hasIadLine;
@property (nonatomic) bool hasNewsProductType;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasVideoAdDuration;
@property (nonatomic) bool hasVideoAdPlacementPosition;
@property (nonatomic) bool hasVideoAdPlayTime;
@property (nonatomic) bool hasVideoAdType;
@property (nonatomic) bool hasVideoAdViewComplete;
@property (nonatomic, retain) NSString *iadAd;
@property (nonatomic, retain) NSString *iadCampaign;
@property (nonatomic, retain) NSString *iadLine;
@property (nonatomic) int newsProductType;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) long long videoAdDuration;
@property (nonatomic) int videoAdPlacementPosition;
@property (nonatomic) long long videoAdPlayTime;
@property (nonatomic) int videoAdType;
@property (nonatomic) bool videoAdViewComplete;

- (void).cxx_destruct;
- (int)StringAsAdCreativeType:(id)arg1;
- (int)StringAsAdEngagementType:(id)arg1;
- (int)StringAsAdLocation:(id)arg1;
- (int)StringAsAdType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsNewsProductType:(id)arg1;
- (int)StringAsVideoAdType:(id)arg1;
- (int)adCreativeType;
- (id)adCreativeTypeAsString:(int)arg1;
- (int)adCtaEngagemetType;
- (int)adEngagementType;
- (id)adEngagementTypeAsString:(int)arg1;
- (id)adImpressionId;
- (int)adLocation;
- (id)adLocationAsString:(int)arg1;
- (int)adType;
- (id)adTypeAsString:(int)arg1;
- (id)articleId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (bool)hasAdCreativeType;
- (bool)hasAdCtaEngagemetType;
- (bool)hasAdEngagementType;
- (bool)hasAdImpressionId;
- (bool)hasAdLocation;
- (bool)hasAdType;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (bool)hasIadAd;
- (bool)hasIadCampaign;
- (bool)hasIadLine;
- (bool)hasNewsProductType;
- (bool)hasSourceChannelId;
- (bool)hasVideoAdDuration;
- (bool)hasVideoAdPlacementPosition;
- (bool)hasVideoAdPlayTime;
- (bool)hasVideoAdType;
- (bool)hasVideoAdViewComplete;
- (unsigned long long)hash;
- (id)iadAd;
- (id)iadCampaign;
- (id)iadLine;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newsProductType;
- (id)newsProductTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdCreativeType:(int)arg1;
- (void)setAdCtaEngagemetType:(int)arg1;
- (void)setAdEngagementType:(int)arg1;
- (void)setAdImpressionId:(id)arg1;
- (void)setAdLocation:(int)arg1;
- (void)setAdType:(int)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasAdCreativeType:(bool)arg1;
- (void)setHasAdCtaEngagemetType:(bool)arg1;
- (void)setHasAdEngagementType:(bool)arg1;
- (void)setHasAdLocation:(bool)arg1;
- (void)setHasAdType:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasNewsProductType:(bool)arg1;
- (void)setHasVideoAdDuration:(bool)arg1;
- (void)setHasVideoAdPlacementPosition:(bool)arg1;
- (void)setHasVideoAdPlayTime:(bool)arg1;
- (void)setHasVideoAdType:(bool)arg1;
- (void)setHasVideoAdViewComplete:(bool)arg1;
- (void)setIadAd:(id)arg1;
- (void)setIadCampaign:(id)arg1;
- (void)setIadLine:(id)arg1;
- (void)setNewsProductType:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setVideoAdDuration:(long long)arg1;
- (void)setVideoAdPlacementPosition:(int)arg1;
- (void)setVideoAdPlayTime:(long long)arg1;
- (void)setVideoAdType:(int)arg1;
- (void)setVideoAdViewComplete:(bool)arg1;
- (id)sourceChannelId;
- (long long)videoAdDuration;
- (int)videoAdPlacementPosition;
- (long long)videoAdPlayTime;
- (int)videoAdType;
- (id)videoAdTypeAsString:(int)arg1;
- (bool)videoAdViewComplete;
- (void)writeTo:(id)arg1;

@end
