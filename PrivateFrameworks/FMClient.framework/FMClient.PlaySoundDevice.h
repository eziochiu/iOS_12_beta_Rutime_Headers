/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {
    void discoveredNearby;
    void serverId;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool discoveredNearby;
@property (nonatomic, readonly) NSString *serverId;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (bool)discoveredNearby;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerId:(id)arg1 discoveredNearby:(bool)arg2;
- (id)serverId;

@end
