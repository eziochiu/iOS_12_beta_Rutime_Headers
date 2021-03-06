/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBillPayee : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    INSpeakableString * _nickname;
    INSpeakableString * _organizationName;
}

@property (nonatomic, readonly, copy) NSString *accountNumber;
@property (nonatomic, readonly, copy) INSpeakableString *nickname;
@property (nonatomic, readonly, copy) INSpeakableString *organizationName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNickname:(id)arg1 number:(id)arg2 organizationName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nickname;
- (id)organizationName;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (id)acs_formattedPayeeName;

@end
