/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkHost : NSObject {
    void * _imp;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *netServiceDomain;
@property (nonatomic, readonly) NSString *netServiceName;
@property (nonatomic, readonly) unsigned long long port;

+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;

- (id)address;
- (id)addressAsText;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (bool)hasSameAddressAs:(id)arg1;
- (id)host;
- (id)init;
- (id)name;
- (id)netServiceDomain;
- (id)netServiceName;
- (unsigned long long)port;
- (void)setName:(id)arg1;

@end
