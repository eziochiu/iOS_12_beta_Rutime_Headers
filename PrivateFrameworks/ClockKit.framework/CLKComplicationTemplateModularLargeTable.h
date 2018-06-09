/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate {
    long long  _column2Alignment;
    CLKImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
    bool  _useNoColumnPadding;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic) bool useNoColumnPadding;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;
- (void)setUseNoColumnPadding:(bool)arg1;
- (bool)useNoColumnPadding;

@end
