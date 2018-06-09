/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationSound : NCNotificationSound

@property (nonatomic, copy) TLAlertConfiguration *alertConfiguration;
@property (nonatomic, copy) NSDictionary *controllerAttributes;
@property (nonatomic) double maxDuration;
@property (getter=isRepeating, nonatomic) bool repeats;
@property (nonatomic, copy) NSString *ringtoneName;
@property (nonatomic, copy) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, copy) NSDictionary *vibrationPattern;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlertConfiguration:(id)arg1;
- (void)setControllerAttributes:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setVibrationPattern:(id)arg1;

@end
