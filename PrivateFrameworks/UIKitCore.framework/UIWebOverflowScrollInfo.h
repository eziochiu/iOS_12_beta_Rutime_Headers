/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebOverflowScrollInfo : NSObject {
    bool  _isUserScroll;
    DOMNode * _node;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
}

@property (nonatomic) bool isUserScroll;
@property (nonatomic, retain) DOMNode *node;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;

- (bool)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 isUserScroll:(bool)arg3;
- (void)dealloc;
- (id)initWithNode:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 isUserScroll:(bool)arg3;
- (bool)isUserScroll;
- (id)node;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setIsUserScroll:(bool)arg1;
- (void)setNode:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;

@end