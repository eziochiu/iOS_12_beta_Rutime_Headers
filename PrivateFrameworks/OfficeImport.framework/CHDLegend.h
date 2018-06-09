/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLegend : NSObject {
    unsigned long long  mFontIndex;
    OADGraphicProperties * mGraphicProperties;
    bool  mIsOverlay;
    bool  mIsVertical;
    NSArray * mLabelEffects;
    EDCollection * mLegendEntries;
    int  mLegendPosition;
    EDResources * mResources;
}

- (void)dealloc;
- (id)description;
- (id)font;
- (unsigned long long)fontIndex;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isOverlay;
- (bool)isSingleColumnLegend;
- (id)labelEffects;
- (id)legendEntries;
- (int)legendPosition;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setIsSingleColumnLegend:(bool)arg1;
- (void)setLabelEffects:(id)arg1;
- (void)setLegendPosition:(int)arg1;

@end
