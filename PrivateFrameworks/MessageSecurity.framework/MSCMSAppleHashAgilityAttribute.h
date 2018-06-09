/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder> {
    NSData * _hashAgilityValue;
}

@property (readonly) NSData *hashAgilityValue;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)hashAgilityValue;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithHashAgilityValue:(id)arg1;

@end
