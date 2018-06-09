/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences> {
    <CNDonationPreferencesLogger> * _logger;
    NSNotificationCenter * _notificationCenter;
    Class  _storageClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDonationsEnabled, nonatomic) bool donationsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNDonationPreferencesLogger> *logger;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) Class storageClass;
@property (readonly) Class superclass;

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 storageClass:(Class)arg2 logger:(id)arg3;
- (bool)isDonationsEnabled;
- (id)logger;
- (id)notificationCenter;
- (void)setDonationsEnabled:(bool)arg1;
- (Class)storageClass;

@end
