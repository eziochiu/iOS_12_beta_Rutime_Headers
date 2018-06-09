/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFUserAlert : NSObject {
    NSDictionary * _additionalInfo;
    NSString * _alternateButtonTitle;
    bool  _asBanner;
    NSString * _defaultButtonTitle;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _hasDefaultButton;
    NSURL * _iconURL;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSString * _message;
    NSString * _otherButtonTitle;
    id /* block */  _responseHandler;
    NSURL * _soundURL;
    bool  _textInput;
    NSString * _textInputTitle;
    id /* block */  _textResponseHandler;
    double  _timeout;
    NSString * _title;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSDictionary *additionalInfo;
@property (nonatomic, retain) NSString *alternateButtonTitle;
@property (nonatomic) bool asBanner;
@property (nonatomic, retain) NSString *defaultButtonTitle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) bool hasDefaultButton;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *otherButtonTitle;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) NSURL *soundURL;
@property (nonatomic) bool textInput;
@property (nonatomic, retain) NSString *textInputTitle;
@property (nonatomic, copy) id /* block */ textResponseHandler;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_postNotification:(struct __CFUserNotification { }*)arg1;
- (void)_present;
- (void)_presentBanner;
- (id)additionalInfo;
- (id)alternateButtonTitle;
- (bool)asBanner;
- (struct __CFUserNotification { }*)createNotification;
- (void)dealloc;
- (id)defaultButtonTitle;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (bool)hasDefaultButton;
- (id)iconURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)message;
- (id)otherButtonTitle;
- (void)present;
- (id /* block */)responseHandler;
- (void)setAdditionalInfo:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setAsBanner:(bool)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHasDefaultButton:(bool)arg1;
- (void)setIconURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSoundURL:(id)arg1;
- (void)setTextInput:(bool)arg1;
- (void)setTextInputTitle:(id)arg1;
- (void)setTextResponseHandler:(id /* block */)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)soundURL;
- (bool)textInput;
- (id)textInputTitle;
- (id /* block */)textResponseHandler;
- (double)timeout;
- (id)title;
- (void)userNotificationError:(id)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationTextResponse:(id)arg1;

@end
