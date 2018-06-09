/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenElementOverride : NSObject {
    long long  _element;
    bool  _hidden;
    NSString * _text;
}

@property (nonatomic) long long element;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSString *text;

+ (id)overrideForElement:(long long)arg1;
+ (id)overrideForHiddenElement:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)element;
- (bool)isHidden;
- (void)setElement:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setText:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)text;

@end
