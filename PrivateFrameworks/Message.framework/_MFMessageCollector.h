/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray * _messages;
    MFActivityMonitor * _monitor;
    id /* block */  _transmogrifier;
}

@property (nonatomic, copy) id /* block */ transmogrifier;

- (id)copyMessages;
- (void)dealloc;
- (id)init;
- (id)messages;
- (void)newMessagesAvailable:(id)arg1;
- (void)setTransmogrifier:(id /* block */)arg1;
- (bool)shouldCancel;
- (id /* block */)transmogrifier;

@end
