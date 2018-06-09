/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFamilyInfoLookupTask : AMSTask {
    <AMSFamilyInfoLookupBagContract> * _bagContract;
    NSString * _logKey;
}

@property (nonatomic, retain) <AMSFamilyInfoLookupBagContract> *bagContract;
@property (nonatomic, retain) NSString *logKey;

- (void).cxx_destruct;
- (id)_processURLResult:(id)arg1;
- (id)bagContract;
- (id)initWithBagContract:(id)arg1;
- (id)logKey;
- (id)performFamilyInfoLookup;
- (void)setBagContract:(id)arg1;
- (void)setLogKey:(id)arg1;

@end
