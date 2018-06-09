/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFCertificate_Ivars : NSObject {
    long long  certificateType;
    NSString * issuerName;
    struct __SecCertificate { } * secCertificate;
    NSData * serialNumber;
    NSString * subject;
}

- (void).cxx_destruct;

@end
