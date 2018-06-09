/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationSerializableResults : NSObject <NSCopying, NSSecureCoding> {
    bool  _addTrailingSpace;
    bool  _allowsAlternatives;
    bool  _fromKeyboard;
    NSIndexPath * _indexPathOfInterpretations;
    NSArray * _phrases;
    const struct __CFString { } * _transform;
    bool  _useServerCapitalization;
}

@property (nonatomic) bool addTrailingSpace;
@property (nonatomic, readonly) bool allowsAlternatives;
@property (nonatomic) bool fromKeyboard;
@property (nonatomic, retain) NSIndexPath *indexPathOfInterpretations;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic) const struct __CFString { }*transform;
@property (nonatomic) bool useServerCapitalization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addTrailingSpace;
- (bool)allowsAlternatives;
- (id)bestResults;
- (id)bestText;
- (id)bestTextArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictationPhraseArray;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromKeyboard;
- (id)indexPathOfInterpretations;
- (id)init;
- (id)initWithArrayOfArrayOfStrings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1;
- (id)phrases;
- (void)setAddTrailingSpace:(bool)arg1;
- (void)setFromKeyboard:(bool)arg1;
- (void)setIndexPathOfInterpretations:(id)arg1;
- (void)setPhrases:(id)arg1;
- (void)setTransform:(struct __CFString { }*)arg1;
- (void)setUseServerCapitalization:(bool)arg1;
- (id)singleLineResult;
- (id)text;
- (id)textArray;
- (const struct __CFString { }*)transform;
- (bool)useServerCapitalization;

@end
