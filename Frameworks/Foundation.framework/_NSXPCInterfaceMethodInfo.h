/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCInterfaceMethodInfo : NSObject {
    NSArray * _arguments;
    bool  _receivesProxyInReply;
    NSArray * _replyArguments;
    NSMethodSignature * _replyMethodSignature;
    int  _replyPosition;
    Class  _returnClass;
    bool  _sendsProxyInArgument;
    unsigned long long  _version;
}

@property (copy) NSArray *arguments;
@property bool receivesProxyInReply;
@property (copy) NSArray *replyArguments;
@property (retain) NSMethodSignature *replyMethodSignature;
@property int replyPosition;
@property Class returnClass;
@property bool sendsProxyInArgument;
@property unsigned long long version;

- (id)arguments;
- (void)dealloc;
- (id)init;
- (bool)receivesProxyInReply;
- (id)replyArguments;
- (id)replyMethodSignature;
- (int)replyPosition;
- (Class)returnClass;
- (bool)sendsProxyInArgument;
- (void)setArguments:(id)arg1;
- (void)setReceivesProxyInReply:(bool)arg1;
- (void)setReplyArguments:(id)arg1;
- (void)setReplyMethodSignature:(id)arg1;
- (void)setReplyPosition:(int)arg1;
- (void)setReturnClass:(Class)arg1;
- (void)setSendsProxyInArgument:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end