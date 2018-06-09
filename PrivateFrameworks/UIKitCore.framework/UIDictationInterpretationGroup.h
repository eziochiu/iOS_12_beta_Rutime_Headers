/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding> {
    NSArray * _interpretations;
}

@property (nonatomic, readonly) double bestConfidenceScore;
@property (nonatomic, readonly) UIDictationInterpretation *bestInterpretation;
@property (nonatomic, readonly) NSArray *interpretations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)bestConfidenceScore;
- (id)bestInterpretation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1;
- (id)interpretations;

@end
