/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCurrentServerTime : NSObject {
    <IDSCurrentServerTimeProvider> * _serverTimeProvider;
    IDSCurrentServerTimePair * _timePair;
}

@property (nonatomic, retain) <IDSCurrentServerTimeProvider> *serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_refreshServerTime;
- (double)_refreshTimeInterval;
- (void)_storeInitialServerTime;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;
- (id)serverTimeProvider;
- (void)setServerTimeProvider:(id)arg1;
- (void)setTimePair:(id)arg1;
- (id)timePair;

@end
