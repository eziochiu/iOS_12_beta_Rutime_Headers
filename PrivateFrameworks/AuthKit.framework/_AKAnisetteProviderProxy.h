/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol> {
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
}

@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anisetteDataProvider;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithProvider:(id)arg1;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(id /* block */)arg3;

@end
