/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCodedValue : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _codings;
    NSArray * _referenceRanges;
    HKInspectableValue * _value;
}

@property (nonatomic, readonly, copy) NSArray *codings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *referenceRanges;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKInspectableValue *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)referenceRanges;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
