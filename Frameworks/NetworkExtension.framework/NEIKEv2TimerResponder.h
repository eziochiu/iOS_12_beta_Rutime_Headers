/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2TimerResponder : NSObject

+ (id)sharedTimerResponder;

- (void)childTimerFired:(id)arg1;
- (void)ikeTimerFired:(id)arg1;

@end
