/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRelevantShortcut : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {
    NSArray * _relevanceProviders;
    INShortcut * _shortcut;
    INDefaultCardTemplate * _watchTemplate;
}

@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *relevanceProviders;
@property (nonatomic, copy) INShortcut *shortcut;
@property (readonly) Class superclass;
@property (nonatomic, copy) INDefaultCardTemplate *watchTemplate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcut:(id)arg1;
- (id)relevanceProviders;
- (void)setRelevanceProviders:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setWatchTemplate:(id)arg1;
- (id)shortcut;
- (id)watchTemplate;

@end
