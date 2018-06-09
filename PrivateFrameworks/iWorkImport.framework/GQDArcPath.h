/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDArcPath : GQDPath {
    double  mArcWidth;
    double  mArrowLength;
    double  mArrowWidth;
    double  mHeadAngle;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (double)arcWidth;
- (double)arrowLength;
- (double)arrowWidth;
- (struct CGPath { }*)createBezierPath;
- (double)headAngle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGSize { double x1; double x2; })size;

@end
