/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSystemBuilder : NSObject <HMFLogging> {
    NSString * _builderSessionID;
    NSArray * _components;
    HMThreadSafeMutableArrayCollection * _componentsArray;
    NSString * _configuredName;
    _HMContext * _context;
    HMHome * _home;
    HMMediaSystem * _mediaSystem;
    NSUUID * _mediaSystemUUID;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSString *builderSessionID;
@property (nonatomic, retain) NSArray *components;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *componentsArray;
@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (nonatomic, readonly) NSUUID *mediaSystemUUID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)canSupportMediaSystem:(id)arg1;
+ (id)logCategory;
+ (bool)supportsMediaSystem:(id)arg1;

- (void).cxx_destruct;
- (void)_callCompletion:(id /* block */)arg1 builderSessionID:(id)arg2 error:(id)arg3 response:(id)arg4;
- (void)_commitWithCompletionHandler:(id /* block */)arg1;
- (id)_initializeContext;
- (id)builderSessionID;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)components;
- (id)componentsArray;
- (id)configuredName;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithMediaSystem:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystem;
- (id)mediaSystemUUID;
- (id)name;
- (id)propertyQueue;
- (void)setBuilderSessionID:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponentsArray:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setName:(id)arg1;
- (id)uuid;

@end
