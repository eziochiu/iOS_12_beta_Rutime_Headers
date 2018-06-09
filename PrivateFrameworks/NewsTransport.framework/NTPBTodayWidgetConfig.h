/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {
    NSData * _externalAnalyticsConfigurationsData;
    struct { 
        unsigned int minimumArticleExposureDurationToBePreseen : 1; 
        unsigned int prerollLoadingTimeout : 1; 
        unsigned int minimumNumberOfTimesPreseenToBeSeen : 1; 
    }  _has;
    long long  _minimumArticleExposureDurationToBePreseen;
    unsigned int  _minimumNumberOfTimesPreseenToBeSeen;
    double  _prerollLoadingTimeout;
    NSData * _videoGroupsConfigData;
}

@property (nonatomic, retain) NSData *externalAnalyticsConfigurationsData;
@property (nonatomic, readonly) bool hasExternalAnalyticsConfigurationsData;
@property (nonatomic) bool hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) bool hasPrerollLoadingTimeout;
@property (nonatomic, readonly) bool hasVideoGroupsConfigData;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) double prerollLoadingTimeout;
@property (nonatomic, retain) NSData *videoGroupsConfigData;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalAnalyticsConfigurationsData;
- (bool)hasExternalAnalyticsConfigurationsData;
- (bool)hasMinimumArticleExposureDurationToBePreseen;
- (bool)hasMinimumNumberOfTimesPreseenToBeSeen;
- (bool)hasPrerollLoadingTimeout;
- (bool)hasVideoGroupsConfigData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleExposureDurationToBePreseen;
- (unsigned int)minimumNumberOfTimesPreseenToBeSeen;
- (double)prerollLoadingTimeout;
- (bool)readFrom:(id)arg1;
- (void)setExternalAnalyticsConfigurationsData:(id)arg1;
- (void)setHasMinimumArticleExposureDurationToBePreseen:(bool)arg1;
- (void)setHasMinimumNumberOfTimesPreseenToBeSeen:(bool)arg1;
- (void)setHasPrerollLoadingTimeout:(bool)arg1;
- (void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1;
- (void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned int)arg1;
- (void)setPrerollLoadingTimeout:(double)arg1;
- (void)setVideoGroupsConfigData:(id)arg1;
- (id)videoGroupsConfigData;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)externalAnalyticsConfigurations;
- (void)setExternalAnalyticsConfigurations:(id)arg1;
- (void)setVideoGroupsConfig:(id)arg1;
- (id)videoGroupsConfig;

@end
