/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMBordersProperty : CMProperty {
    OITSUColor * mBorderBottomColor;
    OITSUColor * mBorderColor;
    OITSUColor * mBorderLeftColor;
    OITSUColor * mBorderRightColor;
    int  mBorderStyle;
    OITSUColor * mBorderTopColor;
    int  mBorderWidth;
    int  mCustomWidth;
}

+ (bool)isStroked:(id)arg1;

- (void).cxx_destruct;
- (void)adjustValues;
- (id)colorString;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)init;
- (id)initWithOADStroke:(id)arg1;
- (bool)isNoneAtLocation:(int)arg1;
- (void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3;
- (void)setNoneAtLocation:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)styleString;
- (id)widthString;

@end
