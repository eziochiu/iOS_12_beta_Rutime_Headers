/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackdropColorSettings : NSObject {
    bool  _hasObservedValues;
    _UIBackdropViewSettings * _parentSettings;
}

@property (nonatomic) double averageBrightness;
@property (nonatomic) double averageHue;
@property (nonatomic) double averageSaturation;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) double contrast;
@property (nonatomic) bool hasObservedValues;
@property (nonatomic) _UIBackdropViewSettings *parentSettings;

- (bool)applyCABackdropLayerStatistics:(id)arg1;
- (double)averageBrightness;
- (double)averageHue;
- (double)averageSaturation;
- (id)color;
- (double)contrast;
- (bool)hasObservedValues;
- (id)parentSettings;
- (void)setAverageBrightness:(double)arg1;
- (void)setAverageHue:(double)arg1;
- (void)setAverageSaturation:(double)arg1;
- (void)setContrast:(double)arg1;
- (void)setDefaultValues;
- (void)setHasObservedValues:(bool)arg1;
- (void)setParentSettings:(id)arg1;
- (void)setValuesFromModel:(id)arg1;

@end
