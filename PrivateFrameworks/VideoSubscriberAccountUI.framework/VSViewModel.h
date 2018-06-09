/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewModel : NSObject {
    NSError * _error;
    VSIdentityProvider * _identityProvider;
    NSString * _title;
    unsigned long long  _validationState;
    unsigned long long  _viewState;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long validationState;
@property (nonatomic) unsigned long long viewState;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)error;
- (id)identityProvider;
- (void)setError:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValidationState:(unsigned long long)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (id)title;
- (unsigned long long)validationState;
- (unsigned long long)viewState;

@end
