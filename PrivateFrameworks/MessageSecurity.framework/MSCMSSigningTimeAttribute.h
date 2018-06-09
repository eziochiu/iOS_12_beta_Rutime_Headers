/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder> {
    NSDate * _signingTime;
}

@property (readonly) NSDate *signingTime;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithSigningTime:(id)arg1;
- (id)signingTime;

@end
