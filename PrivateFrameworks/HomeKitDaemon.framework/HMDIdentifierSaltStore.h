/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIdentifierSaltStore : NSObject {
    NSData * _assistantIdentifierSalt;
    NSData * _identifierSalt;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, retain) NSData *assistantIdentifierSalt;
@property (nonatomic, retain) NSData *identifierSalt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

- (void).cxx_destruct;
- (id)assistantIdentifierSalt;
- (id)identifierSalt;
- (id)init;
- (id)propertyQueue;
- (void)setAssistantIdentifierSalt:(id)arg1;
- (void)setIdentifierSalt:(id)arg1;

@end
