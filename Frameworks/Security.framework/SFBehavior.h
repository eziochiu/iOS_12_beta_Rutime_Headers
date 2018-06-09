/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFBehavior : NSObject {
    NSXPCConnection * _connection;
    NSString * _family;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *family;

+ (id)behaviorFamily:(id)arg1;

- (void).cxx_destruct;
- (id)configurationNumber:(id)arg1 defaultValue:(id)arg2;
- (id)configurationString:(id)arg1 defaultValue:(id)arg2;
- (id)connection;
- (id)family;
- (bool)feature:(id)arg1 defaultValue:(bool)arg2;
- (bool)featureDisabled:(id)arg1;
- (bool)featureEnabled:(id)arg1;
- (id)initBehaviorFamily:(id)arg1 connection:(id)arg2;
- (unsigned int)ramping:(id)arg1 force:(bool)arg2;
- (void)setConnection:(id)arg1;
- (void)setFamily:(id)arg1;

@end
