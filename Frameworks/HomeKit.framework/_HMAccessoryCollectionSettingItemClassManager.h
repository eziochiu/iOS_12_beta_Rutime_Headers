/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    NSMutableDictionary * _classes;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

+ (id)defaultItemValueClasses;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (id)propertyQueue;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

@end
