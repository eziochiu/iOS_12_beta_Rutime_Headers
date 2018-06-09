/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDICIProfileState : NSObject <NSSecureCoding> {
    NSArray * disabledProfiles;
    NSArray * enabledProfiles;
}

@property (nonatomic, readonly) NSArray *disabledProfiles;
@property (nonatomic, readonly) NSArray *enabledProfiles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)disabledProfiles;
- (id)enabledProfiles;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;
- (void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;

@end
