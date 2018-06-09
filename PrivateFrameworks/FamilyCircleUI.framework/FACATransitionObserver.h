/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACATransitionObserver : NSObject {
    id /* block */  _completion;
    NSString * _stateName;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *stateName;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithStateName:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setStateName:(id)arg1;
- (id)stateName;

@end
