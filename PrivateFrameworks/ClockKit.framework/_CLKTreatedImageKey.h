/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface _CLKTreatedImageKey : NSObject <NSCopying> {
    bool  _maskToCircle;
    UIImage * _rawImage;
    double  _scale;
}

@property (nonatomic, readonly) bool maskToCircle;
@property (nonatomic, readonly) UIImage *rawImage;
@property (nonatomic, readonly) double scale;

+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 mask:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)maskToCircle;
- (id)rawImage;
- (double)scale;

@end
