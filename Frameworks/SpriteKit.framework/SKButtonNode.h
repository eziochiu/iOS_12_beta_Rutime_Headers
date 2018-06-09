/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKButtonNode : SKLabelNode {
    NSObject<SKButtonNodeDelegate> * _delegate;
    SKAction * _downAction;
    id /* block */  _downBlock;
    int  _touches;
    SKAction * _upAction;
    id /* block */  _upBlock;
    id /* block */  _upInsideBlock;
}

@property (nonatomic) NSObject<SKButtonNodeDelegate> *delegate;
@property (nonatomic, retain) SKAction *downAction;
@property (nonatomic, retain) SKAction *upAction;

+ (id)buttonWithFontNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)downAction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)onTouchDownInside:(id /* block */)arg1;
- (void)onTouchUp:(id /* block */)arg1;
- (void)onTouchUpInside:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownAction:(id)arg1;
- (void)setUpAction:(id)arg1;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)upAction;

@end
