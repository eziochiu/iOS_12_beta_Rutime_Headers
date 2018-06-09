/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSliderRow : PTSRow {
    double  _maxValue;
    double  _minValue;
}

@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

- (id)init;
- (double)maxValue;
- (double)minValue;
- (id)minValue:(double)arg1 maxValue:(double)arg2;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
