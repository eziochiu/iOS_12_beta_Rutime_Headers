/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPEventScorer : NSObject {
    NSObject * _coreRoutineManager;
    double  _earliestStartTime;
    EAEmailAddressSet * _emailVIPEmailAddresses;
    NSSet * _favoritesEmailAddresses;
    NSDictionary * _pastEventTitlesAndParticipants;
    int  _rankingOptions;
    bool  _shouldConsiderAlarms;
}

+ (void)clearAssetCache;
+ (double)earliestStartTimeFromEvents:(id)arg1;
+ (id)emailAddressFromEKAttendee:(id)arg1;
+ (id)eventTitlesFromEvents:(id)arg1;
+ (id)extraordinaryThresholdConfig;
+ (id)participantsFromEvents:(id)arg1;
+ (id)participantsInEvent:(id)arg1;
+ (bool)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2;
+ (bool)shouldConsiderAlarms:(id)arg1;

- (void).cxx_destruct;
- (id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)arg1;
- (id)emailVIPEmailAddresses;
- (id)favoriteEmailAddresses;
- (id)init;
- (id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(bool)arg3 withOptions:(int)arg4;
- (id)initWithRoutineManager:(id)arg1 initWithPastEventTitlesAndParticipants:(id)arg2 earliestStartTime:(double)arg3 shouldConsiderAlarms:(bool)arg4 withOptions:(int)arg5;
- (bool)isHomeCalendar:(id)arg1;
- (bool)isWorkCalendar:(id)arg1;
- (id)scoreAlarmIsSet:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreAttachments:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreAvailabilityStatus:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreCalendar:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreContentModifications:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreCoreRoutine:(id)arg1 usingDate:(id)arg2 withFeatureSchema:(id)arg3;
- (id)scoreDuration:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreEvent:(id)arg1 usingDate:(id)arg2;
- (id)scoreParticipantStatusAndCount:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreParticipantsInEmailVIPAndFavorites:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreParticipantsInPast:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreRecurrenceRules:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreSelfAttendeeRole:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreSuggestionsInfo:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreTitle:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreTravelTimeSet:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreUnusualStartTime:(id)arg1 withFeatureSchema:(id)arg2;
- (void)setEmailVIPEmailAddresses:(id)arg1;
- (void)setFavoritesEmailAddresses:(id)arg1;

@end
