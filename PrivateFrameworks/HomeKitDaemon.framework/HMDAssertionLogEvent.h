/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssertionLogEvent : HMDLogEvent {
    NSString * _reason;
}

@property (readonly, copy) NSString *reason;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReason:(id)arg1;
- (id)reason;

@end
