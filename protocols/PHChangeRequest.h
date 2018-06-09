/* made by EzioChiu.
 */

@protocol PHChangeRequest <NSObject>

@required

- (NSString *)clientName;
- (int)clientProcessID;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithUUID:(NSString *)arg1 objectID:(NSManagedObjectID *)arg2;
- (id)initWithXPCDict:(NSObject<OS_xpc_object> *)arg1 clientEntitlements:(NSSet *)arg2 clientName:(NSString *)arg3 clientBundleID:(NSString *)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (NSString *)managedEntityName;
- (NSManagedObjectID *)objectID;
- (bool)prepareForPhotoLibraryCheck:(PHPhotoLibrary *)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (NSString *)uuid;

@optional

- (void)changeFailedOnClientWithError:(NSError *)arg1;
- (void)changeFailedOnDaemonWithError:(NSError *)arg1;

@end
