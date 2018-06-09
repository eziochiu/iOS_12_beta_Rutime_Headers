/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {
    unsigned short  mCurrencyCodeIndex;
    unsigned char  mDecimalWidth;
    bool  mFormatContainsIntegerToken;
    NSString * mFormatString;
    int  mFractionAccuracy;
    unsigned char  mIndexFromRightOfLastDigitPlaceholder;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    NSArray * mInterstitialStrings;
    bool  mIsComplexFormat;
    bool  mIsConditional;
    unsigned char  mMinimumIntegerWidth;
    unsigned char  mNumberOfHashDecimalPlaceholders;
    unsigned char  mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char  mNumberOfNonSpaceIntegerPlaceholderDigits;
    bool  mRequiresFractionReplacement;
    double  mScaleFactor;
    bool  mShowThousandsSeparator;
    unsigned char  mTotalNumberOfDecimalPlaceholdersInFormat;
    bool  mUseAccountingStyle;
}

@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) bool formatContainsIntegerToken;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic, copy) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic, copy) NSArray *interstitialStrings;
@property (nonatomic) bool isComplexFormat;
@property (nonatomic) bool isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) bool requiresFractionReplacement;
@property (nonatomic) double scaleFactor;
@property (nonatomic) bool showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) bool useAccountingStyle;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currencyCodeIndex;
- (void)dealloc;
- (unsigned char)decimalWidth;
- (bool)formatContainsIntegerToken;
- (id)formatString;
- (int)fractionAccuracy;
- (unsigned long long)hash;
- (unsigned char)indexFromRightOfLastDigitPlaceholder;
- (id)init;
- (id)initWithCustomFormatData:(id)arg1;
- (id)interstitialStringInsertionIndexes;
- (id)interstitialStrings;
- (bool)isComplexFormat;
- (bool)isConditional;
- (bool)isEqual:(id)arg1;
- (unsigned char)minimumIntegerWidth;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)numberOfHashDecimalPlaceholders;
- (unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
- (unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
- (void)p_copySelfTo:(id)arg1;
- (bool)requiresFractionReplacement;
- (double)scaleFactor;
- (void)setCurrencyCodeIndex:(unsigned short)arg1;
- (void)setDecimalWidth:(unsigned char)arg1;
- (void)setFormatContainsIntegerToken:(bool)arg1;
- (void)setFormatString:(id)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1;
- (void)setInterstitialStringInsertionIndexes:(id)arg1;
- (void)setInterstitialStrings:(id)arg1;
- (void)setIsComplexFormat:(bool)arg1;
- (void)setIsConditional:(bool)arg1;
- (void)setMinimumIntegerWidth:(unsigned char)arg1;
- (void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1;
- (void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1;
- (void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1;
- (void)setRequiresFractionReplacement:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setShowThousandsSeparator:(bool)arg1;
- (void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1;
- (void)setUseAccountingStyle:(bool)arg1;
- (bool)showThousandsSeparator;
- (unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
- (bool)useAccountingStyle;

@end
