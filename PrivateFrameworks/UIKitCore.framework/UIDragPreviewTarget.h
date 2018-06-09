/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDragPreviewTarget : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    UIView * _container;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) UIView *container;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (id)new;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithContainer:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
