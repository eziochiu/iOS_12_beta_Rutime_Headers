/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutTransition : NSObject {
    long long  _backlightLevel;
    long long  _displayType;
    long long  _interfaceOrientation;
    NSString * _name;
    NSString * _transitionReason;
    bool  _transitioning;
}

@property (nonatomic) long long backlightLevel;
@property (nonatomic, readonly) long long displayType;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *transitionReason;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

+ (void)flushLayoutForDisplayType:(long long)arg1;
+ (bool)isTransitioningForDisplayType:(long long)arg1;
+ (id)layoutForDisplayType:(long long)arg1;

- (void).cxx_destruct;
- (long long)backlightLevel;
- (void)beginTransition;
- (void)dealloc;
- (id)description;
- (long long)displayType;
- (void)endTransition;
- (id)initWithDisplayType:(long long)arg1 name:(id)arg2;
- (long long)interfaceOrientation;
- (bool)isTransitioning;
- (id)name;
- (void)setBacklightLevel:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setTransitionReason:(id)arg1;
- (id)transitionReason;

@end
