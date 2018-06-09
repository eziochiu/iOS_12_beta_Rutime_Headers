/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateExtraLargeColumnsText : CLKComplicationTemplate {
    long long  _column2Alignment;
    bool  _highlightColumn2;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic) bool highlightColumn2;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (bool)highlightColumn2;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setHighlightColumn2:(bool)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;

@end
