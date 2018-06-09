/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentMethod : NSObject <INCacheableContainer, INKeyImageProducing, NSCopying, NSSecureCoding> {
    INImage * _icon;
    NSString * _identificationHint;
    NSString * _name;
    long long  _type;
}

@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INImage *icon;
@property (nonatomic, readonly, copy) NSString *identificationHint;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)applePayPaymentMethod;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)identificationHint;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 identificationHint:(id)arg3 icon:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)type;

@end
