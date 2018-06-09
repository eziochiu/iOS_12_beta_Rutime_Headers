/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TICompositeMecabraCandidate : TIMecabraCandidate {
    NSArray * _autoconvertedCandidatePointerValues;
    NSString * _remainderCandidateString;
}

@property (nonatomic, copy) NSArray *autoconvertedCandidatePointerValues;
@property (nonatomic, copy) NSString *remainderCandidateString;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)autoconvertedCandidatePointerValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)remainderCandidateString;
- (void)setAutoconvertedCandidatePointerValues:(id)arg1;
- (void)setRemainderCandidateString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)initWithMecabraCandidate:(const void*)arg1 autoconvertedCandidates:(id)arg2;

@end
