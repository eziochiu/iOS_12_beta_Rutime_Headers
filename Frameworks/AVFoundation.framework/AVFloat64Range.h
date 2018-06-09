/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFloat64Range : NSObject <NSCopying> {
    double  _maximum;
    double  _minimum;
}

@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange { double x1; double x2; })arg1;
+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAudioValueRange:(struct AudioValueRange { double x1; double x2; })arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)maximum;
- (double)minimum;

@end
