/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding> {
    CKMetric * _MMCSMetrics;
    CKMetric * _cloudKitMetrics;
}

@property (nonatomic, retain) CKMetric *MMCSMetrics;
@property (nonatomic, retain) CKMetric *cloudKitMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSMetrics;
- (id)cloudKitMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCloudKitMetrics:(id)arg1;
- (void)setMMCSMetrics:(id)arg1;
- (void)unionMetrics:(id)arg1;

@end
