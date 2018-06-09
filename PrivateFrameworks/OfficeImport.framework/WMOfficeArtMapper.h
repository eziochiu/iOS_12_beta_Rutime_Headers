/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMOfficeArtMapper : CMDrawableMapper {
    WDAContent * mContent;
    unsigned int  mCurrentPage;
    bool  mFloating;
    bool  mIsInsideGroup;
    bool  mIsMapped;
}

- (void).cxx_destruct;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (id)initWithOadDrawable:(id)arg1 asFloating:(bool)arg2 parent:(id)arg3;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (bool)isInsideGroup;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setIsInsideGroup:(bool)arg1;
- (void)setWithClientData:(id)arg1 state:(id)arg2;

@end
