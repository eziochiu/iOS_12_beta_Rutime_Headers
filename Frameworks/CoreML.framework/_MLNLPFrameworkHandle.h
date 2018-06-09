/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLNLPFrameworkHandle : NSObject {
    int (* _NLPClassifierModelCopyPredictedLabelForTextImpl;
    int (* _NLPClassifierModelCreateWithDataImpl;
    int (* _NLPClassifierModelGetCurrentRevisionImpl;
    int (* _NLPClassifierModelGetRevisionImpl;
    int (* _NLPClassifierModelIsRevisionSupportedImpl;
    int (* _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
    int (* _NLPSequenceModelCreateWithDataImpl;
    int (* _NLPSequenceModelGetCurrentRevisionImpl;
    int (* _NLPSequenceModelGetRevisionImpl;
    int (* _NLPSequenceModelIsRevisionSupportedImpl;
    bool  _valid;
}

@property (nonatomic, readonly) int (*NLPClassifierModelCopyPredictedLabelForTextImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelIsRevisionSupportedImpl;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)sharedHandle;

- (int (*)NLPClassifierModelCopyPredictedLabelForTextImpl;
- (int (*)NLPClassifierModelCreateWithDataImpl;
- (int (*)NLPClassifierModelGetCurrentRevisionImpl;
- (int (*)NLPClassifierModelGetRevisionImpl;
- (int (*)NLPClassifierModelIsRevisionSupportedImpl;
- (int (*)NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
- (int (*)NLPSequenceModelCreateWithDataImpl;
- (int (*)NLPSequenceModelGetCurrentRevisionImpl;
- (int (*)NLPSequenceModelGetRevisionImpl;
- (int (*)NLPSequenceModelIsRevisionSupportedImpl;
- (id)init;
- (const void*)initializeSentenceClassifierModelWithData:(id)arg1 error:(id*)arg2;
- (const void*)initializeWordTaggingModelWithData:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)predictLabelsForSentenceString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;
- (id)predictTokensLabelsLocationsLengthsForString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;

@end
