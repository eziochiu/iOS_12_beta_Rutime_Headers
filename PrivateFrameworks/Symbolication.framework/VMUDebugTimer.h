/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDebugTimer : NSObject {
    NSString * _eventMessage;
    NSDate * _eventStartTime;
    NSDate * _programStartTime;
}

+ (id)sharedTimer;
+ (id)sharedTimerIfCreated;

- (void).cxx_destruct;
- (id)init;
- (void)startWithMessage:(id)arg1;
- (void)stop;

@end
