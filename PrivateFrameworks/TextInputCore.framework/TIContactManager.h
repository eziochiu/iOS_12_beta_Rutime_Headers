/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIContactManager : NSObject <TIContactManaging> {
    NSUUID * contactCollectionUUID;
}

@property (nonatomic, readonly, copy) NSUUID *contactCollectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setSharedTIContactManager:(id)arg1;
+ (id)sharedTIContactManager;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (id)contactCollectionUUID;
- (void)getOnce:(id /* block */)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)unload;

@end
