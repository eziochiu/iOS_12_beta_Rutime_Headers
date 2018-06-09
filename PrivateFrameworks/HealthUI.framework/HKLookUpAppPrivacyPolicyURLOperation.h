/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    NSString * _bundleIdentifier;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    SSLookupRequest * _lookupRequest;
    NSURL * _privacyPolicyURL;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (copy) NSError *error;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (retain) SSLookupRequest *lookupRequest;
@property (copy) NSURL *privacyPolicyURL;

- (void).cxx_destruct;
- (void)_performLookup;
- (id)_privacyPolicyURLFromLookupResult:(id)arg1 lookupError:(id)arg2 error:(id*)arg3;
- (id)bundleIdentifier;
- (void)cancel;
- (id)debugDescription;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)lookupRequest;
- (id)privacyPolicyURL;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLookupRequest:(id)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (void)start;

@end
