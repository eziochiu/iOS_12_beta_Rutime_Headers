/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {
    OADPath * _path;
    struct CGSize { 
        double width; 
        double height; 
    }  _space;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 inPath:(struct CGPath { }*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (struct CGPath { }*)copyShapeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPath:(id)arg1;
- (void)setSpace:(struct CGSize { double x1; double x2; })arg1;

@end
