/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clinicalRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)medicalRecords;

@end