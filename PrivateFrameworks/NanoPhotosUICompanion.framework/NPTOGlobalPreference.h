/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOGlobalPreference : NSObject <NPTOPreferenceAccessor> {
    NSString * _notificationName;
    NSString * _preferenceKey;
}

+ (id)photosFaceMemoryHistoryListPreference;
+ (id)photosFaceMemoryKeyAssetPreference;

- (void).cxx_destruct;
- (void)_synchronizeAndNotifyObservers;
- (id)changeObserverInQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithPreferenceKey:(id)arg1 notificationName:(id)arg2;
- (void)removeValue;
- (void)setValue:(id)arg1;
- (id)value;

@end
