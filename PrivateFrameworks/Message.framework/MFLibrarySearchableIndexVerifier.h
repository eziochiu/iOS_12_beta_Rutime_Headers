/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexVerifier : NSObject {
    <MFLibrarySearchableIndexVerifierDataSource> * _dataSource;
    NSObject<OS_os_activity> * _spotlightVerificationActivity;
}

@property (nonatomic) <MFLibrarySearchableIndexVerifierDataSource> *dataSource;
@property (nonatomic, retain) NSObject<OS_os_activity> *spotlightVerificationActivity;

- (void).cxx_destruct;
- (void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2;
- (id)_failingSamples:(id)arg1 tester:(id)arg2;
- (id)_verifySamples:(id)arg1;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSpotlightVerificationActivity:(id)arg1;
- (id)spotlightVerificationActivity;
- (void)verifyDataSamplesWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;

@end
