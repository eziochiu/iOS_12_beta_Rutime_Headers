/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface _TDPackerNode : NSObject {
    _TDPackerNode * _down;
    bool  _fit;
    void * _node;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    _TDPackerNode * _right;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _used;
}

@property (nonatomic, retain) _TDPackerNode *down;
@property (nonatomic) bool fit;
@property (nonatomic) void*node;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, retain) _TDPackerNode *right;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool used;

- (void)dealloc;
- (id)down;
- (bool)fit;
- (void*)node;
- (struct CGPoint { double x1; double x2; })origin;
- (id)right;
- (void)setDown:(id)arg1;
- (void)setFit:(bool)arg1;
- (void)setNode:(void*)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRight:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsed:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)used;

@end
