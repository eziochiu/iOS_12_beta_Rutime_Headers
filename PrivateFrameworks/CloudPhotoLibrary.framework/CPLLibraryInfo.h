/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLLibraryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _accountFlagsData;
    NSDictionary * _assetCounts;
    CPLFeatureVersionHistory * _featureVersionHistory;
    struct NSData { Class x1; } * _lastKnownSyncAnchor;
    CPLMomentShare * _momentShare;
}

@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (nonatomic, copy) NSData *accountFlagsData;
@property (nonatomic, copy) NSDictionary *assetCounts;
@property (nonatomic, retain) CPLFeatureVersionHistory *featureVersionHistory;
@property (nonatomic, copy) NSData *lastKnownSyncAnchor;
@property (nonatomic, retain) CPLMomentShare *momentShare;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountFlags;
- (id)accountFlagsData;
- (id)assetCounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureVersionHistory;
- (id)initWithCoder:(id)arg1;
- (struct NSData { Class x1; }*)lastKnownSyncAnchor;
- (id)momentShare;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)arg1;
- (void)setAccountFlagsData:(id)arg1;
- (void)setAssetCounts:(id)arg1;
- (void)setFeatureVersionHistory:(id)arg1;
- (void)setLastKnownSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (void)setMomentShare:(id)arg1;

@end
