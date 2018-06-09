/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTempEventStoreFactory : NSObject

+ (void)_createEmptyDirectory:(id)arg1;
+ (void)_makeEmptyDBInDirectory:(id)arg1;
+ (void)_setupCoreDataInDirectory:(id)arg1;
+ (int)_storeTypeForTestBackingStoreType:(long long)arg1;
+ (id)_tempBase;
+ (id)createEventStoreWithType:(long long)arg1;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id*)arg3 forDirectory:(id*)arg4;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id*)arg3 forDirectory:(id*)arg4 existingPath:(id)arg5;
+ (void)createTempCalendarStoreAtDirectory:(id)arg1;
+ (void)createTempCalendarStoreForPath:(id*)arg1 forDirectory:(id*)arg2;
+ (id)tempCalendarStoreDirectory:(id*)arg1;

@end
