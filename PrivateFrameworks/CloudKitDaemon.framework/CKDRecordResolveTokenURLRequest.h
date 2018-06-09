/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest {
    NSArray * _lookupInfos;
    NSMutableDictionary * _lookupInfosByRequestID;
    NSSet * _rootRecordDesiredKeySet;
    bool  _shouldFetchRootRecord;
    id /* block */  _tokenResolveBlock;
}

@property (nonatomic, retain) NSArray *lookupInfos;
@property (nonatomic, retain) NSMutableDictionary *lookupInfosByRequestID;
@property (nonatomic, retain) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) bool shouldFetchRootRecord;
@property (nonatomic, copy) id /* block */ tokenResolveBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithShortTokenLookupInfos:(id)arg1;
- (id)lookupInfos;
- (id)lookupInfosByRequestID;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)rootRecordDesiredKeySet;
- (void)setLookupInfos:(id)arg1;
- (void)setLookupInfosByRequestID:(id)arg1;
- (void)setRootRecordDesiredKeySet:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (void)setTokenResolveBlock:(id /* block */)arg1;
- (bool)shouldFetchRootRecord;
- (id)sourceApplicationBundleIdentifier;
- (id /* block */)tokenResolveBlock;

@end
