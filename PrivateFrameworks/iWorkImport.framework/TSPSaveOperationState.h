/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPSaveOperationState : NSObject {
    NSMapTable * _newDataStorages;
    int  _sampleID;
    unsigned long long  _updateType;
}

@property (nonatomic) int sampleID;
@property (nonatomic, readonly) bool shouldUpdate;
@property (nonatomic, readonly) unsigned long long updateType;

- (void).cxx_destruct;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (void)enumerateDatasAndStoragesUsingBlock:(id /* block */)arg1;
- (bool)hasNewStorageForData:(id)arg1;
- (id)init;
- (id)initWithUpdateType:(unsigned long long)arg1;
- (int)sampleID;
- (void)setSampleID:(int)arg1;
- (bool)shouldUpdate;
- (unsigned long long)updateType;

@end
