/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder> {
    NSSet * _capabilities;
}

@property (readonly) NSSet *capabilities;

- (void).cxx_destruct;
- (id)capabilities;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;

@end
