/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMAlert : NSObject <NSSecureCoding> {
    NSDictionary * _additionalSettings;
    NSUUID * _alertId;
    id /* block */  _alternateButtonAction;
    NSString * _alternateButtonTitle;
    unsigned long long  _category;
    id /* block */  _defaultButtonAction;
    NSString * _defaultButtonTitle;
    bool  _dismissMsgOnLock;
    bool  _dismissMsgOnUnlock;
    NSString * _msgText;
    NSString * _msgTitle;
    bool  _showMsgInLockScreen;
    double  _timeout;
}

@property (nonatomic, retain) NSDictionary *additionalSettings;
@property (nonatomic, retain) NSUUID *alertId;
@property (nonatomic, copy) id /* block */ alternateButtonAction;
@property (nonatomic, retain) NSString *alternateButtonTitle;
@property (nonatomic) unsigned long long category;
@property (nonatomic, copy) id /* block */ defaultButtonAction;
@property (nonatomic, retain) NSString *defaultButtonTitle;
@property (nonatomic) bool dismissMsgOnLock;
@property (nonatomic) bool dismissMsgOnUnlock;
@property (nonatomic, retain) NSString *msgText;
@property (nonatomic, retain) NSString *msgTitle;
@property (nonatomic) bool showMsgInLockScreen;
@property (nonatomic) double timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalSettings;
- (id)alertId;
- (id /* block */)alternateButtonAction;
- (id)alternateButtonTitle;
- (unsigned long long)category;
- (id /* block */)defaultButtonAction;
- (id)defaultButtonTitle;
- (id)description;
- (bool)dismissMsgOnLock;
- (bool)dismissMsgOnUnlock;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)msgText;
- (id)msgTitle;
- (void)setAdditionalSettings:(id)arg1;
- (void)setAlertId:(id)arg1;
- (void)setAlternateButtonAction:(id /* block */)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setDefaultButtonAction:(id /* block */)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDismissMsgOnLock:(bool)arg1;
- (void)setDismissMsgOnUnlock:(bool)arg1;
- (void)setMsgText:(id)arg1;
- (void)setMsgTitle:(id)arg1;
- (void)setShowMsgInLockScreen:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (bool)showMsgInLockScreen;
- (double)timeout;

@end
