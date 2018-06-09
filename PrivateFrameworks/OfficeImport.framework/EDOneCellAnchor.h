/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDOneCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    }  mFrom;
    bool  mIsRelative;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (id).cxx_construct;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })from;
- (bool)isRelative;
- (void)setFrom:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (void)setRelative:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
