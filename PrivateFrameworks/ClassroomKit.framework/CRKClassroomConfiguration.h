/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassroomConfiguration : NSObject

+ (unsigned long long)configurationType;
+ (bool)createPlaceholderFileWithError:(id*)arg1;
+ (void)fetchAdHocConfiguration:(id /* block */)arg1;
+ (void)fetchConfiguration:(id /* block */)arg1;
+ (bool)isStudentdInstalled;
+ (bool)placeholderFileExists;
+ (id)placeholderFileURL;
+ (bool)removePlaceholderFileWithError:(id*)arg1;
+ (void)setAdHocConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)setOfActiveRestrictionUUIDs:(id)arg1;
+ (id)studentDaemonConnection;

@end
