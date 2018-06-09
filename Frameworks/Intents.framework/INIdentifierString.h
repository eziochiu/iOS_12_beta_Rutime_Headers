/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIdentifierString : NSObject <INSpeakable, NSCopying, NSSecureCoding, _INSpeakable> {
    NSString * _identifier;
    NSString * _string;
}

@property (setter=_setIdentifier:, copy) NSString *_identifier;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) NSArray *spokenPhrases;
@property (nonatomic, retain) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_effectiveNSStringValue;
- (id)_identifier;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (id)alternativeSpeakableMatches;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 string:(id)arg2;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pronunciationHint;
- (void)setString:(id)arg1;
- (id)spokenPhrase;
- (id)spokenPhrases;
- (id)string;
- (id)strings;
- (id)vocabularyIdentifier;

@end
