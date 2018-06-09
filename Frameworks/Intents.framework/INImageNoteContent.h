/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImageNoteContent : INNoteContent <INCacheableContainer, NSCopying, NSSecureCoding> {
    INImage * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INImage *image;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithImage:(id)arg1;
- (id)_intents_cacheableObjects;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (id)acs_cardSection;

@end
