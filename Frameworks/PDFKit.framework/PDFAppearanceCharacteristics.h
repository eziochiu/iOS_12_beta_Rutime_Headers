/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {
    PDFAppearanceCharacteristicsPrivate * _private;
}

@property (nonatomic, readonly, copy) NSDictionary *appearanceCharacteristicsKeyValues;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic) long long controlType;
@property (nonatomic, copy) NSString *downCaption;
@property (nonatomic, copy) NSString *rolloverCaption;
@property (nonatomic) long long rotation;

- (void).cxx_destruct;
- (void)addColor:(id)arg1 forKey:(struct __CFString { }*)arg2 toDictionaryRef:(struct __CFDictionary { }*)arg3;
- (id)appearanceCharacteristicsKeyValues;
- (id)backgroundColor;
- (id)borderColor;
- (id)caption;
- (long long)controlType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (void)dealloc;
- (id)downCaption;
- (struct CGPDFForm { }*)icon;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forControlType:(long long)arg2;
- (id)rolloverCaption;
- (long long)rotation;
- (bool)scaleProportional;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setControlType:(long long)arg1;
- (void)setDownCaption:(id)arg1;
- (void)setRolloverCaption:(id)arg1;
- (void)setRotation:(long long)arg1;

@end
