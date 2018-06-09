/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlaybackControlRequest : HSRequest {
    long long  _controlCommand;
    unsigned int  _interfaceID;
}

@property (nonatomic, readonly) long long controlCommand;
@property (nonatomic, readonly) unsigned int interfaceID;

- (long long)controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;
- (unsigned int)interfaceID;

@end
