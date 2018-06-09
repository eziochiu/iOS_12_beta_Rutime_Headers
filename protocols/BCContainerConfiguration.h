/* made by EzioChiu.
 */

@protocol BCContainerConfiguration <NSObject>

@required

+ (<BCContainerConfiguration> *)configuration;

- (NSArray *)appZones;
- (NSString *)containerIdentifier;
- (NSString *)dbArchiveExtension;
- (NSString *)dbArchiveFilename;
- (NSString *)dbArchiveFolderName;
- (NSString *)dbSubscriptionID;
- (NSString *)queueIdentifier;
- (bool)requiresDeviceToDeviceEncryption;
- (NSArray *)serviceZones;

@end
