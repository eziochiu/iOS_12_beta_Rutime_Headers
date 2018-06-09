/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCustomFormatWrapper : TSKFormat {
    unsigned char  _appliedConditionKey;
    TSUCustomFormat * _customFormat;
    NSUUID * _customFormatKey;
}

@property (nonatomic) unsigned char appliedConditionKey;
@property (nonatomic, readonly) TSUCustomFormat *customFormat;
@property (nonatomic, readonly) TSUCustomFormatData *customFormatData;
@property (nonatomic, readonly) NSUUID *customFormatKey;

+ (id)populatedCustomFormatWrapperFromCFWrapper:(id)arg1 customFormat:(id)arg2;
+ (id)unpopulatedCustomFormatWrapperWithFormatType:(int)arg1 customFormatKey:(id)arg2;

- (void).cxx_destruct;
- (unsigned char)appliedConditionKey;
- (id)applyConditionalValue:(double)arg1;
- (id)asCustomFormatWrapper;
- (id)currencyCodeForValue:(double)arg1;
- (id)customFormat;
- (id)customFormatData;
- (id)customFormatKey;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1 customFormatKey:(id)arg2 customFormat:(id)arg3 appliedConditionKey:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (void)setAppliedConditionKey:(unsigned char)arg1;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)stringFromString:(id)arg1 locale:(id)arg2;

@end
