/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue> {
    double  mDuration;
}

@property (nonatomic, readonly) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)durationValueWithDouble:(double)arg1;

- (int)chartGridValueType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithDouble:(double)arg1;
- (bool)isEqual:(id)arg1;

@end
