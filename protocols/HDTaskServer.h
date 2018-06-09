/* made by EzioChiu.
 */

@protocol HDTaskServer <_HKXPCExportable>

@required

+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;

- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDXPCClient *)arg3 profile:(HDProfile *)arg4 delegate:(id <HDTaskServerDelegate>)arg5;
- (NSUUID *)taskUUID;

@optional

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDXPCClient *)arg3 profile:(HDProfile *)arg4 delegate:(id <HDTaskServerDelegate>)arg5 error:(id*)arg6;
+ (bool)validateConfiguration:(HKTaskConfiguration *)arg1 error:(out id*)arg2;

@end
