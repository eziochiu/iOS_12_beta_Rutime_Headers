/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDurationFormatter : NSFormatter {
    int  mCompactStyleStartUnit;
    NSString * mFormat;
    OITSULocale * mLocale;
}

@property (nonatomic) int compactStyleStartUnit;
@property (nonatomic, copy) NSString *format;
@property (readonly) OITSULocale *locale;

- (int)compactStyleStartUnit;
- (void)dealloc;
- (id)format;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (void)p_commonInit;
- (void)setCompactStyleStartUnit:(int)arg1;
- (void)setFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
