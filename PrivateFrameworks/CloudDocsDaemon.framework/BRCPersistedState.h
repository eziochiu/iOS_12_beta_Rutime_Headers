/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _assertionQueue;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadFromClientStateInSession:(id)arg1;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)assertQueue;
- (id)assertionQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssertionQueue:(id)arg1;

@end
