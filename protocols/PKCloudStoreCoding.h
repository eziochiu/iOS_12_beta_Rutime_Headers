/* made by EzioChiu.
 */

@protocol PKCloudStoreCoding <NSSecureCoding>

@required

- (void)encodeWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (id)initWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (unsigned long long)itemType;
- (NSDictionary *)recordTypesAndNames;

@optional

- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;

@end
