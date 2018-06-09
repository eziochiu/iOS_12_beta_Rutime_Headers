/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNLoggingContext : NSObject {
    void * _aslClient;
    NSObject<OS_dispatch_queue> * _aslQueue;
    NSString * _category;
    NSString * _subsystem;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly, copy) NSString *subsystem;

+ (id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2;

- (struct __asl_object_s { }*)aslClient;
- (id)aslQueue;
- (id)category;
- (void)dealloc;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)loggingName;
- (void)setupASL;
- (id)subsystem;

@end
