/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalyticsActivityTracker : NSObject {
    bool  _canceled;
    Class  _clientClass;
    NSNumber * _measurement;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _start;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientClass:(Class)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
