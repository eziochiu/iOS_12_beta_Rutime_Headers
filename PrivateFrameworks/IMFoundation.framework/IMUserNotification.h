/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserNotification : NSObject {
    id  _reserved;
}

@property (nonatomic, readonly) unsigned long long displayFlags;
@property (nonatomic, readonly, retain) NSDictionary *displayInformation;
@property (nonatomic, readonly, retain) id identifier;
@property (nonatomic, retain) NSString *representedApplicationBundle;
@property (nonatomic, readonly) unsigned long long response;
@property (nonatomic, readonly) unsigned long long responseFlags;
@property (nonatomic, readonly, retain) NSDictionary *responseInformation;
@property (nonatomic) bool showInLockScreen;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic) bool usesNotificationCenter;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;

- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2;
- (void)dealloc;
- (unsigned long long)displayFlags;
- (id)displayInformation;
- (id)identifier;
- (id)representedApplicationBundle;
- (unsigned long long)response;
- (unsigned long long)responseFlags;
- (id)responseInformation;
- (void)setRepresentedApplicationBundle:(id)arg1;
- (void)setShowInLockScreen:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUsesNotificationCenter:(bool)arg1;
- (bool)showInLockScreen;
- (double)timeout;
- (id)userInfo;
- (bool)usesNotificationCenter;

@end
