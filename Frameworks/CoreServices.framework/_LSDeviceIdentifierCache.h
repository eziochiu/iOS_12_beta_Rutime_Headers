/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDeviceIdentifierCache : NSObject {
    NSUUID * _advertiserIdentifier;
    struct NSDictionary { Class x1; } * _identifiers;
    NSDictionary * _perUserEntropy;
    NSObject<OS_dispatch_queue> * _queue;
    int  _saveFlag;
}

+ (id)sharedCache;

- (struct NSDictionary { Class x1; }*)allIdentifiersNotDispatched;
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)dealloc;
- (bool)deviceUnlockedSinceBoot;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (id)generateSomePerUserEntropyNotDispatched;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct NSMutableDictionary { Class x1; }*)identifiersOfTypeNotDispatched:(long long)arg1;
- (id)init;
- (void)save;

@end
