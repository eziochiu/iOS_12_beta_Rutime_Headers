/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
    unsigned long long  mContentFormatId;
    int  mDefaultTextType;
    int  mLabelPosition;
    EDResources * mResources;
    EDRunsCollection * mRuns;
    bool  mShowBubbleSizeLabel;
    bool  mShowCategoryLabel;
    bool  mShowPercentageLabel;
    bool  mShowSeriesLabel;
    bool  mShowValueLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultTextPropertyWithResources:(id)arg1;

- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (void)dealloc;
- (int)defaultTextType;
- (id)description;
- (id)initWithResources:(id)arg1;
- (bool)isShowBubbleSizeLabel;
- (bool)isShowCategoryLabel;
- (bool)isShowPercentageLabel;
- (bool)isShowSeriesLabel;
- (bool)isShowValueLabel;
- (long long)key;
- (int)labelPosition;
- (id)runs;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setDefaultTextType:(int)arg1;
- (void)setIsShowBubbleSizeLabel:(bool)arg1;
- (void)setIsShowCategoryLabel:(bool)arg1;
- (void)setIsShowPercentageLabel:(bool)arg1;
- (void)setIsShowSeriesLabel:(bool)arg1;
- (void)setIsShowValueLabel:(bool)arg1;
- (void)setLabelPosition:(int)arg1;
- (void)setRuns:(id)arg1;

@end
