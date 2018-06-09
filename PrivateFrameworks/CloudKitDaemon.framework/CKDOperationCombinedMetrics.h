/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding> {
    CKDOperationMetrics * _MMCSMetrics;
    CKDOperationMetrics * _cloudKitMetrics;
}

@property (nonatomic, retain) CKDOperationMetrics *MMCSMetrics;
@property (nonatomic, retain) CKDOperationMetrics *cloudKitMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSMetrics;
- (id)cloudKitMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCloudKitMetrics:(id)arg1;
- (void)setMMCSMetrics:(id)arg1;

@end
