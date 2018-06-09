/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying> {
    NSString * _adCreativeId;
    int  _adCreativeType;
    long long  _adErrorCode;
    NSString * _adOpportunityId;
    NSString * _adSlotId;
    int  _adType;
    NSData * _articleViewingSessionId;
    int  _durationInFeed;
    int  _errorCode;
    NSString * _eventId;
    int  _exposureLocationType;
    NSString * _exposureLocationTypeId;
    int  _feedType;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int adErrorCode : 1; 
        unsigned int adCreativeType : 1; 
        unsigned int adType : 1; 
        unsigned int durationInFeed : 1; 
        unsigned int errorCode : 1; 
        unsigned int exposureLocationType : 1; 
        unsigned int feedType : 1; 
        unsigned int responseTime : 1; 
        unsigned int screenfulsFromTop : 1; 
        unsigned int isExpanded : 1; 
        unsigned int isFilled : 1; 
        unsigned int isViewable : 1; 
    }  _has;
    bool  _isExpanded;
    bool  _isFilled;
    bool  _isViewable;
    int  _responseTime;
    int  _screenfulsFromTop;
}

@property (nonatomic, retain) NSString *adCreativeId;
@property (nonatomic) int adCreativeType;
@property (nonatomic) long long adErrorCode;
@property (nonatomic, retain) NSString *adOpportunityId;
@property (nonatomic, retain) NSString *adSlotId;
@property (nonatomic) int adType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int durationInFeed;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *eventId;
@property (nonatomic) int exposureLocationType;
@property (nonatomic, retain) NSString *exposureLocationTypeId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, readonly) bool hasAdCreativeId;
@property (nonatomic) bool hasAdCreativeType;
@property (nonatomic) bool hasAdErrorCode;
@property (nonatomic, readonly) bool hasAdOpportunityId;
@property (nonatomic, readonly) bool hasAdSlotId;
@property (nonatomic) bool hasAdType;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasDurationInFeed;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic) bool hasExposureLocationType;
@property (nonatomic, readonly) bool hasExposureLocationTypeId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasIsExpanded;
@property (nonatomic) bool hasIsFilled;
@property (nonatomic) bool hasIsViewable;
@property (nonatomic) bool hasResponseTime;
@property (nonatomic) bool hasScreenfulsFromTop;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool isFilled;
@property (nonatomic) bool isViewable;
@property (nonatomic) int responseTime;
@property (nonatomic) int screenfulsFromTop;

- (void).cxx_destruct;
- (int)StringAsAdCreativeType:(id)arg1;
- (int)StringAsAdType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (id)adCreativeId;
- (int)adCreativeType;
- (id)adCreativeTypeAsString:(int)arg1;
- (long long)adErrorCode;
- (id)adOpportunityId;
- (id)adSlotId;
- (int)adType;
- (id)adTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)durationInFeed;
- (int)errorCode;
- (id)eventId;
- (int)exposureLocationType;
- (id)exposureLocationTypeId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (bool)hasAdCreativeId;
- (bool)hasAdCreativeType;
- (bool)hasAdErrorCode;
- (bool)hasAdOpportunityId;
- (bool)hasAdSlotId;
- (bool)hasAdType;
- (bool)hasArticleViewingSessionId;
- (bool)hasDurationInFeed;
- (bool)hasErrorCode;
- (bool)hasEventId;
- (bool)hasExposureLocationType;
- (bool)hasExposureLocationTypeId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (bool)hasIsExpanded;
- (bool)hasIsFilled;
- (bool)hasIsViewable;
- (bool)hasResponseTime;
- (bool)hasScreenfulsFromTop;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExpanded;
- (bool)isFilled;
- (bool)isViewable;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseTime;
- (int)screenfulsFromTop;
- (void)setAdCreativeId:(id)arg1;
- (void)setAdCreativeType:(int)arg1;
- (void)setAdErrorCode:(long long)arg1;
- (void)setAdOpportunityId:(id)arg1;
- (void)setAdSlotId:(id)arg1;
- (void)setAdType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setDurationInFeed:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setEventId:(id)arg1;
- (void)setExposureLocationType:(int)arg1;
- (void)setExposureLocationTypeId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasAdCreativeType:(bool)arg1;
- (void)setHasAdErrorCode:(bool)arg1;
- (void)setHasAdType:(bool)arg1;
- (void)setHasDurationInFeed:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasExposureLocationType:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasIsExpanded:(bool)arg1;
- (void)setHasIsFilled:(bool)arg1;
- (void)setHasIsViewable:(bool)arg1;
- (void)setHasResponseTime:(bool)arg1;
- (void)setHasScreenfulsFromTop:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsFilled:(bool)arg1;
- (void)setIsViewable:(bool)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setScreenfulsFromTop:(int)arg1;
- (void)writeTo:(id)arg1;

@end
