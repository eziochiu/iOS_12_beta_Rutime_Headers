/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDMeasuredResult : NSObject <NSCopying, NSSecureCoding> {
    HDLimit * _limit;
    NSMeasurement * _measurement;
    NSString * _name;
    bool  _valueWithinLimits;
}

@property (nonatomic, copy) HDLimit *limit;
@property (nonatomic, readonly, copy) NSMeasurement *measurement;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool valueWithinLimits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 measurement:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMeasuredResult:(id)arg1;
- (id)limit;
- (id)measurement;
- (id)name;
- (void)setLimit:(id)arg1;
- (void)setName:(id)arg1;
- (bool)valueWithinLimits;

@end
