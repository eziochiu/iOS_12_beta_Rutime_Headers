/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreMessageContext : NSObject {
    NSError * _error;
    NSCoreDataXPCMessage * _message;
    NSDictionary * _result;
    NSXPCStore * _store;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSCoreDataXPCMessage *message;
@property (nonatomic, retain) NSDictionary *result;
@property (nonatomic, readonly) NSXPCStore *store;

- (void)dealloc;
- (id)error;
- (id)initForMessage:(id)arg1 store:(id)arg2;
- (id)message;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)store;

@end
