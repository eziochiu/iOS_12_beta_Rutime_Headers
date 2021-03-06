/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellFormatAndValue : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    bool  mApplySpareFormatOnly;
    TSUFormatObject * mBaseFormat;
    TSUFormatObject * mCurrencyFormat;
    int  mCurrentFormatType;
    TSUFormatObject * mCustomFormat;
    TSUFormatObject * mDateFormat;
    TSUFormatObject * mDurationFormat;
    unsigned short  mExplicitFlags;
    TSWPStorage * mFormattedRichTextStorage;
    NSString * mFormattedValue;
    TSUFormatObject * mMultipleChoiceFormat;
    TSUFormatObject * mNumberFormat;
    int  mSpareFormatType;
    TSUFormatObject * mStepperSliderFormat;
    bool  mSuppressApplyValue;
    bool  mUseAllSpareFormats;
    /* Warning: unhandled union encoding: '(?="mDouble"d"mBool"B"mDate"@"NSDate""mString"@"NSString""mStorage"@"TSWPStorage")' */ union { 
        double mDouble; 
        bool mBool; 
        NSDate *mDate; 
        NSString *mString; 
        id mStorage; 
    }  mValue;
    unsigned int  mValueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;
+ (id)formatAndValueForCoercingControlCellToNonControlType:(id)arg1;
+ (id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(int)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(bool)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(bool)arg2 forceNoContent:(bool)arg3;
+ (id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(id /* block */)arg2;

- (void)applyToCell:(id)arg1;
- (id)copyForApplyingNoContent;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(bool)arg1;
- (id)copyForNotApplyingValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)getCurrentFormat;
- (bool)hasStringContentMatchingCell:(id)arg1;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(bool)arg2;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(bool)arg2 forceNoContent:(bool)arg3 applySpareFormatOnly:(int)arg4;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (bool)isControl;
- (bool)isFormulaSyntaxError;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id*)p_formatObjectForFormatType:(int)arg1;
- (id)p_sikritCopyStorage:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (int)valueType;

@end
