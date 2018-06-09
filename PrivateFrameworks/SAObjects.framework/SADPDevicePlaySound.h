/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *devices;

+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2;

- (id)devices;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDevices:(id)arg1;

@end
