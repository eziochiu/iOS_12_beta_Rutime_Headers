/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclarationTransform : IKCSSDeclaration {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)stringValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
