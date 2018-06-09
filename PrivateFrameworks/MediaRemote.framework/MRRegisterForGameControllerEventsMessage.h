/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int inputMode;

- (id)initWithInputMode:(unsigned int)arg1;
- (unsigned int)inputMode;
- (unsigned long long)type;

@end
