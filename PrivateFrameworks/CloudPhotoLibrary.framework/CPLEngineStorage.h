/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    CPLEngineStore * _engineStore;
    NSString * _name;
    CPLPlatformObject * _platformObject;
    bool  _superWasCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineStore *engineStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) unsigned long long scopeType;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (bool)_checkSuperWasCalled;
- (bool)closeWithError:(id*)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (id)description;
- (id)engineStore;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (id)name;
- (bool)openWithError:(id*)arg1;
- (id)platformObject;
- (unsigned long long)scopeType;
- (id)status;
- (id)statusDictionary;
- (id)statusPerScopeIndex;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
