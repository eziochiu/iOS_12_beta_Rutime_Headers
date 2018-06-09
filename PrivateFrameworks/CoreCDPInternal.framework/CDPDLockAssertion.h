/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDLockAssertion : NSObject {
    struct __MKBAssertion { } * _assertionRef;
}

+ (id)lock;
+ (id)lockWithError:(id*)arg1;

- (void)unlock;

@end
