/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtension : NSObject {
    NSString * _identifier;
    _MXExtensionProvider * _provider;
}

@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly, copy) NSSet *capabilities;
@property (nonatomic, readonly, copy) NSString *containingAppDisplayName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *infoDictionary;
@property (nonatomic) _MXExtensionProvider *provider;
@property (nonatomic, readonly) unsigned long long type;

+ (void)setShouldDeserializeCacheItems:(bool)arg1;
+ (bool)shouldDeserializeCacheItems;

- (void).cxx_destruct;
- (id)_containingAppIdentifer;
- (id)_iconForTableUI;
- (id)_iconWithFormat:(int)arg1;
- (bool)_isIntentExtension;
- (bool)_isMapsExtension;
- (void)_loadCacheItems:(id)arg1;
- (bool)_setEnabled:(bool)arg1 error:(id*)arg2;
- (id)attributes;
- (bool)canSupportIntent:(id)arg1;
- (bool)canSupportIntentClass:(Class)arg1;
- (id)capabilities;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(id /* block */)arg3;
- (id)containingAppDisplayName;
- (id)description;
- (id)displayName;
- (id)extension;
- (id)extensionPointIdentifier;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(id /* block */)arg3;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(id /* block */)arg3;
- (id)identifier;
- (id)infoDictionary;
- (id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2;
- (bool)isEnabled;
- (id)provider;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setProvider:(id)arg1;
- (id)siblingExtensions;
- (void)startExtensionServiceWithInputItems:(id)arg1 begin:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)startRideSharingSearchRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (unsigned long long)type;

@end
