/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter_NSFormatter : NSFormatter {
    OITSULocale * _locale;
    bool  isDateOnly;
    bool  isTimeOnly;
    NSString * mPreferredFormat;
}

@property (nonatomic) bool isDateOnly;
@property (nonatomic) bool isTimeOnly;
@property (nonatomic, retain) OITSULocale *locale;
@property (nonatomic, retain) NSString *preferredFormat;

- (void)dealloc;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (bool)isDateOnly;
- (bool)isTimeOnly;
- (id)locale;
- (id)preferredFormat;
- (void)setIsDateOnly:(bool)arg1;
- (void)setIsTimeOnly:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPreferredFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
