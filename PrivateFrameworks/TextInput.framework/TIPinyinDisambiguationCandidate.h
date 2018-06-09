/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString * _label;
}

+ (id)candidateWithPinyinSyllable:(id)arg1;
+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinyinSyllable:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end
