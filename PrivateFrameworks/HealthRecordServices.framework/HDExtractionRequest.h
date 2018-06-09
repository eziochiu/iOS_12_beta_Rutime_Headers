/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDExtractionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _resources;
}

@property (nonatomic, readonly, copy) NSArray *resources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)resources;

@end
