/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudLegacyMetadataRecord : HMDCloudRecord

+ (id)legacyModelWithMetadata:(id)arg1;

- (void)clearData;
- (id)data;
- (bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (id)recordType;
- (void)setData:(id)arg1;

@end
