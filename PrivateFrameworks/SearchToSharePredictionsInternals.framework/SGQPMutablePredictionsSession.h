/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMutablePredictionsSession : NSObject {
    NSString * _abGroup;
    SGQPPrediction * _engagedPrediction;
    long long  _engagedPredictionPosition;
    NSArray * _generatedPredictions;
    NSString * _language;
    NSArray * _messagesInConversation;
    NSArray * _predictionsShown;
}

@property (readonly) NSString *abGroup;
@property (retain) SGQPPrediction *engagedPrediction;
@property long long engagedPredictionPosition;
@property (readonly) NSArray *generatedPredictions;
@property (readonly) NSString *language;
@property (readonly) NSArray *messagesInConversation;
@property (retain) NSArray *predictionsShown;

- (void).cxx_destruct;
- (id)abGroup;
- (void)clearEngagedPrediction;
- (id)engagedPrediction;
- (long long)engagedPredictionPosition;
- (id)generatedPredictions;
- (id)initWithPredictions:(id)arg1 messages:(id)arg2 language:(id)arg3 abGroup:(id)arg4;
- (id)language;
- (id)messagesInConversation;
- (id)predictionsShown;
- (void)setEngagedPrediction:(id)arg1;
- (void)setEngagedPredictionPosition:(long long)arg1;
- (void)setEngagedPredictionWithIdentifier:(id)arg1;
- (void)setPredictionsShown:(id)arg1;
- (void)setShowedPredictionsWithIdentifiers:(id)arg1;

@end
