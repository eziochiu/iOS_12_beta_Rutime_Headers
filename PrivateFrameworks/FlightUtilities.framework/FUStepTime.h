/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUStepTime : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned long long  _type;
}

@property (retain) NSDate *date;
@property unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
