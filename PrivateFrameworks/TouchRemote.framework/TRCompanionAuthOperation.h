/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRCompanionAuthOperation : TROperation {
    ACAccount * _account;
    NSSet * _targetedServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (id)account;
- (void)execute;
- (void)setAccount:(id)arg1;
- (void)setTargetedServices:(id)arg1;
- (id)targetedServices;

@end
