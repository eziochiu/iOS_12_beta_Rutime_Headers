/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping> {
    HMDBackingStoreCacheGroup * _group;
    NSUUID * _parentUuid;
    NSString * _recordName;
    HMDBackingStoreCacheShareGroup * _share;
    NSString * _type;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *parentUuid;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) HMDBackingStoreCacheShareGroup *share;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)group;
- (id)initWithGroup:(id)arg1 share:(id)arg2 recordName:(id)arg3 uuid:(id)arg4 parentUuid:(id)arg5 type:(id)arg6;
- (id)parentUuid;
- (id)recordName;
- (id)share;
- (id)type;
- (id)uuid;

@end
