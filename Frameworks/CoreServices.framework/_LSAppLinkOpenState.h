/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSAppLinkOpenState : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSDictionary * _browserState;
    NSString * _bundleIdentifier;
    _LSOpenConfiguration * _openConfiguration;
    bool  _openStrategyChanged;
}

@property (copy) NSURL *URL;
@property (copy) NSDictionary *browserState;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;
@property bool openStrategyChanged;

+ (bool)supportsSecureCoding;

- (id)URL;
- (id)browserState;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)openConfiguration;
- (bool)openStrategyChanged;
- (void)setBrowserState:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setOpenConfiguration:(id)arg1;
- (void)setOpenStrategyChanged:(bool)arg1;
- (void)setURL:(id)arg1;

@end
