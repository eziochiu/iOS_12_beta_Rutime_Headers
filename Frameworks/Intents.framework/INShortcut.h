/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INShortcut : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {
    INImage * _activityImage;
    INIntent * _intent;
    NSUserActivity * _userActivity;
}

@property (readonly) INImage *_keyImage;
@property (nonatomic, copy) INImage *activityImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INIntent *intent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)activityImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)setIntent:(id)arg1;
- (id)userActivity;

@end
