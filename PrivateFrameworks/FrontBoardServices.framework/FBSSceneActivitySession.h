/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding> {
    FBSProcessAssertion * _assertion;
    id /* block */  _errorHandler;
    FBSProcessExecutionPolicy * _executionPolicy;
    NSString * _identifier;
    bool  _invalidated;
    NSString * _name;
    bool  _open;
    <FBSProcess> * _process;
    <FBSSceneHandle> * _scene;
    FBSProcessWatchdog * _watchdog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) FBSProcessExecutionPolicy *executionPolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) NSString *name;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic) <FBSSceneHandle> *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isValid;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id /* block */)errorHandler;
- (id)executionPolicy;
- (id)identifier;
- (id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isOpen;
- (id)name;
- (void)open;
- (id)scene;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setExecutionPolicy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScene:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
