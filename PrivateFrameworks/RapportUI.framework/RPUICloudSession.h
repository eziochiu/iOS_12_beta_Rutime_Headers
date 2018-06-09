/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

@interface RPUICloudSession : NSObject <RPAuthenticatable> {
    RPCloudSession * _cloudSession;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _hidePasswordHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSString * _password;
    int  _passwordType;
    UIViewController * _presentingViewController;
    id /* block */  _promptForPasswordHandler;
    NSString * _serviceIdentifier;
    id /* block */  _showPasswordHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    RPPairingPromptViewController * _vcPrompt;
    RPPairingShowViewController * _vcShow;
}

@property (nonatomic, retain) NSString *destinationID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) id /* block */ showPasswordHandler;

- (void).cxx_destruct;
- (void)_hidePasswordWithFlags:(unsigned int)arg1;
- (void)_invalidated;
- (void)_promptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_showPassword:(id)arg1 flags:(unsigned int)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationID;
- (id)dispatchQueue;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (id)presentingViewController;
- (id /* block */)promptForPasswordHandler;
- (id)serviceIdentifier;
- (void)setDestinationID:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (id /* block */)showPasswordHandler;
- (void)tryPassword:(id)arg1;

@end
