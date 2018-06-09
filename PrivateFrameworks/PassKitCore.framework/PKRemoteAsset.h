/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAsset : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSData * _data;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 uniqueIdentifier:(id)arg2;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (id)uniqueIdentifier;

@end
