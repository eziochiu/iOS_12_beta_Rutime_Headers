/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTextNoteContent : INNoteContent <NSCopying, NSSecureCoding> {
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *text;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)text;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (id)acs_cardSection;

@end
