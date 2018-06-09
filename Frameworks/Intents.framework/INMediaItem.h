/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMediaItem : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {
    INImage * _artwork;
    NSString * _identifier;
    NSString * _title;
    long long  _type;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, copy) INImage *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)setArtwork:(id)arg1;
- (id)title;
- (long long)type;

@end
