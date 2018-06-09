/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGraphicObject : CPChunk {
    CPParagraph * anchoringParagraph;
    CPTextLine * anchoringTextLine;
    unsigned int  clipIndex;
    bool  isInZoneBorder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  renderedBounds;
    CPChunk<CPGraphicUser> * user;
    int  zoneGraphicType;
}

@property (nonatomic, retain) CPParagraph *anchoringParagraph;
@property (nonatomic) unsigned int clipIndex;

- (id)anchoringParagraph;
- (id)anchoringTextLine;
- (bool)canBeContainer;
- (unsigned int)clipIndex;
- (void)dealloc;
- (id)init;
- (bool)isInZoneBorder;
- (bool)isIndivisible;
- (bool)isNarrow;
- (bool)isVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (void)setAnchoringParagraph:(id)arg1;
- (void)setAnchoringTextLine:(id)arg1;
- (void)setClipIndex:(unsigned int)arg1;
- (void)setIsInZoneBorder:(bool)arg1;
- (void)setUser:(id)arg1;
- (void)setZoneGraphicType:(int)arg1;
- (unsigned short)unicode;
- (id)user;
- (int)zoneGraphicType;

@end
