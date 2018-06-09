/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceAgent : NSObject {
    NSDictionary * _currentAVChatInfo;
}

@property (nonatomic, readonly) NSDictionary *currentAVChatInfo;
@property (nonatomic, retain) NSArray *myAvailableMessages;
@property (nonatomic, retain) NSArray *myAwayMessages;
@property (nonatomic, readonly) unsigned long long requestAudioReflectorStart;
@property (nonatomic, readonly) unsigned long long requestAudioReflectorStop;
@property (nonatomic, readonly) unsigned long long vcCapabilities;

+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)notificationCenter;
+ (long long)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(long long)arg1;
+ (id)sharedAgent;

- (void).cxx_destruct;
- (id)currentAVChatInfo;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (id)myPictureData;
- (id)notificationCenter;
- (unsigned long long)requestAudioReflectorStart;
- (unsigned long long)requestAudioReflectorStop;
- (unsigned long long)requestVideoStillForPerson:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)setMyAvailableMessages:(id)arg1;
- (void)setMyAwayMessages:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (unsigned long long)vcCapabilities;

@end
