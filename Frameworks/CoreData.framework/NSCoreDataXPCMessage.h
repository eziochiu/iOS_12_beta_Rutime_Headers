/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {
    NSString * _contextName;
    NSString * _contextTransactionAuthor;
    NSData * _messageBody;
    unsigned long long  _messageCode;
    NSString * _processName;
    NSString * _token;
}

@property (nonatomic, retain) NSString *contextName;
@property (nonatomic, retain) NSString *contextTransactionAuthor;
@property (nonatomic, retain) NSData *messageBody;
@property unsigned long long messageCode;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *token;

+ (bool)supportsSecureCoding;

- (id)contextName;
- (id)contextTransactionAuthor;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageBody;
- (unsigned long long)messageCode;
- (id)processName;
- (void)setContextName:(id)arg1;
- (void)setContextTransactionAuthor:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageCode:(unsigned long long)arg1;
- (void)setProcessName:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
