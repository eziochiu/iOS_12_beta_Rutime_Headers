/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationPreferencesLogger : NSObject <CNDonationPreferencesLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)isDonationsEnabled:(bool)arg1;
- (id)log_t;
- (void)setDonationsEnabled:(bool)arg1;

@end
