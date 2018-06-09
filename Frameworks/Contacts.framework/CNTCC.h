/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTCC : NSObject {
    <CNContactsLogger> * _logger;
    bool  _simulateAccessPrompt;
    double  _simulateAccessPromptDelay;
    bool  _simulateAccessPromptGranted;
    long long  _simulateType;
}

@property (nonatomic, readonly) <CNContactsLogger> *logger;
@property (nonatomic) bool simulateAccessPrompt;
@property (nonatomic) double simulateAccessPromptDelay;
@property (nonatomic) bool simulateAccessPromptGranted;
@property (nonatomic) long long simulateType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(id /* block */)arg1;
- (unsigned char)checkAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (unsigned char)isAccessRestricted;
- (id)logger;
- (void)setSimulateAccessPrompt:(bool)arg1;
- (void)setSimulateAccessPromptDelay:(double)arg1;
- (void)setSimulateAccessPromptGranted:(bool)arg1;
- (void)setSimulateType:(long long)arg1;
- (void)simulate:(long long)arg1;
- (bool)simulateAccessPrompt;
- (double)simulateAccessPromptDelay;
- (bool)simulateAccessPromptGranted;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1 withDelay:(double)arg2;
- (long long)simulateType;

@end
