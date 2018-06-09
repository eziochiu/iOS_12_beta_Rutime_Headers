/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {
    struct __CFArray { } * certs;
    struct __SecIdentity { } * identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity { }*)arg1 certificates:(struct __CFArray { }*)arg2;

@end
