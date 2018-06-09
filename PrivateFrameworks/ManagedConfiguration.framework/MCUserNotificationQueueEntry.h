/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationQueueEntry : NSObject {
    NSString * _alternateButtonText;
    id /* block */  _completionBlock;
    NSString * _defaultButtonText;
    double  _dismissAfterTimeInterval;
    bool  _displayInAppWhitelistModes;
    bool  _displayOnLockScreen;
    NSString * _identifier;
    NSString * _message;
    id  _notification;
    NSString * _otherButtonText;
    NSString * _title;
}

@property (nonatomic, retain) NSString *alternateButtonText;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *defaultButtonText;
@property (nonatomic) double dismissAfterTimeInterval;
@property (nonatomic) bool displayInAppWhitelistModes;
@property (nonatomic) bool displayOnLockScreen;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) id notification;
@property (nonatomic, retain) NSString *otherButtonText;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)alternateButtonText;
- (id /* block */)completionBlock;
- (id)defaultButtonText;
- (double)dismissAfterTimeInterval;
- (bool)displayInAppWhitelistModes;
- (bool)displayOnLockScreen;
- (id)identifier;
- (id)message;
- (id)notification;
- (id)otherButtonText;
- (void)setAlternateButtonText:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDefaultButtonText:(id)arg1;
- (void)setDismissAfterTimeInterval:(double)arg1;
- (void)setDisplayInAppWhitelistModes:(bool)arg1;
- (void)setDisplayOnLockScreen:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setOtherButtonText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
