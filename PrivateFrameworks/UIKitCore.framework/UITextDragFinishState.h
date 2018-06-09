/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextDragFinishState : NSObject <UITextDragFinishState> {
    bool  _dragTearoffOccured;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragTearoffOccured;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (readonly) Class superclass;

- (bool)dragTearoffOccured;
- (struct CGPoint { double x1; double x2; })location;
- (void)setDragTearoffOccured:(bool)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
