/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.SessionInfo : NSObject <NSSecureCoding> {
    void bundleId;
    void processName;
}

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
