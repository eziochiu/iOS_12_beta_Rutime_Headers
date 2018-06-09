/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKLinedPaper : NSObject <NSCopying> {
    double  _horizontalInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lineSpacing;
}

@property (nonatomic, readonly) double horizontalInset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lineSpacing;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (double)horizontalInset;
- (id)initWithLineSpacing:(struct CGPoint { double x1; double x2; })arg1 horizontalInset:(double)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })lineSpacing;

@end
