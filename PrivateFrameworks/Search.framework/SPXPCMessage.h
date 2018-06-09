/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPXPCMessage : NSObject {
    NSDictionary * _info;
    NSString * _name;
    SPXPCConnection * _receivingConnection;
    NSObject<OS_os_transaction> * _replyTransaction;
    NSObject<OS_xpc_object> * _x_feedbackData;
    NSObject<OS_xpc_object> * _x_message;
    NSObject<OS_xpc_object> * _x_reply;
    NSObject<OS_xpc_object> * _x_reply_connection;
    NSObject<OS_xpc_object> * _x_rootObject;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *feedbackData;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (id)feedbackData;
- (id)info;
- (id)initWithName:(id)arg1;
- (id)name;
- (bool)needsReply;
- (id)rootObjectOfClasses:(id)arg1;
- (id)rootObjectOfClassesForFeedback:(id)arg1;
- (void)sendReply:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)setRootObjectForFeedback:(id)arg1;

@end
