/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _storage;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessQueue;
- (void)clear;
- (unsigned long long)count;
- (id)getDataForKey:(id)arg1;
- (id)init;
- (id)keyAtIndex:(unsigned long long)arg1;
- (void)removeDataForKey:(id)arg1;
- (void)setAccessQueue:(id)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
