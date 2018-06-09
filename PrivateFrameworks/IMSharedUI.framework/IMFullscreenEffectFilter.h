/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

@interface IMFullscreenEffectFilter : NSObject {
    double  _balloonAlpha;
    NSArray * _balloonBackdropFilters;
    CAFilter * _balloonCompositingFilter;
    NSArray * _balloonFilters;
    double  _contentAlpha;
    unsigned long long  _direction;
    UIColor * _textColor;
    CAFilter * _textCompositingFilter;
    long long  _type;
}

@property (nonatomic) double balloonAlpha;
@property (nonatomic, copy) NSArray *balloonBackdropFilters;
@property (nonatomic, copy) CAFilter *balloonCompositingFilter;
@property (nonatomic, copy) NSArray *balloonFilters;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long direction;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) CAFilter *textCompositingFilter;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (double)balloonAlpha;
- (id)balloonBackdropFilters;
- (id)balloonCompositingFilter;
- (id)balloonFilters;
- (double)contentAlpha;
- (unsigned long long)direction;
- (id)init;
- (void)setBalloonAlpha:(double)arg1;
- (void)setBalloonBackdropFilters:(id)arg1;
- (void)setBalloonCompositingFilter:(id)arg1;
- (void)setBalloonFilters:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextCompositingFilter:(id)arg1;
- (void)setType:(long long)arg1;
- (id)textColor;
- (id)textCompositingFilter;
- (long long)type;

@end
