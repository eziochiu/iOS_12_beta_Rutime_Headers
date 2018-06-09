/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVoiceShortcutAction : NSObject <NSCopying, NSSecureCoding> {
    INIntent * _intent;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (void)setVoiceShortcutSuggestions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)userActivity;

@end
