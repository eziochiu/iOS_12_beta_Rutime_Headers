/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {
    void authToken;
    void hostName;
    void personId;
}

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
