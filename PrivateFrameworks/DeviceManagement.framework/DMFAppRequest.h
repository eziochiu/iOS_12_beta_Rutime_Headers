/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFAppRequest : DMFTaskRequest {
    NSString * _bundleIdentifier;
    NSURL * _manifestURL;
    NSNumber * _storeItemIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *manifestURL;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifestURL;
- (void)setBundleIdentifier:(id)arg1;
- (void)setManifestURL:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (id)storeItemIdentifier;

@end
