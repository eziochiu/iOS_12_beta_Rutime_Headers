/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCellProperties : NSObject {
    OADStroke * mBottomLeftToTopRightStroke;
    float  mBottomMargin;
    OADStroke * mBottomStroke;
    OADFill * mFill;
    bool  mIsBottomMarginOverridden;
    bool  mIsLeftMarginOverridden;
    bool  mIsRightMarginOverridden;
    bool  mIsTextAnchorCenterOverridden;
    bool  mIsTextAnchorOverridden;
    bool  mIsTextFlowOverridden;
    bool  mIsTextHorizontalOverflowOverridden;
    bool  mIsTopMarginOverridden;
    float  mLeftMargin;
    OADStroke * mLeftStroke;
    float  mRightMargin;
    OADStroke * mRightStroke;
    unsigned char  mTextAnchor;
    bool  mTextAnchorCenter;
    unsigned char  mTextFlow;
    unsigned char  mTextHorizontalOverflow;
    OADTableCell3DProperties * mThreeDProperties;
    OADStroke * mTopLeftToBottomRightStroke;
    float  mTopMargin;
    OADStroke * mTopStroke;
}

- (id)bottomLeftToTopRightStroke;
- (float)bottomMargin;
- (id)bottomStroke;
- (void)dealloc;
- (id)description;
- (id)fill;
- (bool)isBottomMarginOverridden;
- (bool)isLeftMarginOverridden;
- (bool)isRightMarginOverridden;
- (bool)isTextAnchorCenterOverridden;
- (bool)isTextAnchorOverridden;
- (bool)isTextFlowOverridden;
- (bool)isTextHorizontalOverflowOverridden;
- (bool)isTopMarginOverridden;
- (float)leftMargin;
- (id)leftStroke;
- (float)rightMargin;
- (id)rightStroke;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setLeftStroke:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (void)setTextAnchor:(unsigned char)arg1;
- (void)setTextAnchorCenter:(bool)arg1;
- (void)setTextFlow:(unsigned char)arg1;
- (void)setTextHorizontalOverflow:(unsigned char)arg1;
- (void)setThreeDProperties:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setTopStroke:(id)arg1;
- (id)stroke:(int)arg1;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (unsigned char)textAnchor;
- (bool)textAnchorCenter;
- (unsigned char)textFlow;
- (unsigned char)textHorizontalOverflow;
- (id)threeDProperties;
- (id)topLeftToBottomRightStroke;
- (float)topMargin;
- (id)topStroke;

@end
