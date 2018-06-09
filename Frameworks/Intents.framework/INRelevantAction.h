/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRelevantAction : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    INIntent * _intent;
    NSOrderedSet * _relevanceProviders;
    NSUserActivity * _userActivity;
    INDefaultCardTemplate * _watchTemplate;
}

@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) INIntent *intent;
@property (nonatomic, copy) NSOrderedSet *relevanceProviders;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, copy) INDefaultCardTemplate *watchTemplate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)intent;
- (id)relevanceProviders;
- (void)setIdentifier:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setRelevanceProviders:(id)arg1;
- (void)setWatchTemplate:(id)arg1;
- (id)userActivity;
- (id)watchTemplate;

@end
