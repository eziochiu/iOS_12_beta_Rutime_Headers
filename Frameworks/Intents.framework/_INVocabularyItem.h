/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * __siriID;
    NSString * _string;
    NSString * _vocabularyIdentifier;
}

@property (setter=_setSiriID:, nonatomic, copy) NSUUID *_siriID;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryForSaving;
- (id)_initWithUncheckedSpeakable:(id)arg1;
- (id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)_initWithVocabularyItem:(id)arg1;
- (bool)_isSimilarEnoughToNotSync:(id)arg1;
- (void)_setSiriID:(id)arg1;
- (id)_siriID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeakable:(id)arg1;
- (id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)string;
- (unsigned long long)validate;
- (id)vocabularyIdentifier;

@end
