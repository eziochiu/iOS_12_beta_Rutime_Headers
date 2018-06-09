/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate {
    long long  _column2Alignment;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKImageProvider * _row1ImageProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
    CLKImageProvider * _row2ImageProvider;
    CLKTextProvider * _row3Column1TextProvider;
    CLKTextProvider * _row3Column2TextProvider;
    CLKImageProvider * _row3ImageProvider;
    bool  _useNoColumnPadding;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row2ImageProvider;
@property (nonatomic, copy) CLKTextProvider *row3Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row3Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row3ImageProvider;
@property (nonatomic) bool useNoColumnPadding;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row1ImageProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (id)row2ImageProvider;
- (id)row3Column1TextProvider;
- (id)row3Column2TextProvider;
- (id)row3ImageProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow1ImageProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;
- (void)setRow2ImageProvider:(id)arg1;
- (void)setRow3Column1TextProvider:(id)arg1;
- (void)setRow3Column2TextProvider:(id)arg1;
- (void)setRow3ImageProvider:(id)arg1;
- (void)setUseNoColumnPadding:(bool)arg1;
- (bool)useNoColumnPadding;

@end
