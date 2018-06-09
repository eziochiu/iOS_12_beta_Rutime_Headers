/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMessagePort : NSPort {
    id  _delegate;
    void * _port;
}

+ (void)_fixNSMessagePortLeak;
+ (bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithRemoteName:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)name;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (bool)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;
- (bool)setName:(id)arg1;

@end
