/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDPointPath : GQDPath {
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    int  mType;
}

- (struct CGPath { }*)createBezierPath;
- (int)mapStrType:(struct __CFString { }*)arg1;
- (struct CGPoint { double x1; double x2; })point;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (int)type;

@end
