/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INObject : NSObject <INSpeakable, NSCopying, NSSecureCoding> {
    NSString * _displayString;
    NSString * _identifier;
    NSString * _pronunciationHint;
}

@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)alternativeSpeakableMatches;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)pronunciationHint;
- (id)spokenPhrase;
- (id)vocabularyIdentifier;

@end
