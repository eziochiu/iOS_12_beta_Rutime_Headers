/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerScopedUserID;
    long long  _environment;
    NSString * _orgAdminUserID;
    NSURL * _publicCloudDBURL;
    NSURL * _publicCodeServiceURL;
    NSURL * _publicDeviceServiceURL;
    NSURL * _publicMetricsServiceURL;
    NSURL * _publicShareServiceURL;
}

@property (nonatomic, copy) NSString *containerScopedUserID;
@property (nonatomic) long long environment;
@property (nonatomic, copy) NSString *orgAdminUserID;
@property (nonatomic, copy) NSURL *publicCloudDBURL;
@property (nonatomic, copy) NSURL *publicCodeServiceURL;
@property (nonatomic, copy) NSURL *publicDeviceServiceURL;
@property (nonatomic, copy) NSURL *publicMetricsServiceURL;
@property (nonatomic, copy) NSURL *publicShareServiceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)containerScopedUserID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)orgAdminUserID;
- (id)publicCloudDBURL;
- (id)publicCodeServiceURL;
- (id)publicDeviceServiceURL;
- (id)publicMetricsServiceURL;
- (id)publicShareServiceURL;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setOrgAdminUserID:(id)arg1;
- (void)setPublicCloudDBURL:(id)arg1;
- (void)setPublicCodeServiceURL:(id)arg1;
- (void)setPublicDeviceServiceURL:(id)arg1;
- (void)setPublicMetricsServiceURL:(id)arg1;
- (void)setPublicShareServiceURL:(id)arg1;

@end
