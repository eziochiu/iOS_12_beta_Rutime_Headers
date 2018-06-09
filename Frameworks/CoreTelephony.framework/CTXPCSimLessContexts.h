/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSimLessContexts : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _subscriptions;
    NSUUID * _voicePreferred;
}

@property (nonatomic, retain) NSArray *subscriptions;
@property (nonatomic, retain) NSUUID *voicePreferred;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findForAccount:(id)arg1;
- (id)findForUuid:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setVoicePreferred:(id)arg1;
- (id)subscriptions;
- (id)voicePreferred;

@end
