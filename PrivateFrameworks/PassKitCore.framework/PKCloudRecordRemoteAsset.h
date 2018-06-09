/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudRecordRemoteAsset : PKCloudRecordObject {
    PKRemoteAsset * _remoteAsset;
}

@property (nonatomic, retain) PKRemoteAsset *remoteAsset;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)remoteAsset;
- (void)setRemoteAsset:(id)arg1;

@end
