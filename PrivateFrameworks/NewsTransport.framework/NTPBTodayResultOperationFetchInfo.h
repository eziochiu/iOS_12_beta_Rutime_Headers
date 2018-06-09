/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {
    long long  _appConfigTreatmentIDInteger;
    long long  _cellularRadioAccessTechnology;
    NSData * _clickThroughRateByPersonalizationFeatureIDData;
    NSString * _contentStoreFrontID;
    struct { 
        unsigned int appConfigTreatmentIDInteger : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int onboardingVersion : 1; 
        unsigned int reachabilityStatus : 1; 
        unsigned int wifiReachable : 1; 
    }  _has;
    NSString * _localeIdentifier;
    long long  _onboardingVersion;
    long long  _reachabilityStatus;
    NSString * _todaySourceIdentifier;
    NSString * _userID;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _userSegmentationSegmentSetIds;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _userSegmentationTreatmentIds;
    NTPBTodayWidgetConfig * _widgetConfig;
    bool  _wifiReachable;
}

@property (nonatomic) long long appConfigTreatmentIDInteger;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic, retain) NSData *clickThroughRateByPersonalizationFeatureIDData;
@property (nonatomic, retain) NSString *contentStoreFrontID;
@property (nonatomic) bool hasAppConfigTreatmentIDInteger;
@property (nonatomic) bool hasCellularRadioAccessTechnology;
@property (nonatomic, readonly) bool hasClickThroughRateByPersonalizationFeatureIDData;
@property (nonatomic, readonly) bool hasContentStoreFrontID;
@property (nonatomic, readonly) bool hasLocaleIdentifier;
@property (nonatomic) bool hasOnboardingVersion;
@property (nonatomic) bool hasReachabilityStatus;
@property (nonatomic, readonly) bool hasTodaySourceIdentifier;
@property (nonatomic, readonly) bool hasUserID;
@property (nonatomic, readonly) bool hasWidgetConfig;
@property (nonatomic) bool hasWifiReachable;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic) long long onboardingVersion;
@property (nonatomic) long long reachabilityStatus;
@property (nonatomic, retain) NSString *todaySourceIdentifier;
@property (nonatomic, retain) NSString *userID;
@property (nonatomic, readonly) int*userSegmentationSegmentSetIds;
@property (nonatomic, readonly) unsigned long long userSegmentationSegmentSetIdsCount;
@property (nonatomic, readonly) long long*userSegmentationTreatmentIds;
@property (nonatomic, readonly) unsigned long long userSegmentationTreatmentIdsCount;
@property (nonatomic, retain) NTPBTodayWidgetConfig *widgetConfig;
@property (nonatomic) bool wifiReachable;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (void)addUserSegmentationSegmentSetIds:(int)arg1;
- (void)addUserSegmentationTreatmentIds:(long long)arg1;
- (long long)appConfigTreatmentIDInteger;
- (long long)cellularRadioAccessTechnology;
- (void)clearUserSegmentationSegmentSetIds;
- (void)clearUserSegmentationTreatmentIds;
- (id)clickThroughRateByPersonalizationFeatureIDData;
- (id)contentStoreFrontID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppConfigTreatmentIDInteger;
- (bool)hasCellularRadioAccessTechnology;
- (bool)hasClickThroughRateByPersonalizationFeatureIDData;
- (bool)hasContentStoreFrontID;
- (bool)hasLocaleIdentifier;
- (bool)hasOnboardingVersion;
- (bool)hasReachabilityStatus;
- (bool)hasTodaySourceIdentifier;
- (bool)hasUserID;
- (bool)hasWidgetConfig;
- (bool)hasWifiReachable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;
- (void)mergeFrom:(id)arg1;
- (long long)onboardingVersion;
- (long long)reachabilityStatus;
- (bool)readFrom:(id)arg1;
- (void)setAppConfigTreatmentIDInteger:(long long)arg1;
- (void)setCellularRadioAccessTechnology:(long long)arg1;
- (void)setClickThroughRateByPersonalizationFeatureIDData:(id)arg1;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setHasAppConfigTreatmentIDInteger:(bool)arg1;
- (void)setHasCellularRadioAccessTechnology:(bool)arg1;
- (void)setHasOnboardingVersion:(bool)arg1;
- (void)setHasReachabilityStatus:(bool)arg1;
- (void)setHasWifiReachable:(bool)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setOnboardingVersion:(long long)arg1;
- (void)setReachabilityStatus:(long long)arg1;
- (void)setTodaySourceIdentifier:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setWidgetConfig:(id)arg1;
- (void)setWifiReachable:(bool)arg1;
- (id)todaySourceIdentifier;
- (id)userID;
- (int*)userSegmentationSegmentSetIds;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userSegmentationSegmentSetIdsCount;
- (long long*)userSegmentationTreatmentIds;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userSegmentationTreatmentIdsCount;
- (id)widgetConfig;
- (bool)wifiReachable;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)CTRByPersonalizationFeatureID;
- (id)appConfigTreatmentID;
- (id)locale;
- (void)setAppConfigTreatmentID:(id)arg1;
- (void)setCTRByPersonalizationFeatureID:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setUserSegmentationSegmentSetIDs:(id)arg1;
- (void)setUserSegmentationTreatmentIDs:(id)arg1;

@end
