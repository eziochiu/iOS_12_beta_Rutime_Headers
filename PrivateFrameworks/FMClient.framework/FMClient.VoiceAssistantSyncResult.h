/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.VoiceAssistantSyncResult : NSObject <NSSecureCoding> {
    void anchor;
    void devices;
}

@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *devices;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)anchor;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 anchor:(id)arg2;

@end
