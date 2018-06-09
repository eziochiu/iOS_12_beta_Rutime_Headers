/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordRefinements : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
    TIKeyboardState * _keyboardState;
    TIAutocorrectionList * _refinements;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIAutocorrectionList *refinements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)candidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (id)refinements;
- (void)setCandidate:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setRefinements:(id)arg1;
- (id)shortDescription;

@end
