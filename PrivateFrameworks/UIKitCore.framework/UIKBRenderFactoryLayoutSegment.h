/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRenderFactoryLayoutSegment : NSObject {
    NSString * _cachedKeyNames;
    int  _edgeCount;
    unsigned long long  _edges;
    int  _rectCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rects;
    bool  _requireAllMatches;
    int  _states;
    UIKBRenderTraits * _traits;
    int  _triangleCorners;
}

@property (nonatomic) int keyStates;
@property (nonatomic) bool requireAllMatches;
@property (nonatomic, readonly) UIKBRenderTraits *traits;

+ (id)segmentWithTraits:(id)arg1;

- (void)addLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 asTriangle:(int)arg2;
- (void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withKeyplane:(id)arg3;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;
- (int)keyStates;
- (bool)requireAllMatches;
- (void)setKeyStates:(int)arg1;
- (void)setRequireAllMatches:(bool)arg1;
- (id)traits;

@end
