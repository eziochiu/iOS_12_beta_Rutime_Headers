/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendCellMetrics : NSObject {
    float  mBadgeSize;
    float  mBaseline;
    struct __CTFont { } * mFont;
    float  mLegendSymbolGap;
    float  mLineGap;
    TSWPParagraphStyle * mParagraphStyle;
    float  mTrueTitleHeight;
}

@property (nonatomic, readonly) float badgeSize;
@property (nonatomic, readonly) float baseline;
@property (nonatomic, readonly) struct __CTFont { }*font;
@property (nonatomic, readonly) float lineGap;
@property (nonatomic, readonly) TSWPParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) float symbolGap;
@property (nonatomic, readonly) float titleHeight;

- (void).cxx_destruct;
- (float)badgeSize;
- (float)baseline;
- (void)dealloc;
- (struct __CTFont { }*)font;
- (id)initWithParagraphStyle:(id)arg1;
- (float)lineGap;
- (id)paragraphStyle;
- (float)symbolGap;
- (float)titleHeight;

@end
