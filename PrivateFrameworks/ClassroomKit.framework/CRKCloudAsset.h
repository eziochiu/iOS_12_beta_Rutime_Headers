/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudAsset : NSObject <CRKCloudStoring> {
    NSData * _assetData;
    NSString * _identifier;
}

@property (nonatomic, retain) NSData *assetData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;

+ (id)instanceWithRecord:(id)arg1;
+ (id)new;
+ (id)recordType;
+ (id)skeletonInstance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyFieldsToRecord:(id)arg1;
- (id)assetData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assetData:(id)arg2;
- (id)initWithIdentifier:(id)arg1 assetUrl:(id)arg2;
- (bool)isChangedFrom:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recordName;
- (id)requiredKeys;
- (void)setAssetData:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
