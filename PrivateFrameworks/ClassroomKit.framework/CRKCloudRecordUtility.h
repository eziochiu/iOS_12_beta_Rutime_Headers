/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudRecordUtility : NSObject

+ (id)localDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
+ (id)localDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (id)localSubItemSetsDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (id)localSubItemsDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (bool)record:(id)arg1 isEqualToRecord:(id)arg2;
+ (id)recordFromCloudStoringObject:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
+ (id)recordIdFromCloudStoringObject:(id)arg1 zoneId:(id)arg2;

@end
