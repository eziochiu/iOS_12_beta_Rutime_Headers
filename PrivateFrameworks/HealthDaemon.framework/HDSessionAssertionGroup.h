/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet * _allAssertions;
    NSMutableDictionary * _assertionsForState;
    long long  _state;
}

@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_transitionToNewAssertions:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)setupState:(long long)arg1 withAssertions:(id)arg2;
- (long long)state;
- (void)transitionToState:(long long)arg1;

@end
