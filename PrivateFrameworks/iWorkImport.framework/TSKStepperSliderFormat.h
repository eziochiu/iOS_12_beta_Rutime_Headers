/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKStepperSliderFormat : TSKFormat <NSCopying> {
    int  _displayFormatType;
    double  _increment;
    double  _maximum;
    double  _minimum;
}

@property (nonatomic, readonly) int displayFormatType;
@property (nonatomic, readonly) double increment;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;

- (id)asStepperSliderFormat;
- (int)displayFormatType;
- (unsigned long long)hash;
- (double)increment;
- (id)initWithFormatType:(int)arg1;
- (id)initWithFormatType:(int)arg1 minimum:(double)arg2 maximum:(double)arg3 increment:(double)arg4 displayFormatType:(int)arg5;
- (bool)isEqual:(id)arg1;
- (double)maximum;
- (double)minimum;

@end
