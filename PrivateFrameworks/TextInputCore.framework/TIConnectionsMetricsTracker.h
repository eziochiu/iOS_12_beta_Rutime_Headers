/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIConnectionsMetricsTracker : NSObject {
    bool  _inputContextDidChange;
    PETGoalConversionEventTracker * _predictionEngagementTracker;
    PETScalarEventTracker * _textFieldEntryTracker;
}

@property bool inputContextDidChange;
@property (nonatomic, retain) PETGoalConversionEventTracker *predictionEngagementTracker;
@property (nonatomic, retain) PETScalarEventTracker *textFieldEntryTracker;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)inputContextDidChange;
- (bool)isIgnoredTrigger:(id)arg1;
- (id)predictionEngagementTracker;
- (void)setInputContextDidChange:(bool)arg1;
- (void)setPredictionEngagementTracker:(id)arg1;
- (void)setTextFieldEntryTracker:(id)arg1;
- (id)textFieldEntryTracker;
- (void)trackPredictionEngagmentWithConversion:(bool)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(bool)arg7 semantic:(bool)arg8;
- (void)trackTextFieldEntryWithEmpty:(bool)arg1 fieldType:(id)arg2 linguistic:(bool)arg3 semantic:(bool)arg4 requestType:(id)arg5;
- (void)trackTextFieldEntryWithEmpty:(bool)arg1 fieldType:(id)arg2 trigger:(id)arg3;

@end
