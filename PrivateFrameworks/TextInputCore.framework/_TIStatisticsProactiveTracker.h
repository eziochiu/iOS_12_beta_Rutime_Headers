/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface _TIStatisticsProactiveTracker : NSObject {
    PETScalarEventTracker * _engagementCategoryEventDescriptionTracker;
    PETScalarEventTracker * _engagementEventDescriptionTracker;
    PETScalarEventTracker * _failureCategoryEventDescriptionTracker;
    PETScalarEventTracker * _failureCategoryEventTracker;
    PETScalarEventTracker * _failureEventDescriptionTracker;
    PETScalarEventTracker * _failureEventTracker;
    TIAutocorrectionList * _lastAutocorrectionList;
    PETScalarEventTracker * _personalizationEngagementTracker;
    PETScalarEventTracker * _personalizationOfferTracker;
    PETScalarEventTracker * _personalizationWordAcceptanceTracker;
    TIKeyboardCandidate * _responseKitEntryOffered;
    PETScalarEventTracker * _selectedCategoryEventTracker;
    PETScalarEventTracker * _selectedEventTracker;
    PETScalarEventTracker * _suggestedCategoryEventTracker;
    PETScalarEventTracker * _suggestedEventTracker;
    PETDistributionEventTracker * _timeInPredictionBarCategoryEventTracker;
    PETDistributionEventTracker * _timeInPredictionBarEventTracker;
    PETScalarEventTracker * _triggeredCategoryEventTracker;
    PETScalarEventTracker * _triggeredEventTracker;
}

@property (nonatomic, retain) PETScalarEventTracker *engagementCategoryEventDescriptionTracker;
@property (nonatomic, retain) PETScalarEventTracker *engagementEventDescriptionTracker;
@property (nonatomic, retain) PETScalarEventTracker *failureCategoryEventDescriptionTracker;
@property (nonatomic, retain) PETScalarEventTracker *failureCategoryEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *failureEventDescriptionTracker;
@property (nonatomic, retain) PETScalarEventTracker *failureEventTracker;
@property (nonatomic, retain) TIAutocorrectionList *lastAutocorrectionList;
@property (nonatomic, retain) PETScalarEventTracker *personalizationEngagementTracker;
@property (nonatomic, retain) PETScalarEventTracker *personalizationOfferTracker;
@property (nonatomic, retain) PETScalarEventTracker *personalizationWordAcceptanceTracker;
@property (nonatomic, retain) TIKeyboardCandidate *responseKitEntryOffered;
@property (nonatomic, retain) PETScalarEventTracker *selectedCategoryEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *selectedEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *suggestedCategoryEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *suggestedEventTracker;
@property (nonatomic, retain) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker;
@property (nonatomic, retain) PETDistributionEventTracker *timeInPredictionBarEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *triggeredCategoryEventTracker;
@property (nonatomic, retain) PETScalarEventTracker *triggeredEventTracker;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)engagementCategoryEventDescriptionTracker;
- (id)engagementEventDescriptionTracker;
- (id)failureCategoryEventDescriptionTracker;
- (id)failureCategoryEventTracker;
- (id)failureEventDescriptionTracker;
- (id)failureEventTracker;
- (id)init;
- (id)lastAutocorrectionList;
- (id)personalizationEngagementTracker;
- (id)personalizationOfferTracker;
- (id)personalizationWordAcceptanceTracker;
- (id)responseKitEntryOffered;
- (id)selectedCategoryEventTracker;
- (id)selectedEventTracker;
- (void)setEngagementCategoryEventDescriptionTracker:(id)arg1;
- (void)setEngagementEventDescriptionTracker:(id)arg1;
- (void)setFailureCategoryEventDescriptionTracker:(id)arg1;
- (void)setFailureCategoryEventTracker:(id)arg1;
- (void)setFailureEventDescriptionTracker:(id)arg1;
- (void)setFailureEventTracker:(id)arg1;
- (void)setLastAutocorrectionList:(id)arg1;
- (void)setPersonalizationEngagementTracker:(id)arg1;
- (void)setPersonalizationOfferTracker:(id)arg1;
- (void)setPersonalizationWordAcceptanceTracker:(id)arg1;
- (void)setResponseKitEntryOffered:(id)arg1;
- (void)setSelectedCategoryEventTracker:(id)arg1;
- (void)setSelectedEventTracker:(id)arg1;
- (void)setSuggestedCategoryEventTracker:(id)arg1;
- (void)setSuggestedEventTracker:(id)arg1;
- (void)setTimeInPredictionBarCategoryEventTracker:(id)arg1;
- (void)setTimeInPredictionBarEventTracker:(id)arg1;
- (void)setTriggeredCategoryEventTracker:(id)arg1;
- (void)setTriggeredEventTracker:(id)arg1;
- (id)suggestedCategoryEventTracker;
- (id)suggestedEventTracker;
- (id)timeInPredictionBarCategoryEventTracker;
- (id)timeInPredictionBarEventTracker;
- (void)trackEngagementFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackFailureWithSource:(unsigned char)arg1 reason:(unsigned char)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackPredictionTimeWithSource:(unsigned char)arg1 time:(double)arg2 selected:(bool)arg3 categories:(id)arg4 locale:(id)arg5 fieldType:(id)arg6;
- (void)trackSelectedWithSource:(unsigned char)arg1 position:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackSuggestedWithSource:(unsigned char)arg1 count:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackTriggeredWithSource:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4;
- (id)triggeredCategoryEventTracker;
- (id)triggeredEventTracker;

@end
