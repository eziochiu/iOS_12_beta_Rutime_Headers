/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPushHandlerContext : NSObject {
    NSSet * _commands;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _topics;
}

@property (nonatomic, copy) NSSet *commands;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSSet *topics;

- (void).cxx_destruct;
- (id)commands;
- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;
- (id)queue;
- (void)setCommands:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
