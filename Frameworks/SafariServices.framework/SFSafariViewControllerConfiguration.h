/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _barCollapsingEnabled;
    bool  _entersReaderIfAvailable;
    bool  _ephemeral;
    long long  _redirectNotificationBehavior;
}

@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic) bool barCollapsingEnabled;
@property (nonatomic) bool entersReaderIfAvailable;

+ (bool)supportsSecureCoding;

- (bool)_isEphemeral;
- (long long)_redirectNotificationBehavior;
- (void)_setEphemeral:(bool)arg1;
- (bool)barCollapsingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)entersReaderIfAvailable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBarCollapsingEnabled:(bool)arg1;
- (void)setEntersReaderIfAvailable:(bool)arg1;
- (void)set_redirectNotificationBehavior:(long long)arg1;

@end
