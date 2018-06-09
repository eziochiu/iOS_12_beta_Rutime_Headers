/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSpriteKitEventHandler : NSObject {
    bool  _mouseIsDown;
    bool  _rightMouseIsDown;
    SKScene * _scene;
    NSMutableDictionary * _touchMap;
}

@property (nonatomic, retain) SKScene *scene;

- (void)dealloc;
- (id)init;
- (id)scene;
- (void)setScene:(id)arg1;
- (bool)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
