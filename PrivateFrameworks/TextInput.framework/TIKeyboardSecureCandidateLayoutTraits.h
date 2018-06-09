/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding> {
    bool  _forceSingleLineLayout;
    unsigned int  _headerInliningBehavior;
    TIKeyboardSecureCandidateTextTraits * _headerTraitsInFirstLine;
    TIKeyboardSecureCandidateTextTraits * _headerTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits * _inputTraitsInFirstAndSecondLines;
    TIKeyboardSecureCandidateTextTraits * _inputTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits * _inputTraitsInSecondLine;
}

@property (nonatomic) bool forceSingleLineLayout;
@property (nonatomic) unsigned int headerInliningBehavior;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine;
@property (nonatomic, retain) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceSingleLineLayout;
- (unsigned int)headerInliningBehavior;
- (id)headerTraitsInFirstLine;
- (id)headerTraitsInOnlyLine;
- (id)initWithCoder:(id)arg1;
- (id)inputTraitsInFirstAndSecondLines;
- (id)inputTraitsInOnlyLine;
- (id)inputTraitsInSecondLine;
- (bool)isEqual:(id)arg1;
- (void)setForceSingleLineLayout:(bool)arg1;
- (void)setHeaderInliningBehavior:(unsigned int)arg1;
- (void)setHeaderTraitsInFirstLine:(id)arg1;
- (void)setHeaderTraitsInOnlyLine:(id)arg1;
- (void)setInputTraitsInFirstAndSecondLines:(id)arg1;
- (void)setInputTraitsInOnlyLine:(id)arg1;
- (void)setInputTraitsInSecondLine:(id)arg1;

@end
