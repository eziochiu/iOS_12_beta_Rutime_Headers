/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeMetrics : NSObject {
    SGMContactDetailExtraction * _contactDetailExtraction;
    SGMContactDetailSent * _contactDetailSent;
}

@property (nonatomic, retain) SGMContactDetailExtraction *contactDetailExtraction;
@property (nonatomic, retain) SGMContactDetailSent *contactDetailSent;

+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_ { unsigned long long x1; })arg1 foundInSignature:(bool)arg2 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg3 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg4 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x1; })arg5;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg2 fromEntity:(id)arg3 foundInSignature:(bool)arg4 detailType:(unsigned long long)arg5 detailValue:(id)arg6;
+ (id)instance;
+ (id)nameForDataDetectorMatch:(id)arg1 withValue:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2 foundInSignature:(bool)arg3 detection:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2 foundInSignature:(bool)arg3 match:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2 foundInSignature:(bool)arg3 match:(id)arg4 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x1; })arg5;
+ (void)recordSentContactDetailWithEntity:(id)arg1 match:(id)arg2 found:(struct SGMContactDetailFoundIn_ { unsigned long long x1; })arg3;
+ (id)tokenizeMessageContent:(id)arg1;

- (void).cxx_destruct;
- (id)contactDetailExtraction;
- (id)contactDetailSent;
- (id)init;
- (void)setContactDetailExtraction:(id)arg1;
- (void)setContactDetailSent:(id)arg1;

@end
