/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusTest : NSObject {
    <_UIFocusTestDelegate> * _delegate;
    NSString * _identifier;
    bool  _isApplicationTest;
    id /* block */  _runCompletionHandler;
    long long  _state;
}

@property (nonatomic) <_UIFocusTestDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=_isApplicationTest, nonatomic) bool isApplicationTest;
@property (nonatomic, copy) id /* block */ runCompletionHandler;
@property (nonatomic) long long state;

+ (void)_setCurrentTest:(id)arg1;
+ (id)currentTest;

- (void).cxx_destruct;
- (void)_finish:(bool)arg1;
- (bool)_isApplicationTest;
- (void)_start;
- (void)cancel;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)main;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (id /* block */)runCompletionHandler;
- (void)runWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsApplicationTest:(bool)arg1;
- (void)setRunCompletionHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)stop;

@end
