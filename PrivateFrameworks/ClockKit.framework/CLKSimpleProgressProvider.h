/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKSimpleProgressProvider : CLKProgressProvider {
    double  _progress;
}

@property (nonatomic) double progress;

+ (id)simpleProgressProviderWithProgress:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (bool)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;

@end
