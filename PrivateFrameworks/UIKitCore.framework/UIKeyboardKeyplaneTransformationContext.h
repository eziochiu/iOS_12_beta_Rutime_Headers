/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardKeyplaneTransformationContext : NSObject {
    NSString * _currentKeyplaneName;
    UIKBScreenTraits * _screenTraits;
    bool  _usesScriptSwitch;
}

@property (nonatomic, retain) NSString *currentKeyplaneName;
@property (nonatomic, retain) UIKBScreenTraits *screenTraits;
@property (nonatomic) bool usesScriptSwitch;

- (void).cxx_destruct;
- (id)currentKeyplaneName;
- (id)screenTraits;
- (void)setCurrentKeyplaneName:(id)arg1;
- (void)setScreenTraits:(id)arg1;
- (void)setUsesScriptSwitch:(bool)arg1;
- (bool)usesScriptSwitch;

@end
