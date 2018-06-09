/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {
    int  _channelPickerPresentationReason;
    int  _countOfNotificationsSelected;
    bool  _fromPersonalizeNews;
    struct { 
        unsigned int channelPickerPresentationReason : 1; 
        unsigned int countOfNotificationsSelected : 1; 
        unsigned int onboardingScreenType : 1; 
        unsigned int previouslyCompletedOnboardingOsVersion : 1; 
        unsigned int userAction : 1; 
        unsigned int fromPersonalizeNews : 1; 
    }  _has;
    int  _onboardingScreenType;
    int  _previouslyCompletedOnboardingOsVersion;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    int  _userAction;
    NSString * _userActivityType;
}

@property (nonatomic) int channelPickerPresentationReason;
@property (nonatomic) int countOfNotificationsSelected;
@property (nonatomic) bool fromPersonalizeNews;
@property (nonatomic) bool hasChannelPickerPresentationReason;
@property (nonatomic) bool hasCountOfNotificationsSelected;
@property (nonatomic) bool hasFromPersonalizeNews;
@property (nonatomic) bool hasOnboardingScreenType;
@property (nonatomic) bool hasPreviouslyCompletedOnboardingOsVersion;
@property (nonatomic, readonly) bool hasReferringSourceApplication;
@property (nonatomic, readonly) bool hasReferringUrl;
@property (nonatomic) bool hasUserAction;
@property (nonatomic, readonly) bool hasUserActivityType;
@property (nonatomic) int onboardingScreenType;
@property (nonatomic) int previouslyCompletedOnboardingOsVersion;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic) int userAction;
@property (nonatomic, retain) NSString *userActivityType;

- (void).cxx_destruct;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;
- (int)channelPickerPresentationReason;
- (id)channelPickerPresentationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfNotificationsSelected;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fromPersonalizeNews;
- (bool)hasChannelPickerPresentationReason;
- (bool)hasCountOfNotificationsSelected;
- (bool)hasFromPersonalizeNews;
- (bool)hasOnboardingScreenType;
- (bool)hasPreviouslyCompletedOnboardingOsVersion;
- (bool)hasReferringSourceApplication;
- (bool)hasReferringUrl;
- (bool)hasUserAction;
- (bool)hasUserActivityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)onboardingScreenType;
- (int)previouslyCompletedOnboardingOsVersion;
- (bool)readFrom:(id)arg1;
- (id)referringSourceApplication;
- (id)referringUrl;
- (void)setChannelPickerPresentationReason:(int)arg1;
- (void)setCountOfNotificationsSelected:(int)arg1;
- (void)setFromPersonalizeNews:(bool)arg1;
- (void)setHasChannelPickerPresentationReason:(bool)arg1;
- (void)setHasCountOfNotificationsSelected:(bool)arg1;
- (void)setHasFromPersonalizeNews:(bool)arg1;
- (void)setHasOnboardingScreenType:(bool)arg1;
- (void)setHasPreviouslyCompletedOnboardingOsVersion:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setOnboardingScreenType:(int)arg1;
- (void)setPreviouslyCompletedOnboardingOsVersion:(int)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setUserAction:(int)arg1;
- (void)setUserActivityType:(id)arg1;
- (int)userAction;
- (id)userActivityType;
- (void)writeTo:(id)arg1;

@end
